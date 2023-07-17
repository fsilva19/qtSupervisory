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

    connect(Temp,
            SIGNAL(timeout()),
            this,
            SLOT(buttonStart()));

    connect(ui->listWidget_maquinas,
            &QListWidget::itemClicked,
            this,
            &MainWindow::itemClicked);
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
    interv = inteiro*500;
    Temp->setInterval(interv);
}

void MainWindow::getData(){
    Temp->start();
    QString str;
    //QByteArray array;
    QStringList list;
    //qint64 thetime;
    qDebug() << "to get data...";
    QHostAddress ipAddress = socket->peerAddress();
    QString ipString = ipAddress.toString();

    // Atualizando a listas de IP's sem repetir.
    if(ipList.contains(ipString)){

    }else{

      ipList.append(ipString);

    }
    if(socket->state() == QAbstractSocket::ConnectedState){
    if(socket->isOpen()){
      qDebug() << "reading...";
        QStringList teste;
        teste << "get" << ipString << "5";
        QString command = teste.join(' ');
        socket->write(command.toUtf8());
      socket->waitForBytesWritten();
      socket->waitForReadyRead();
      //qDebug() << socket->bytesAvailable();
      while(socket->bytesAvailable()){
        str = socket->readLine().replace("\n","").replace("\r","");

        list = str.split(" ");
        if(list.size() == 2){
          //bool ok;
          str = list.at(0);
          //thetime = str.toLongLong(&ok);
          str = list.at(1);
          //qDebug() << thetime << ": " << str;
        }

        valores = list.at(1).toInt();
        //qDebug() << valores << "\n";
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
    ui->listWidget_maquinas->clear();
    ui->listWidget_maquinas->addItems(ipList);
}

void MainWindow::buttonStart(){
    ui->widget1->setValor(valores);
}
void MainWindow::timerStop(){
    Temp->stop();
}

void MainWindow::itemClicked(QListWidgetItem* item) {
    QString selectedItem = item->text();
    // Realize a ação desejada com o item selecionado

    tcpDisconnect();

    socket->connectToHost(selectedItem,1234);

    if(socket->waitForConnected(3000)){
    qDebug() << "Connected";
    statusBar()->showMessage("Connected");
    }
    else{
    qDebug() << "Disconnected";
    statusBar()->showMessage("Disconnected");
    }

    qDebug() << "Item clicado: " << selectedItem;
}
