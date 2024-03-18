#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ptr_dll = new TokaLuentoDLL(this);
    connect(ptr_dll,SIGNAL(number(short)),
            this,SLOT(handleNumber(short)));

    connect(ui->pushButton,SIGNAL(clicked(bool)),
            this,SLOT(handleClick()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleClick()
{

    short n = ptr_dll->getAndGenerateNumber();
    ui->lineEdit1->setText(QString::number(n));
}

void MainWindow::handleNumber(short num)
{
    ui->lineEdit2->setText(QString::number(num));

}

