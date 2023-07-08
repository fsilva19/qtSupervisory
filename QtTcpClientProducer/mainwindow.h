#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QDebug>
#include <QWidget>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();
  void timerEvent(QTimerEvent *event);

public slots:
  void putData();

  void tcpConnect();
  void tcpDisconnect();

  void valorMin(int);
  void valorMax(int);
  void valorInterv(int);

private:
  int min;
  int max;
  int seg;

  Ui::MainWindow *ui;
  QTcpSocket *socket;
};

#endif // MAINWINDOW_H
