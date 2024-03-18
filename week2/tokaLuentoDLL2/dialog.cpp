#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked(bool)),
            this,SLOT(clickHandler()));
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::clickHandler()
{
   QString s = ui->lineEdit->text();
   emit sendString(s);
}
