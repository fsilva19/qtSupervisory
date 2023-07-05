/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLineEdit *lineEdit_ipServ;
    QPushButton *pushButton_Update;
    QLabel *label_ip;
    QLabel *label_Time;
    QListWidget *listWidget_maquinas;
    QPushButton *pushButton_Start;
    QPushButton *pushButton_Stop;
    QSlider *horizontalSlider_Timing;
    QLabel *label_TimingVariavel;
    QSplitter *splitter;
    QPushButton *pushButton_Connect;
    QPushButton *pushButton_Disconnect;
    QGraphicsView *graphicsView;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(488, 427);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        lineEdit_ipServ = new QLineEdit(centralWidget);
        lineEdit_ipServ->setObjectName("lineEdit_ipServ");
        lineEdit_ipServ->setGeometry(QRect(10, 30, 201, 24));
        pushButton_Update = new QPushButton(centralWidget);
        pushButton_Update->setObjectName("pushButton_Update");
        pushButton_Update->setGeometry(QRect(130, 260, 80, 24));
        label_ip = new QLabel(centralWidget);
        label_ip->setObjectName("label_ip");
        label_ip->setGeometry(QRect(10, 10, 81, 16));
        label_Time = new QLabel(centralWidget);
        label_Time->setObjectName("label_Time");
        label_Time->setGeometry(QRect(10, 290, 81, 16));
        listWidget_maquinas = new QListWidget(centralWidget);
        listWidget_maquinas->setObjectName("listWidget_maquinas");
        listWidget_maquinas->setGeometry(QRect(10, 100, 201, 151));
        pushButton_Start = new QPushButton(centralWidget);
        pushButton_Start->setObjectName("pushButton_Start");
        pushButton_Start->setGeometry(QRect(7, 330, 99, 24));
        pushButton_Stop = new QPushButton(centralWidget);
        pushButton_Stop->setObjectName("pushButton_Stop");
        pushButton_Stop->setGeometry(QRect(110, 330, 98, 24));
        horizontalSlider_Timing = new QSlider(centralWidget);
        horizontalSlider_Timing->setObjectName("horizontalSlider_Timing");
        horizontalSlider_Timing->setGeometry(QRect(10, 310, 181, 16));
        horizontalSlider_Timing->setMinimum(1);
        horizontalSlider_Timing->setMaximum(100);
        horizontalSlider_Timing->setOrientation(Qt::Horizontal);
        label_TimingVariavel = new QLabel(centralWidget);
        label_TimingVariavel->setObjectName("label_TimingVariavel");
        label_TimingVariavel->setGeometry(QRect(200, 310, 16, 16));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName("splitter");
        splitter->setGeometry(QRect(10, 60, 201, 24));
        splitter->setOrientation(Qt::Horizontal);
        pushButton_Connect = new QPushButton(splitter);
        pushButton_Connect->setObjectName("pushButton_Connect");
        splitter->addWidget(pushButton_Connect);
        pushButton_Disconnect = new QPushButton(splitter);
        pushButton_Disconnect->setObjectName("pushButton_Disconnect");
        splitter->addWidget(pushButton_Disconnect);
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(220, 40, 256, 271));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 488, 20));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_Update->setText(QCoreApplication::translate("MainWindow", "Update", nullptr));
        label_ip->setText(QCoreApplication::translate("MainWindow", "IP do servidor", nullptr));
        label_Time->setText(QCoreApplication::translate("MainWindow", "Timing", nullptr));
        pushButton_Start->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        pushButton_Stop->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        label_TimingVariavel->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_Connect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        pushButton_Disconnect->setText(QCoreApplication::translate("MainWindow", "Disconnect", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
