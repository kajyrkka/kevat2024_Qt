#include "tokaluentodll.h"

TokaLuentoDLL::TokaLuentoDLL(QObject * parent):QObject(parent)
{
    qDebug()<<"DLL luotu!";
}

TokaLuentoDLL::~TokaLuentoDLL()
{
    qDebug()<<"DLL Tuhottu!";
}

short TokaLuentoDLL::getAndGenerateNumber()
{
    short num = gen.generate();
    emit number(num);
    return num;
}


