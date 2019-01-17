#ifndef PAYINSURANCEDONEDIALOG_H
#define PAYINSURANCEDONEDIALOG_H

#include <QDialog>
#include "basedialog.h"

namespace Ui {
class PayinsuranceDoneDialog;
}

class PayinsuranceDoneDialog : public BaseDialog
{
    Q_OBJECT

public:
    explicit PayinsuranceDoneDialog(QWidget *parent = 0);
    ~PayinsuranceDoneDialog();

private slots:
	void on_pBtnHomepage_clicked();

	void on_pBtnNext_clicked();

private:
    Ui::PayinsuranceDoneDialog *ui;
};

#endif // PAYINSURANCEDONEDIALOG_H
