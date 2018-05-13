#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTime>
#include <QWebEngineView>
#include <QWebEnginePage>
#include <QWebChannel>
#include "server.h"
#include <QLabel>

#include <opencv2/highgui/highgui.hpp>
#include <opencv2/opencv.hpp>
#include <opencv2/video/video.hpp>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
class Server;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void QtTest();
private slots:
    void on_pushButton_clicked();
    void timeCountsFunction();
    void callJava();
private:
    Ui::MainWindow *ui;

    Ui::Server *server_;
    QDockWidget* dock_server_;

    QTimer* timer_1;
    QTimer* timer_2;


private slots:
    void readFarme0();       // 读取当前帧信息
    void readFarme2();       // 读取当前帧信息
    void closeCamara();     // 关闭摄像头。

    void on_detect_carButton_clicked();
//    void paintEvent(QPaintEvent *event);
private:
    QTimer    *timer;
    QImage    *imag;
    cv::VideoCapture cam;
    cv::Mat  frame;
};

#endif // MAINWINDOW_H
