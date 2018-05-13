#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>
#include <math.h>

#include<cv.h>
#include<opencv2/opencv.hpp>

#include <QCoreApplication>
#include <Python.h>

char flag = 0;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    printf("11111111111111111111");

    ui->setupUi(this);
    timer   = new QTimer(this);
    imag    = new QImage();         // 初始化

    server_ = new Ui::Server(this);
    dock_server_ = new QDockWidget("Info", this);
    dock_server_->setWidget(server_);
    addDockWidget(Qt::LeftDockWidgetArea, dock_server_);
    //dock_server_->setFloating(1);

    QString strPath = "file://";
    strPath += qApp->applicationDirPath();
    strPath += "/index.html";
    qDebug() << strPath;
    QWebChannel *channel = new QWebChannel(this);
    channel->registerObject("MainWindow", this);
    ui->webView->page()->setWebChannel(channel);
    ui->webView->page()->load(QUrl(strPath));


    timer_1 = new QTimer(this);
    timer->start(100);

    timer_2 = new QTimer(this);
    timer_2->start(1000);
    printf("1111111222");
//    cam = cv::VideoCapture(0);//打开摄像头，从摄像头中获取视频
//    if(!cam.isOpened())
//        std::cerr << "Can't open camera!" <<std::endl;;
//    printf("11111113333");

   // printf("%d",flag);
    timer->start(100);              // 开始计时，超时则发出timeout()信号
    if(flag == 0){
         connect(timer, SIGNAL(timeout()), this, SLOT(readFarme0()));  // 时间到，读取当前摄像头信息
         flag = 1;
    }
    if(flag == 1){
        connect(timer, SIGNAL(timeout()), this, SLOT(readFarme2()));  // 时间到，读取当前摄像头信息
        flag = 0;
    }


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::timeCountsFunction()
{
    ui->lineEditLng->setText(QString::number(server_->jsonGPS["longitude"].toDouble()));
    //qDebug() <<"\n->"<< server_->jsonGPS["altitude"].toString();
    ui->lineEditLat->setText(QString::number(server_->jsonGPS["latitude"].toDouble()));
    ui->Alt->setText(QString::number(server_->jsonGPS["altitude"].toDouble()));

    ui->VelH->setText(QString::number(sqrt(pow(server_->jsonGPS["velocityY"].toDouble(),2)+pow(server_->jsonGPS["velocityX"].toDouble(), 2))));
    ui->VelV->setText(QString::number(server_->jsonGPS["velocityZ"].toDouble()));

    ui->Bat->setText(QString::number(server_->jsonBattery["BatteryEnergyRemainingPercent"].toDouble()));
}

void MainWindow::QtTest()
{
    qDebug() << "Qt Hello world!";
}

void MainWindow::on_pushButton_clicked()
{
    connect(timer_1,SIGNAL(timeout()),this,SLOT(timeCountsFunction()));
    connect(timer_2,SIGNAL(timeout()),this,SLOT(callJava()));
}

void MainWindow::callJava()
{
    QString strJs_ = "myFunction(%1, %2, ";
    strJs_ += QString::number(server_->jsonGPS["yaw"].toDouble(), 10, 1);
    strJs_ += ")";
    QString strJs = strJs_
            .arg(ui->lineEditLng->text().toDouble()*0.01+116)
            .arg(ui->lineEditLat->text().toDouble()*0.01+29);
    ui->webView->page()->runJavaScript(strJs);
    qDebug() << "\n->" <<strJs;
}

/*********************************
********* 读取摄像头信息 ***********
**********************************/

void MainWindow::readFarme0()
{

//    cam >> frame;// 从摄像头中抓取并返回每一帧
//    cv::rectangle(frame,cvPoint(20,200),cvPoint(200,300),cvScalar(255,0,0),1,1,0);
//     //将抓取到的帧，转换为QImage格式。QImage::Format_RGB888不同的摄像头用不同的格式。
//    QImage image = QImage(frame.data, frame.cols, frame.rows, static_cast<int>(frame.step), QImage::Format_RGB888).rgbSwapped().scaled(640,360,Qt::KeepAspectRatioByExpanding);
//    ui->label_3->setPixmap(QPixmap::fromImage(image));  // 将图片显示到label上
   //cv::Mat frame = cv::imread( "/home/wwh/Desktop/00.jpg",1);//读入一站图片 暂时读入桌面上的一个文件


    cv::Mat frame = cv::imread( "/home/wwh/Desktop/0.jpg",1);//读入一站图片 暂时读入桌面上的一个文件
    //cv::cvtColor(frame,frame,CV_BGR2RGB);//opencv读取图片按照BGR方式读取，为了正常显示，所以将BGR转为RGB
     QImage image = QImage(frame.data, frame.cols, frame.rows, static_cast<int>(frame.step), QImage::Format_RGB888).rgbSwapped().scaled(1280,720,Qt::KeepAspectRatioByExpanding);
     cv::waitKey(100);
    ui->label_3->setPixmap(QPixmap::fromImage(image)); //将图片显示在QLabel上

    QFile my_file("/home/wwh/Desktop/number.txt");//将QFile与相关文件关联
   if(!my_file.open(QIODevice::ReadOnly | QIODevice::Text))//以只读和文本模式打开文件
   {
       qDebug() <<"Could not open file for Reading";
       return;
   }
   QTextStream outText(&my_file);  //将QTextStream与特定文件关联
   QString number = outText.readAll();  //读出QTextStream对象中所有内容
   my_file.close(); //关闭文件
   ui->lineEditnumber->setText(number);


}

void MainWindow::readFarme2()
{
     cv::Mat frame = cv::imread( "/home/wwh/Desktop/2.jpg",1);//读入一站图片 暂时读入桌面上的一个文件
    //cv::cvtColor(frame,frame,CV_BGR2RGB);//opencv读取图片按照BGR方式读取，为了正常显示，所以将BGR转为RGB
     QImage image = QImage(frame.data, frame.cols, frame.rows, static_cast<int>(frame.step), QImage::Format_RGB888).rgbSwapped().scaled(1280,720,Qt::KeepAspectRatioByExpanding);
     cv::waitKey(100);
    ui->label_3->setPixmap(QPixmap::fromImage(image)); //将图片显示在QLabel上
}

/*******************************
***关闭摄像头，释放资源，必须释放***
********************************/
void MainWindow::closeCamara()
{
    timer->stop();         // 停止读取数据。
    cam.release();//释放内存；
}

void MainWindow::on_detect_carButton_clicked()
{

       PyRun_SimpleString("import sys");

      //导入test.py模块
       QString setSysPath = QString("sys.path.append('/home/wwh/Desktop')").arg(QCoreApplication::applicationDirPath());
       PyRun_SimpleString(setSysPath.toStdString().c_str());
       PyObject* pModule = PyImport_ImportModule("readfile");
       if (!pModule)
       {
           qDebug()<<"Cant open python file!\n";
           return ;
       }
       //获取test模块中的hello函数
       PyObject* pread= PyObject_GetAttrString(pModule,"readfile");

       if(!pread)
       {
           qDebug()<<"Get function demo_video failed";
           return ;
       }

       //调用hello函数
       PyObject_CallFunction(pread,NULL);

           // 调用函数

        PyObject* pRet = PyObject_CallObject(pread,NULL);

           // 获取参数
       long result;
       result = PyInt_AsLong(pRet);
       PyArg_ParseTuple(pRet, "i", &result);    //i表示转换成int型变量
       ui->lineEditnumber->setText(QString::number(result));


       //结束，释放python
       Py_Finalize();
}
