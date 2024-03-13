#ifndef PINUI_H
#define PINUI_H

#include <QDialog>
#include <QDebug>

namespace Ui {
class pinUI;
}

class pinUI : public QDialog
{
    Q_OBJECT

public:
    explicit pinUI(QWidget *parent = nullptr);
    ~pinUI();

signals:
    void sendNumberToMainWindow(short);

private slots:
    void handleClick();

private:
    Ui::pinUI *ui;
};

#endif // PINUI_H
