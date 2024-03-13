#include "pinui.h"
#include "ui_pinui.h"

pinUI::pinUI(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pinUI)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(handleClick()));

}

pinUI::~pinUI()
{
    //delete ui;
    qDebug()<<"Deleting automatically pinUI object";
}

void pinUI::handleClick()
{
    QString number = ui->lineEdit->text();
    emit sendNumberToMainWindow(number.toUShort());
}
