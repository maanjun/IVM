#ifndef PAYINSURANCEDONEDIALOG_H
#define PAYINSURANCEDONEDIALOG_H

#include <QDialog>
#include "basedialog.h"
#include "USBPrinter.h"

namespace Ui {
class PayinsuranceDoneDialog;
}

class PayinsuranceDoneDialog : public BaseDialog
{
    Q_OBJECT

public:
    explicit PayinsuranceDoneDialog(QWidget *parent = 0);
    ~PayinsuranceDoneDialog();

private:
	USBPrinter *m_pUSBPrinter;

private slots:
	void on_pBtnHomepage_clicked();

	void on_pBtnDone_clicked();

private:
    Ui::PayinsuranceDoneDialog *ui;
};

#endif // PAYINSURANCEDONEDIALOG_H
