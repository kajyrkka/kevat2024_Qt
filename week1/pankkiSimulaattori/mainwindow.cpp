#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(handleInsertCardClick()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleInsertCardClick()
{
    reader = new rfidCardReader(this);
    connect(reader,SIGNAL(sendNumberToMainWindow(short)),this,SLOT(handleCardNumberRead(short)));
    reader->show();
}

void MainWindow::handleCardNumberRead(short num)
{
    ui->cardNumberLineEdit->setText(QString::number(num));
    qDebug()<<"Deleting reader object";
    delete reader;
    reader = nullptr;

    // Ja sitten luodaan pinUi olio
    pinReader = new pinUI(this);
    connect(pinReader,SIGNAL(sendNumberToMainWindow(short)),this,SLOT(handlePinNumberRead(short)));
    pinReader->show();
}

void MainWindow::handlePinNumberRead(short num)
{
    ui->pinNumberLineEdit->setText(QString::number(num));
    qDebug()<<"Deleting pinUI object";
    delete pinReader;
}

