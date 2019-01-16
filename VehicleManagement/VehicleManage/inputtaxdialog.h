#ifndef INPUTTAXDIALOG_H
#define INPUTTAXDIALOG_H

#include <QDialog>
#include "basedialog.h"

namespace Ui {
class InputTaxDialog;
}

class InputTaxDialog : public BaseDialog
{
    Q_OBJECT

public:
    explicit InputTaxDialog(QWidget *parent = 0);
    ~InputTaxDialog();

private slots:
    void on_pBtnHomepage_clicked();

    void on_pBtnDone_clicked();

private:
    Ui::InputTaxDialog *ui;
};

#endif // INPUTTAXDIALOG_H
