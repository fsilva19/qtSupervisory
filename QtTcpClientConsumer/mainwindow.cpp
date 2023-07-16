#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>
#include <QString>

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    socket = new QTcpSocket(this);
    tcpConnect();

    //botão start
    connect(ui->pushButton_Start,
          SIGNAL(clicked()),
          this,
          SLOT(getData()));

    //botão stop
    connect(ui->pushButton_Stop,
          SIGNAL(clicked()),
          this,
          SLOT(timerStop()));

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

    //Criando variável do intervalo de tempo
    connect(ui->horizontalSlider_Timing,
          SIGNAL(valueChanged(int)),
          this,
          SLOT(valorInterv(int)));

    Temp = new QTimer(this);
    Temp->setInterval(interv);
    //intervalo start
    connect(Temp,
          SIGNAL(timeout()),
          this,
          SLOT(timerEvent()));


    connect(ui->pushButton_Update,
          SIGNAL(clicked()),
          this,
          SLOT(updateIp()));

    connect(ui->pushButton_Start,
            SIGNAL(clicked()),
            this,
            SLOT(buttonStart()));
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

void MainWindow::valorInterv(int inteiro){
    interv = inteiro*100;
    Temp->setInterval(interv);
}

void MainWindow::getData(){
    Temp->start();
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

        valores = list.at(1).toInt();
        qDebug() << valores << "\n";
        //ui->listWidget_maquinas->addItem();
      }
    }
    }
}


MainWindow::~MainWindow()
{
    delete socket;
    delete ui;
}
void MainWindow::timerEvent(){
    getData();
}

void MainWindow::updateIp(){
    //ui->listWidget_maquinas->addItem(*valores);
    //ui->listWidget_maquinas->addItem(ui->lineEdit_ipServ->text());
}

void MainWindow::buttonStart(){
    ui->widget1->setValor(valores);
}
void MainWindow::timerStop(){
    Temp->stop();
}
