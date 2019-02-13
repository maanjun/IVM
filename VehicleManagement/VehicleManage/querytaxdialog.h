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
	void startTimer(int nMillisecond = 30000);
private slots:
	void on_pBtnHomepage_clicked();

	void on_pBtnDone_clicked();

private:
    Ui::QueryTaxDialog *ui;
	QString m_qstrIDTemplateHtml;
	void ShowTaxInfo();
};

#endif // QUERYTAXDIALOG_H
