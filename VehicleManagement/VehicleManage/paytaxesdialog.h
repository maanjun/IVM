#ifndef PAYTAXESDIALOG_H
#define PAYTAXESDIALOG_H

#include <QDialog>
#include "basedialog.h"
#include "checkiddialog.h"
#include "querytaxdialog.h"

namespace Ui {
class PaytaxesDialog;
}

class PaytaxesDialog : public BaseDialog
{
    Q_OBJECT
private:
	CheckIDDialog *m_pCheckIDDialogQueryTax;
	QueryTaxDialog *m_pQueryTaxDialog;
	CheckIDDialog *m_pCheckIDDialogDeclare;

public:
    explicit PaytaxesDialog(QWidget *parent = 0);
    ~PaytaxesDialog();

	void init();

	void initFrame();

private slots:
    void on_pBtnPaytexesQuery_clicked();

    void on_pBtnDeclare_clicked();

    void on_pBtnPaytaxes_clicked();

private:
    Ui::PaytaxesDialog *ui;
};

#endif // PAYTAXESDIALOG_H
