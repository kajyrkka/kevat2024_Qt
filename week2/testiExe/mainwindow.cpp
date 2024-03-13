#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ptr1 = new Dialog(this);
    ptr2 = new Dll_kolmas;

    ptr2->printText();
    ptr1->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}

