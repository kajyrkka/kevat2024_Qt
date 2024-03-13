#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "dll_kolmas_global.h"

namespace Ui {
class Dialog;
}

class DLL_KOLMAS_EXPORT Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
