#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "cardreader.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();



private slots:
    void handleInserCardClick();
    void handleCardNumberRead(short);
    void handlePinNumberRead(short);

private:
    Ui::MainWindow *ui;
    short attemptsLeft;
    short cardNumber,pinNumber;
    short correctCardNumber = 1234;
    short correctPinNumber=1122;
    cardReader * readerPtr;
};
#endif // MAINWINDOW_H
