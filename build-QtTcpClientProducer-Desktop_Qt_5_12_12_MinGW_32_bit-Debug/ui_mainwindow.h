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
    QPushButton *pushButtonPut;
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
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(468, 427);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButtonPut = new QPushButton(centralWidget);
        pushButtonPut->setObjectName(QString::fromUtf8("pushButtonPut"));
        pushButtonPut->setGeometry(QRect(300, 300, 101, 29));
        lineEdit_ipServ = new QLineEdit(centralWidget);
        lineEdit_ipServ->setObjectName(QString::fromUtf8("lineEdit_ipServ"));
        lineEdit_ipServ->setGeometry(QRect(10, 30, 201, 24));
        pushButton_Update = new QPushButton(centralWidget);
        pushButton_Update->setObjectName(QString::fromUtf8("pushButton_Update"));
        pushButton_Update->setGeometry(QRect(130, 260, 80, 24));
        label_ip = new QLabel(centralWidget);
        label_ip->setObjectName(QString::fromUtf8("label_ip"));
        label_ip->setGeometry(QRect(10, 10, 81, 16));
        label_Time = new QLabel(centralWidget);
        label_Time->setObjectName(QString::fromUtf8("label_Time"));
        label_Time->setGeometry(QRect(10, 290, 81, 16));
        listWidget_maquinas = new QListWidget(centralWidget);
        listWidget_maquinas->setObjectName(QString::fromUtf8("listWidget_maquinas"));
        listWidget_maquinas->setGeometry(QRect(10, 100, 201, 151));
        pushButton_Start = new QPushButton(centralWidget);
        pushButton_Start->setObjectName(QString::fromUtf8("pushButton_Start"));
        pushButton_Start->setGeometry(QRect(7, 330, 99, 24));
        pushButton_Stop = new QPushButton(centralWidget);
        pushButton_Stop->setObjectName(QString::fromUtf8("pushButton_Stop"));
        pushButton_Stop->setGeometry(QRect(110, 330, 98, 24));
        horizontalSlider_Timing = new QSlider(centralWidget);
        horizontalSlider_Timing->setObjectName(QString::fromUtf8("horizontalSlider_Timing"));
        horizontalSlider_Timing->setGeometry(QRect(10, 310, 181, 16));
        horizontalSlider_Timing->setMinimum(1);
        horizontalSlider_Timing->setMaximum(100);
        horizontalSlider_Timing->setOrientation(Qt::Horizontal);
        label_TimingVariavel = new QLabel(centralWidget);
        label_TimingVariavel->setObjectName(QString::fromUtf8("label_TimingVariavel"));
        label_TimingVariavel->setGeometry(QRect(200, 310, 16, 16));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(10, 60, 201, 24));
        splitter->setOrientation(Qt::Horizontal);
        pushButton_Connect = new QPushButton(splitter);
        pushButton_Connect->setObjectName(QString::fromUtf8("pushButton_Connect"));
        splitter->addWidget(pushButton_Connect);
        pushButton_Disconnect = new QPushButton(splitter);
        pushButton_Disconnect->setObjectName(QString::fromUtf8("pushButton_Disconnect"));
        splitter->addWidget(pushButton_Disconnect);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 468, 20));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(horizontalSlider_Timing, SIGNAL(valueChanged(int)), label_TimingVariavel, SLOT(setNum(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButtonPut->setText(QApplication::translate("MainWindow", "putData", nullptr));
        pushButton_Update->setText(QApplication::translate("MainWindow", "Update", nullptr));
        label_ip->setText(QApplication::translate("MainWindow", "IP do servidor", nullptr));
        label_Time->setText(QApplication::translate("MainWindow", "Timing", nullptr));
        pushButton_Start->setText(QApplication::translate("MainWindow", "Start", nullptr));
        pushButton_Stop->setText(QApplication::translate("MainWindow", "Stop", nullptr));
        label_TimingVariavel->setText(QApplication::translate("MainWindow", "1", nullptr));
        pushButton_Connect->setText(QApplication::translate("MainWindow", "Connect", nullptr));
        pushButton_Disconnect->setText(QApplication::translate("MainWindow", "Disconnect", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
