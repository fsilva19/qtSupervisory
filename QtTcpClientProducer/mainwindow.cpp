#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent), ui(new Ui::MainWindow){
  ui->setupUi(this);
  socket = new QTcpSocket(this);
  tcpConnect();

  connect(ui->pushButtonPut,
          SIGNAL(clicked(bool)),
          this,
          SLOT(putData()));

  //tcp conectado:
  connect(ui->pushButton_Connect,
          SIGNAL(clicked()),
          SLOT(tcpConnect()));

  //tcp desconectado:
  connect(ui->pushButton_Disconnect,
          SIGNAL(clicked()),
          SLOT(tcpDisconnect()));

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

  //H_SLIDER INTERVALO
  connect(ui->horizontalSlider_intervalo,
          SIGNAL(valueChanged(int)),
          ui->label_intervaloInt,
          SLOT(setNum(int)));
}

void MainWindow::tcpConnect(){
  socket->connectToHost(ui->lineEdit_ip->text(),1234);

  ui->textEdit_exibidorDeDados->setText(
      ui->lineEdit_ip->text());

  if(socket->waitForConnected(3000)){
    qDebug() << "Connected";
      statusBar()->showMessage("Connected");
  }
  else{
    qDebug() << "Disconnected";
      statusBar()->showMessage("Disconnected");
  }
}

void MainWindow::tcpDisconnect()
{
  socket->disconnectFromHost();
  statusBar()->showMessage("Disconnected");
}

void MainWindow::putData(){
  QDateTime datetime;
  QString str;
  qint64 msecdate;

  if(socket->state()== QAbstractSocket::ConnectedState){

    msecdate = QDateTime::currentDateTime().toMSecsSinceEpoch();
    str = "set "+ QString::number(msecdate) + " " +
        QString::number(rand()%35)+"\r\n";

      qDebug() << str;
      qDebug() << socket->write(str.toStdString().c_str())
               << " bytes written";
      if(socket->waitForBytesWritten(3000)){
        qDebug() << "wrote";
      }
  }
}

MainWindow::~MainWindow(){
  delete socket;
  delete ui;
}
