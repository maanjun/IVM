#ifndef INPUTDONEDIALOG_H
#define INPUTDONEDIALOG_H

#include "common.h"
#include "basedialog.h"
#include "operateMysql.h"
#include "USBPrinter.h"

namespace Ui {
class InputDoneDialog;
}

class InputDoneDialog : public BaseDialog
{
    Q_OBJECT

public:
    explicit InputDoneDialog(QWidget *parent = 0);
    ~InputDoneDialog();

	void startTimer(int nMillisecond = 30000);

private:
	OperateMysql m_operateMysql;

	QString m_qstrSumaryTemplateHtml;

	QString m_qstrDetailTemplateHtml;

	USBPrinter *m_pUSBPrinter;

private slots:
    void on_pBtnHomepage_clicked();

    void on_pBtnDone_clicked();

private:
    Ui::InputDoneDialog *ui;
};

#endif // INPUTDONEDIALOG_H
