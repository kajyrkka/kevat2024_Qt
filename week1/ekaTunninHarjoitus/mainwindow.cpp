#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->nappi1,SIGNAL(clicked(bool)),
            this,SLOT(handleInserCardClick()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleInserCardClick()
{
   qDebug()<<"handleInsertCardClick funktiossa";
   readerPtr = new cardReader(this);
   connect(readerPtr,SIGNAL(sendCardNumToMain(short)),
           this,SLOT(handleCardNumberRead(short)));
   readerPtr->show();



}

void MainWindow::handleCardNumberRead(short n)
{
    qDebug()<<"MainWindow handleCardNumberRead funktiossa";
    qDebug()<<"numero on = "<<n;
    cardNumber = n;
    ui->CurrentCardNumLineEdit->setText(QString::number(n));
    delete readerPtr;
}

void MainWindow::handlePinNumberRead(short)
{

}

