#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ptr_dll = new Dialog(this);
    connect(ptr_dll,SIGNAL(sendString(QString)),
            this,SLOT(handleDLLSignal(QString)));

    connect(ui->pushButton,SIGNAL(clicked(bool)),
            this,SLOT(handleClick()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleDLLSignal(QString s)
{
    ui->lineEdit->setText(s);
}

void MainWindow::handleClick()
{
    ptr_dll->show();
}

