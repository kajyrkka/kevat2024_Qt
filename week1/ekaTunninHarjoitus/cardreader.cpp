#include "cardreader.h"
#include "ui_cardreader.h"
#include <QDebug>

cardReader::cardReader(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cardReader)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked(bool)),
            this,SLOT(handleClick()));
}

cardReader::~cardReader()
{
    qDebug()<<"Tuhoutui automaattisesti";
    delete ui;
}

void cardReader::handleClick()
{
    qDebug()<<"RFID card reade sim handleClick()";
    QString number = ui->lineEdit->text();
    short num = number.toShort();
    emit sendCardNumToMain(num);

}
