#ifndef PAYTAXESDIALOG_H
#define PAYTAXESDIALOG_H

#include <QDialog>
#include "basedialog.h"
#include "checkiddialog.h"
#include "querytaxdialog.h"
#include "readcertificatedialog.h"
#include "declaretaxdialog.h"
#include "confirmpaytaxdialog.h"
#include "paytaxdonedialog.h"
#include "face_recognition.h"
#include "inputtaxdialog.h"


namespace Ui {
class PaytaxesDialog;
}

class PaytaxesDialog : public BaseDialog
{
    Q_OBJECT
public:
	// 完税查询
	CheckIDDialog *m_pCheckIDDialogQueryTax;
	QueryTaxDialog *m_pQueryTaxDialog;
	// 申报
	CheckIDDialog *m_pCheckIDDialogDeclare;
	ReadCertificateDialog *m_pReadCertificateDialog;
	DeclareTaxDialog *m_pDeclareTaxDialog;
	ConfirmPaytaxDialog *m_pConfirmPaytaxDialog;
	PaytaxDoneDialog *m_pPaytaxDoneDialog;
	// 缴税
	face_recognition *m_pface_recognition;
	InputTaxDialog *m_pInputTaxDialog;

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
