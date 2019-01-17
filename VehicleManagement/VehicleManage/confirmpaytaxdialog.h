#ifndef CONFIRMPAYTAXDIALOG_H
#define CONFIRMPAYTAXDIALOG_H

#include <QDialog>
#include "basedialog.h"

namespace Ui {
class ConfirmPaytaxDialog;
}

class ConfirmPaytaxDialog : public BaseDialog
{
    Q_OBJECT

public:
    explicit ConfirmPaytaxDialog(QWidget *parent = 0);
    ~ConfirmPaytaxDialog();

private slots:
	void on_pBtnHomepage_clicked();

	void on_pBtnNext_clicked();

private:
    Ui::ConfirmPaytaxDialog *ui;
};

#endif // CONFIRMPAYTAXDIALOG_H
