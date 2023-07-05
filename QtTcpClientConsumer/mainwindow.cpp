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

  //CÓPIA DO TEXTO IP:
  connect(ui->pushButton_Connect,
          SIGNAL(clicked()),
          SLOT(copia()));

  //H_SLIDER MINIMO
  connect(ui->horizontalSlider_min,
          SIGNAL(valueChanged(int)),
          ui->lcdNumber_min,
          SLOT(display(int)));

  //H_SLIDER MAXIMO
  connect(ui->horizontalSlider_max,
          SIGNAL(valueChanged(int)),
          ui->lcdNumber_max,
          SLOT(display(int)));

  connect(ui->horizontalSlider_intervalo,
          SIGNAL(valueChanged(int)),
          ui->label_intervaloInt,
          SLOT(setNum(int)));

}

void MainWindow::copia(){ //envia o endereço IP
  ui->textEdit_exibidorDeDados->setText(
      ui->lineEdit_ip->text());
}

void MainWindow::tcpConnect(){
  socket->connectToHost("127.0.0.1",1234);
  if(socket->waitForConnected(3000)){
    qDebug() << "Connected";
  }
  else{
    qDebug() << "Disconnected";
  }
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

