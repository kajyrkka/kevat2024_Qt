#ifndef DIALOG_H
#define DIALOG_H
#include "tokaLuentoDLL2_global.h"
#include <QDialog>

namespace Ui {
class Dialog;
}

class TOKALUENTODLL2_EXPORT Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

signals:
    void sendString(QString);

private slots:
    void clickHandler();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
