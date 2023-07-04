/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
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
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(463, 421);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButtonGet = new QPushButton(centralWidget);
        pushButtonGet->setObjectName(QString::fromUtf8("pushButtonGet"));
        pushButtonGet->setGeometry(QRect(130, 290, 101, 29));
        lineEdit_ip = new QLineEdit(centralWidget);
        lineEdit_ip->setObjectName(QString::fromUtf8("lineEdit_ip"));
        lineEdit_ip->setGeometry(QRect(10, 10, 211, 24));
        textEdit_exibidorDeDados = new QTextEdit(centralWidget);
        textEdit_exibidorDeDados->setObjectName(QString::fromUtf8("textEdit_exibidorDeDados"));
        textEdit_exibidorDeDados->setGeometry(QRect(233, 10, 221, 341));
        textEdit_exibidorDeDados->setTabletTracking(false);
        textEdit_exibidorDeDados->setAutoFillBackground(false);
        horizontalSlider_min = new QSlider(centralWidget);
        horizontalSlider_min->setObjectName(QString::fromUtf8("horizontalSlider_min"));
        horizontalSlider_min->setGeometry(QRect(10, 100, 141, 16));
        horizontalSlider_min->setOrientation(Qt::Horizontal);
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(10, 40, 211, 24));
        splitter->setOrientation(Qt::Horizontal);
        pushButton_Connect = new QPushButton(splitter);
        pushButton_Connect->setObjectName(QString::fromUtf8("pushButton_Connect"));
        splitter->addWidget(pushButton_Connect);
        pushButton_Disconnect = new QPushButton(splitter);
        pushButton_Disconnect->setObjectName(QString::fromUtf8("pushButton_Disconnect"));
        splitter->addWidget(pushButton_Disconnect);
        lcdNumber_min = new QLCDNumber(centralWidget);
        lcdNumber_min->setObjectName(QString::fromUtf8("lcdNumber_min"));
        lcdNumber_min->setGeometry(QRect(160, 110, 64, 23));
        horizontalSlider_max = new QSlider(centralWidget);
        horizontalSlider_max->setObjectName(QString::fromUtf8("horizontalSlider_max"));
        horizontalSlider_max->setGeometry(QRect(10, 170, 141, 16));
        horizontalSlider_max->setOrientation(Qt::Horizontal);
        lcdNumber_max = new QLCDNumber(centralWidget);
        lcdNumber_max->setObjectName(QString::fromUtf8("lcdNumber_max"));
        lcdNumber_max->setGeometry(QRect(160, 180, 64, 23));
        label_min = new QLabel(centralWidget);
        label_min->setObjectName(QString::fromUtf8("label_min"));
        label_min->setGeometry(QRect(160, 80, 49, 16));
        label_max = new QLabel(centralWidget);
        label_max->setObjectName(QString::fromUtf8("label_max"));
        label_max->setGeometry(QRect(160, 150, 49, 16));
        pushButton_Stop = new QPushButton(centralWidget);
        pushButton_Stop->setObjectName(QString::fromUtf8("pushButton_Stop"));
        pushButton_Stop->setGeometry(QRect(118, 330, 103, 24));
        pushButton_Start = new QPushButton(centralWidget);
        pushButton_Start->setObjectName(QString::fromUtf8("pushButton_Start"));
        pushButton_Start->setGeometry(QRect(10, 330, 104, 24));
        label_intervalo = new QLabel(centralWidget);
        label_intervalo->setObjectName(QString::fromUtf8("label_intervalo"));
        label_intervalo->setGeometry(QRect(10, 240, 49, 16));
        horizontalSlider_intervalo = new QSlider(centralWidget);
        horizontalSlider_intervalo->setObjectName(QString::fromUtf8("horizontalSlider_intervalo"));
        horizontalSlider_intervalo->setGeometry(QRect(70, 240, 131, 20));
        horizontalSlider_intervalo->setOrientation(Qt::Horizontal);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(210, 240, 16, 16));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 463, 20));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(horizontalSlider_intervalo, SIGNAL(valueChanged(int)), label, SLOT(setNum(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButtonGet->setText(QApplication::translate("MainWindow", "getData", nullptr));
        pushButton_Connect->setText(QApplication::translate("MainWindow", "Connect", nullptr));
        pushButton_Disconnect->setText(QApplication::translate("MainWindow", "Disconnect", nullptr));
        label_min->setText(QApplication::translate("MainWindow", "Min", nullptr));
        label_max->setText(QApplication::translate("MainWindow", "Max", nullptr));
        pushButton_Stop->setText(QApplication::translate("MainWindow", "Stop", nullptr));
        pushButton_Start->setText(QApplication::translate("MainWindow", "Start", nullptr));
        label_intervalo->setText(QApplication::translate("MainWindow", "Timing(s)", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
