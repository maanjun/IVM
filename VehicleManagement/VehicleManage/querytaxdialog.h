#ifndef QUERYTAXDIALOG_H
#define QUERYTAXDIALOG_H

//#include <QDialog>
#include "basedialog.h"

namespace Ui {
class QueryTaxDialog;
}

class QueryTaxDialog : public BaseDialog
{
    Q_OBJECT

public:
    explicit QueryTaxDialog(QWidget *parent = 0);
    ~QueryTaxDialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::QueryTaxDialog *ui;
};

#endif // QUERYTAXDIALOG_H
