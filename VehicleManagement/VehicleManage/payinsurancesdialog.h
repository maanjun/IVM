#ifndef PAYINSURANCEESDIALOG_H
#define PAYINSURANCEESDIALOG_H

#include <QDialog>
#include "basedialog.h"
#include "checkiddialog.h"
#include "queryinsurancedialog.h"
#include "readcertificatedialog.h"
#include "declareinsurancedialog.h"
#include "confirmpayinsurancedialog.h"
#include "payinsurancedonedialog.h"
#include "face_recognition.h"
#include "inputinsurancedialog.h"


namespace Ui {
class PayinsurancesDialog;
}

class PayinsurancesDialog : public BaseDialog
{
    Q_OBJECT
public:
	// 完税查询
	CheckIDDialog *m_pCheckIDDialogQueryInsurance;
	QueryInsuranceDialog *m_pQueryInsuranceDialog;
	// 申报
	CheckIDDialog *m_pCheckIDDialogDeclare;
	ReadCertificateDialog *m_pReadCertificateDialog;
	DeclareInsuranceDialog *m_pDeclareInsuranceDialog;
	ConfirmPayinsuranceDialog *m_pConfirmPayinsuranceDialog;
	PayinsuranceDoneDialog *m_pPayinsuranceDoneDialog;
	// 缴税
	face_recognition *m_pface_recognition;
	InputInsuranceDialog *m_pInputInsuranceDialog;

public:
    explicit PayinsurancesDialog(QWidget *parent = 0);
    ~PayinsurancesDialog();

	void init();

	void initFrame();

private slots:
    void on_pBtnPaytexesQuery_clicked();

    void on_pBtnDeclare_clicked();

    void on_pBtnPayinsurances_clicked();

private:
    Ui::PayinsurancesDialog *ui;
};

#endif // PAYINSURANCEESDIALOG_H
