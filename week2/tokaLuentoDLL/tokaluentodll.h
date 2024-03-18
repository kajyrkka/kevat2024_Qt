#ifndef TOKALUENTODLL_H
#define TOKALUENTODLL_H
#include <QDebug>
#include <QObject>
#include <QRandomGenerator>

#include "tokaLuentoDLL_global.h"

class TOKALUENTODLL_EXPORT TokaLuentoDLL : public QObject
{
    Q_OBJECT
public:
    TokaLuentoDLL(QObject * parent);
    ~TokaLuentoDLL();
    short getAndGenerateNumber();

signals:
    void number(short);
private:
    QRandomGenerator gen;

};





#endif // TOKALUENTODLL_H
