#ifndef PAYTAXDONEDIALOG_H
#define PAYTAXDONEDIALOG_H

#include <QDialog>
#include "basedialog.h"

namespace Ui {
class PaytaxDoneDialog;
}

class PaytaxDoneDialog : public BaseDialog
{
    Q_OBJECT

public:
    explicit PaytaxDoneDialog(QWidget *parent = 0);
    ~PaytaxDoneDialog();

private slots:
	void on_pBtnHomepage_clicked();

	void on_pBtnNext_clicked();

private:
    Ui::PaytaxDoneDialog *ui;
};

#endif // PAYTAXDONEDIALOG_H
