#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QDebug>
#include <QWidget>
#include <QTimer>
#include <QString>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
  

public slots:
    void getData();

    void tcpConnect();
    void tcpDisconnect();

    void valorInterv(int);
    void timerStop();
    void timerEvent();
    void updateIp();
    void buttonStart();
private:
    QStringList ipList;
    int interv;
    int valores;
    QTimer *Temp;
    Ui::MainWindow *ui;
    QTcpSocket *socket;
};

#endif // MAINWINDOW_H
