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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *lineEdit_ip;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_Connect;
    QPushButton *pushButton_Disconnect;
    QHBoxLayout *horizontalLayout_4;
    QSlider *horizontalSlider_min;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_min;
    QLCDNumber *lcdNumber_min;
    QHBoxLayout *horizontalLayout_5;
    QSlider *horizontalSlider_max;
    QVBoxLayout *verticalLayout;
    QLabel *label_max;
    QLCDNumber *lcdNumber_max;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_intervalo;
    QSlider *horizontalSlider_intervalo;
    QLabel *label_intervaloInt;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_start;
    QPushButton *pushButton_stop;
    QTextBrowser *textBrowser_exibidor;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(501, 378);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(200, 200, 200, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(212, 212, 212, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(85, 85, 85, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(113, 113, 113, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        QBrush brush6(QColor(170, 170, 170, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        QBrush brush7(QColor(255, 255, 220, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush8(QColor(0, 0, 0, 127));
        brush8.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        QBrush brush9(QColor(85, 85, 85, 127));
        brush9.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        MainWindow->setPalette(palette);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 10, 481, 301));
        groupBox->setMinimumSize(QSize(481, 0));
        horizontalLayout_6 = new QHBoxLayout(groupBox);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName("verticalLayout_3");
        lineEdit_ip = new QLineEdit(groupBox);
        lineEdit_ip->setObjectName("lineEdit_ip");
        QFont font;
        font.setPointSize(11);
        lineEdit_ip->setFont(font);

        verticalLayout_3->addWidget(lineEdit_ip);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_Connect = new QPushButton(groupBox);
        pushButton_Connect->setObjectName("pushButton_Connect");

        horizontalLayout->addWidget(pushButton_Connect);

        pushButton_Disconnect = new QPushButton(groupBox);
        pushButton_Disconnect->setObjectName("pushButton_Disconnect");

        horizontalLayout->addWidget(pushButton_Disconnect);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSlider_min = new QSlider(groupBox);
        horizontalSlider_min->setObjectName("horizontalSlider_min");
        horizontalSlider_min->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(horizontalSlider_min);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_min = new QLabel(groupBox);
        label_min->setObjectName("label_min");

        verticalLayout_2->addWidget(label_min);

        lcdNumber_min = new QLCDNumber(groupBox);
        lcdNumber_min->setObjectName("lcdNumber_min");
        QPalette palette1;
        QBrush brush10(QColor(35, 35, 35, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        lcdNumber_min->setPalette(palette1);

        verticalLayout_2->addWidget(lcdNumber_min);


        horizontalLayout_4->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalSlider_max = new QSlider(groupBox);
        horizontalSlider_max->setObjectName("horizontalSlider_max");
        horizontalSlider_max->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(horizontalSlider_max);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName("verticalLayout");
        label_max = new QLabel(groupBox);
        label_max->setObjectName("label_max");

        verticalLayout->addWidget(label_max);

        lcdNumber_max = new QLCDNumber(groupBox);
        lcdNumber_max->setObjectName("lcdNumber_max");
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Light, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        lcdNumber_max->setPalette(palette2);

        verticalLayout->addWidget(lcdNumber_max);


        horizontalLayout_5->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_intervalo = new QLabel(groupBox);
        label_intervalo->setObjectName("label_intervalo");

        horizontalLayout_3->addWidget(label_intervalo);

        horizontalSlider_intervalo = new QSlider(groupBox);
        horizontalSlider_intervalo->setObjectName("horizontalSlider_intervalo");
        horizontalSlider_intervalo->setMinimum(1);
        horizontalSlider_intervalo->setMaximum(100);
        horizontalSlider_intervalo->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(horizontalSlider_intervalo);

        label_intervaloInt = new QLabel(groupBox);
        label_intervaloInt->setObjectName("label_intervaloInt");
        label_intervaloInt->setMinimumSize(QSize(15, 10));

        horizontalLayout_3->addWidget(label_intervaloInt);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButton_start = new QPushButton(groupBox);
        pushButton_start->setObjectName("pushButton_start");

        horizontalLayout_2->addWidget(pushButton_start);

        pushButton_stop = new QPushButton(groupBox);
        pushButton_stop->setObjectName("pushButton_stop");

        horizontalLayout_2->addWidget(pushButton_stop);


        verticalLayout_3->addLayout(horizontalLayout_2);


        horizontalLayout_6->addLayout(verticalLayout_3);

        textBrowser_exibidor = new QTextBrowser(groupBox);
        textBrowser_exibidor->setObjectName("textBrowser_exibidor");
        textBrowser_exibidor->setFont(font);

        horizontalLayout_6->addWidget(textBrowser_exibidor);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 501, 21));
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
        lineEdit_ip->setText(QCoreApplication::translate("MainWindow", "127.0.0.1", nullptr));
        pushButton_Connect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        pushButton_Disconnect->setText(QCoreApplication::translate("MainWindow", "Disconnect", nullptr));
        label_min->setText(QCoreApplication::translate("MainWindow", "Min", nullptr));
        label_max->setText(QCoreApplication::translate("MainWindow", "Max", nullptr));
        label_intervalo->setText(QCoreApplication::translate("MainWindow", "Timing(s)", nullptr));
        label_intervaloInt->setText(QString());
        pushButton_start->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        pushButton_stop->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
