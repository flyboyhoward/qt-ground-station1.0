/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "qwebengineview.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_10;
    QLabel *Bat;
    QLabel *label_13;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLabel *VelH;
    QLabel *label_14;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QLabel *VelV;
    QLabel *label_12;
    QWebEngineView *webView;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QLabel *label;
    QLineEdit *lineEditLat;
    QLabel *label_2;
    QLineEdit *lineEditLng;
    QLabel *label_4;
    QLabel *Alt;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *detect_carButton;
    QLabel *label_5;
    QLineEdit *lineEditnumber;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1228, 528);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout_3 = new QHBoxLayout(centralWidget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setBaseSize(QSize(0, 0));
        label_3->setLineWidth(1);

        horizontalLayout_3->addWidget(label_3);

        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_2->addWidget(label_10);

        Bat = new QLabel(groupBox_3);
        Bat->setObjectName(QStringLiteral("Bat"));

        horizontalLayout_2->addWidget(Bat);

        label_13 = new QLabel(groupBox_3);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout_2->addWidget(label_13);


        gridLayout_2->addLayout(horizontalLayout_2, 3, 3, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_6->addWidget(label_6);

        VelH = new QLabel(groupBox_3);
        VelH->setObjectName(QStringLiteral("VelH"));

        horizontalLayout_6->addWidget(VelH);

        label_14 = new QLabel(groupBox_3);
        label_14->setObjectName(QStringLiteral("label_14"));

        horizontalLayout_6->addWidget(label_14);


        gridLayout_2->addLayout(horizontalLayout_6, 3, 1, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_8->addWidget(label_8);

        VelV = new QLabel(groupBox_3);
        VelV->setObjectName(QStringLiteral("VelV"));

        horizontalLayout_8->addWidget(VelV);

        label_12 = new QLabel(groupBox_3);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_8->addWidget(label_12);


        gridLayout_2->addLayout(horizontalLayout_8, 3, 2, 1, 1);

        webView = new QWebEngineView(groupBox_3);
        webView->setObjectName(QStringLiteral("webView"));

        gridLayout_2->addWidget(webView, 1, 1, 1, 4);

        groupBox = new QGroupBox(groupBox_3);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEditLat = new QLineEdit(groupBox);
        lineEditLat->setObjectName(QStringLiteral("lineEditLat"));

        horizontalLayout->addWidget(lineEditLat);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEditLng = new QLineEdit(groupBox);
        lineEditLng->setObjectName(QStringLiteral("lineEditLng"));

        horizontalLayout->addWidget(lineEditLng);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout->addWidget(label_4);

        Alt = new QLabel(groupBox);
        Alt->setObjectName(QStringLiteral("Alt"));

        horizontalLayout->addWidget(Alt);


        gridLayout_2->addWidget(groupBox, 2, 1, 1, 4);

        groupBox_2 = new QGroupBox(groupBox_3);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        horizontalLayout_4 = new QHBoxLayout(groupBox_2);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        detect_carButton = new QPushButton(groupBox_2);
        detect_carButton->setObjectName(QStringLiteral("detect_carButton"));

        horizontalLayout_4->addWidget(detect_carButton);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_4->addWidget(label_5);

        lineEditnumber = new QLineEdit(groupBox_2);
        lineEditnumber->setObjectName(QStringLiteral("lineEditnumber"));

        horizontalLayout_4->addWidget(lineEditnumber);


        gridLayout_2->addWidget(groupBox_2, 4, 1, 1, 3);


        horizontalLayout_3->addWidget(groupBox_3);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1228, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_3->setText(QString());
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Map", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "Battery:", nullptr));
        Bat->setText(QApplication::translate("MainWindow", "99", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "%", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Velocity_H:", nullptr));
        VelH->setText(QApplication::translate("MainWindow", "3.3", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "m/s", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Velocity_V:", nullptr));
        VelV->setText(QApplication::translate("MainWindow", "3.3", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "m/s", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "GPS Data", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Map_Refresh", nullptr));
        label->setText(QApplication::translate("MainWindow", "Lat", nullptr));
        lineEditLat->setText(QApplication::translate("MainWindow", "29.6169", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Lng", nullptr));
        lineEditLng->setText(QApplication::translate("MainWindow", "106.498", nullptr));
        label_4->setText(QApplication::translate("MainWindow", " Alt ", nullptr));
        Alt->setText(QApplication::translate("MainWindow", "000.0", nullptr));
        groupBox_2->setTitle(QString());
        detect_carButton->setText(QApplication::translate("MainWindow", "detect_car", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "number", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
