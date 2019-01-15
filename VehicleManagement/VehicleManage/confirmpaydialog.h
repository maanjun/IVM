#ifndef CONFIRMPAYDIALOG_H
#define CONFIRMPAYDIALOG_H

#include <QDialog>
#include "basedialog.h"

namespace Ui {
class ConfirmPayDialog;
}

class ConfirmPayDialog : public BaseDialog
{
    Q_OBJECT

public:
    explicit ConfirmPayDialog(QWidget *parent = 0);
    ~ConfirmPayDialog();

private:
    Ui::ConfirmPayDialog *ui;
};

#endif // CONFIRMPAYDIALOG_H
