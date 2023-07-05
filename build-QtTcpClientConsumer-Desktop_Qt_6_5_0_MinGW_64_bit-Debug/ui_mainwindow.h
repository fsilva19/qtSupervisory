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
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButtonGet;
    QLineEdit *lineEdit_ip;
    QTextEdit *textEdit_exibidorDeDados;
    QSlider *horizontalSlider_min;
    QSplitter *splitter;
    QPushButton *pushButton_Connect;
    QPushButton *pushButton_Disconnect;
    QLCDNumber *lcdNumber_min;
    QSlider *horizontalSlider_max;
    QLCDNumber *lcdNumber_max;
    QLabel *label_min;
    QLabel *label_max;
    QPushButton *pushButton_Stop;
    QPushButton *pushButton_Start;
    QLabel *label_intervalo;
    QSlider *horizontalSlider_intervalo;
    QLabel *label_intervaloInt;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(463, 421);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        pushButtonGet = new QPushButton(centralWidget);
        pushButtonGet->setObjectName("pushButtonGet");
        pushButtonGet->setGeometry(QRect(130, 290, 101, 29));
        lineEdit_ip = new QLineEdit(centralWidget);
        lineEdit_ip->setObjectName("lineEdit_ip");
        lineEdit_ip->setGeometry(QRect(10, 10, 211, 24));
        textEdit_exibidorDeDados = new QTextEdit(centralWidget);
        textEdit_exibidorDeDados->setObjectName("textEdit_exibidorDeDados");
        textEdit_exibidorDeDados->setGeometry(QRect(233, 10, 221, 341));
        textEdit_exibidorDeDados->setTabletTracking(false);
        textEdit_exibidorDeDados->setAutoFillBackground(false);
        horizontalSlider_min = new QSlider(centralWidget);
        horizontalSlider_min->setObjectName("horizontalSlider_min");
        horizontalSlider_min->setGeometry(QRect(10, 100, 141, 16));
        horizontalSlider_min->setOrientation(Qt::Horizontal);
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName("splitter");
        splitter->setGeometry(QRect(10, 40, 211, 24));
        splitter->setOrientation(Qt::Horizontal);
        pushButton_Connect = new QPushButton(splitter);
        pushButton_Connect->setObjectName("pushButton_Connect");
        splitter->addWidget(pushButton_Connect);
        pushButton_Disconnect = new QPushButton(splitter);
        pushButton_Disconnect->setObjectName("pushButton_Disconnect");
        splitter->addWidget(pushButton_Disconnect);
        lcdNumber_min = new QLCDNumber(centralWidget);
        lcdNumber_min->setObjectName("lcdNumber_min");
        lcdNumber_min->setGeometry(QRect(160, 110, 64, 23));
        horizontalSlider_max = new QSlider(centralWidget);
        horizontalSlider_max->setObjectName("horizontalSlider_max");
        horizontalSlider_max->setGeometry(QRect(10, 170, 141, 16));
        horizontalSlider_max->setOrientation(Qt::Horizontal);
        lcdNumber_max = new QLCDNumber(centralWidget);
        lcdNumber_max->setObjectName("lcdNumber_max");
        lcdNumber_max->setGeometry(QRect(160, 180, 64, 23));
        label_min = new QLabel(centralWidget);
        label_min->setObjectName("label_min");
        label_min->setGeometry(QRect(160, 80, 49, 16));
        label_max = new QLabel(centralWidget);
        label_max->setObjectName("label_max");
        label_max->setGeometry(QRect(160, 150, 49, 16));
        pushButton_Stop = new QPushButton(centralWidget);
        pushButton_Stop->setObjectName("pushButton_Stop");
        pushButton_Stop->setGeometry(QRect(118, 330, 103, 24));
        pushButton_Start = new QPushButton(centralWidget);
        pushButton_Start->setObjectName("pushButton_Start");
        pushButton_Start->setGeometry(QRect(10, 330, 104, 24));
        label_intervalo = new QLabel(centralWidget);
        label_intervalo->setObjectName("label_intervalo");
        label_intervalo->setGeometry(QRect(10, 240, 49, 16));
        horizontalSlider_intervalo = new QSlider(centralWidget);
        horizontalSlider_intervalo->setObjectName("horizontalSlider_intervalo");
        horizontalSlider_intervalo->setGeometry(QRect(70, 240, 131, 20));
        horizontalSlider_intervalo->setOrientation(Qt::Horizontal);
        label_intervaloInt = new QLabel(centralWidget);
        label_intervaloInt->setObjectName("label_intervaloInt");
        label_intervaloInt->setGeometry(QRect(210, 240, 16, 16));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 463, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        //QObject::connect(horizontalSlider_intervalo, &QSlider::valueChanged, label_intervaloInt, &QLabel::setNum);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButtonGet->setText(QCoreApplication::translate("MainWindow", "getData", nullptr));
        pushButton_Connect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        pushButton_Disconnect->setText(QCoreApplication::translate("MainWindow", "Disconnect", nullptr));
        label_min->setText(QCoreApplication::translate("MainWindow", "Min", nullptr));
        label_max->setText(QCoreApplication::translate("MainWindow", "Max", nullptr));
        pushButton_Stop->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        pushButton_Start->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        label_intervalo->setText(QCoreApplication::translate("MainWindow", "Timing(s)", nullptr));
        label_intervaloInt->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
