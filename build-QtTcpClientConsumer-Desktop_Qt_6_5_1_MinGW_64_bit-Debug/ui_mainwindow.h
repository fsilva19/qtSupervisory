/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "plotter.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_ip;
    QLineEdit *lineEdit_ipServ;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_Connect;
    QPushButton *pushButton_Disconnect;
    QListWidget *listWidget_maquinas;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_Update;
    QVBoxLayout *verticalLayout;
    QLabel *label_Time;
    QHBoxLayout *horizontalLayout_3;
    QSlider *horizontalSlider_Timing;
    QLabel *label_TimingVariavel;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_Start;
    QPushButton *pushButton_Stop;
    QSpacerItem *horizontalSpacer;
    Plotter *widget1;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(687, 471);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(9, 0, 551, 331));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_ip = new QLabel(layoutWidget);
        label_ip->setObjectName("label_ip");

        verticalLayout_3->addWidget(label_ip);

        lineEdit_ipServ = new QLineEdit(layoutWidget);
        lineEdit_ipServ->setObjectName("lineEdit_ipServ");

        verticalLayout_3->addWidget(lineEdit_ipServ);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_Connect = new QPushButton(layoutWidget);
        pushButton_Connect->setObjectName("pushButton_Connect");

        horizontalLayout->addWidget(pushButton_Connect);

        pushButton_Disconnect = new QPushButton(layoutWidget);
        pushButton_Disconnect->setObjectName("pushButton_Disconnect");

        horizontalLayout->addWidget(pushButton_Disconnect);


        verticalLayout_3->addLayout(horizontalLayout);

        listWidget_maquinas = new QListWidget(layoutWidget);
        listWidget_maquinas->setObjectName("listWidget_maquinas");

        verticalLayout_3->addWidget(listWidget_maquinas);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName("verticalLayout_2");
        pushButton_Update = new QPushButton(layoutWidget);
        pushButton_Update->setObjectName("pushButton_Update");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_Update->sizePolicy().hasHeightForWidth());
        pushButton_Update->setSizePolicy(sizePolicy);
        pushButton_Update->setMaximumSize(QSize(80, 25));
        pushButton_Update->setLayoutDirection(Qt::RightToLeft);

        verticalLayout_2->addWidget(pushButton_Update);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName("verticalLayout");
        label_Time = new QLabel(layoutWidget);
        label_Time->setObjectName("label_Time");

        verticalLayout->addWidget(label_Time);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSlider_Timing = new QSlider(layoutWidget);
        horizontalSlider_Timing->setObjectName("horizontalSlider_Timing");
        horizontalSlider_Timing->setMinimum(1);
        horizontalSlider_Timing->setMaximum(100);
        horizontalSlider_Timing->setTracking(true);
        horizontalSlider_Timing->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(horizontalSlider_Timing);

        label_TimingVariavel = new QLabel(layoutWidget);
        label_TimingVariavel->setObjectName("label_TimingVariavel");
        label_TimingVariavel->setMinimumSize(QSize(15, 0));

        horizontalLayout_3->addWidget(label_TimingVariavel);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButton_Start = new QPushButton(layoutWidget);
        pushButton_Start->setObjectName("pushButton_Start");

        horizontalLayout_2->addWidget(pushButton_Start);

        pushButton_Stop = new QPushButton(layoutWidget);
        pushButton_Stop->setObjectName("pushButton_Stop");

        horizontalLayout_2->addWidget(pushButton_Stop);


        verticalLayout_3->addLayout(horizontalLayout_2);


        horizontalLayout_4->addLayout(verticalLayout_3);

        horizontalSpacer = new QSpacerItem(4, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        horizontalLayout_4->setStretch(0, 4);

        horizontalLayout_5->addLayout(horizontalLayout_4);

        widget1 = new Plotter(layoutWidget);
        widget1->setObjectName("widget1");

        horizontalLayout_5->addWidget(widget1);

        horizontalLayout_5->setStretch(0, 40);
        horizontalLayout_5->setStretch(1, 60);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 687, 21));
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
        label_ip->setText(QCoreApplication::translate("MainWindow", "IP do servidor", nullptr));
        lineEdit_ipServ->setText(QCoreApplication::translate("MainWindow", "127.0.0.1", nullptr));
        pushButton_Connect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        pushButton_Disconnect->setText(QCoreApplication::translate("MainWindow", "Disconnect", nullptr));
        pushButton_Update->setText(QCoreApplication::translate("MainWindow", "Update", nullptr));
        label_Time->setText(QCoreApplication::translate("MainWindow", "Timing", nullptr));
        label_TimingVariavel->setText(QString());
        pushButton_Start->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        pushButton_Stop->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
