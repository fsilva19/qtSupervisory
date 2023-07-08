#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  socket = new QTcpSocket(this);
  tcpConnect();

  connect(ui->pushButtonGet,
          SIGNAL(clicked(bool)),
          this,
          SLOT(getData()));

  //tcp conectado:
  connect(ui->pushButton_Connect,
          SIGNAL(clicked()),
          SLOT(tcpConnect()));

  //tcp desconectado:
  connect(ui->pushButton_Disconnect,
          SIGNAL(clicked()),
          SLOT(tcpDisconnect()));

  //Slider de tempo
  connect(ui->horizontalSlider_Timing,
          SIGNAL(valueChanged(int)),
          ui->label_TimingVariavel,
          SLOT(setNum(int)));
}

void MainWindow::tcpConnect(){
  socket->connectToHost(ui->lineEdit_ipServ->text(),1234);

  if(socket->waitForConnected(3000)){
      qDebug() << "Connected";
      statusBar()->showMessage("Connected");
  }
  else{
      qDebug() << "Disconnected";
      statusBar()->showMessage("Disconnected");
  }
}
void MainWindow::tcpDisconnect(){
  socket->disconnectFromHost();
  statusBar()->showMessage("Disconnected");
}

void MainWindow::getData(){
  QString str;
  QByteArray array;
  QStringList list;
  qint64 thetime;
  qDebug() << "to get data...";
  if(socket->state() == QAbstractSocket::ConnectedState){
    if(socket->isOpen()){
      qDebug() << "reading...";
      socket->write("get 127.0.0.1 5\r\n");
      socket->waitForBytesWritten();
      socket->waitForReadyRead();
      qDebug() << socket->bytesAvailable();
      while(socket->bytesAvailable()){
        str = socket->readLine().replace("\n","").replace("\r","");
        list = str.split(" ");
        if(list.size() == 2){
          bool ok;
          str = list.at(0);
          thetime = str.toLongLong(&ok);
          str = list.at(1);
          qDebug() << thetime << ": " << str;
        }
      }
    }
  }
}


MainWindow::~MainWindow()
{
  delete socket;
  delete ui;
}
