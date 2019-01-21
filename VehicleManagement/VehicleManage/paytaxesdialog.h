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
#include "facerecognicedialog.h"
#include "inputtaxdialog.h"
#include "querydeclaretaxresultdialog.h"


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
	CheckIDDialog *m_pCheckIDDialogDeclareTax;
	ReadCertificateDialog *m_pReadCertificateDialog;
	DeclareTaxDialog *m_pDeclareTaxDialog;
	ConfirmPaytaxDialog *m_pConfirmPaytaxDialog;
	PaytaxDoneDialog *m_pPaytaxDoneDialog;
	// 缴税
	FaceRecogniceDialog *m_pFaceRecogniceDialog;
	InputTaxDialog *m_pInputTaxDialog;
	QueryDeclareTaxResultDialog *m_pQueryDeclareTaxResultDialog;

public:
    explicit PaytaxesDialog(QWidget *parent = 0);
    ~PaytaxesDialog();

	void init();

	void initFrame();

	void finit();

private slots:
	void on_pBtnGohome_clicked();

    void on_pBtnPaytexesQuery_clicked();

    void on_pBtnDeclare_clicked();

    void on_pBtnPaytaxes_clicked();

private:
    Ui::PaytaxesDialog *ui;
};

#endif // PAYTAXESDIALOG_H
