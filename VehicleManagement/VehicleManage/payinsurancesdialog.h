#ifndef PAYINSURANCEESDIALOG_H
#define PAYINSURANCEESDIALOG_H

#include <QDialog>
#include "basedialog.h"
#include "checkiddialog.h"
#include "queryinsurancedialog.h"
#include "readdrivinglisencedialog.h"
#include "declareinsurancedialog.h"
#include "confirmpayinsurancedialog.h"
#include "payinsurancedonedialog.h"
#include "facerecognicedialog.h"
#include "inputinsurancedialog.h"
#include "querydeclareinsuranceresultdialog.h"


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
	CheckIDDialog *m_pCheckIDDialogDeclareInsurance;
	ReadDrivinglisenceDialog *m_pReadDrivinglisenceDialog;
	DeclareInsuranceDialog *m_pDeclareInsuranceDialog;
	ConfirmPayinsuranceDialog *m_pConfirmPayinsuranceDialog;
	PayinsuranceDoneDialog *m_pPayinsuranceDoneDialog;
	// 缴税
	FaceRecogniceDialog *m_pFaceRecogniceDialog;
	InputInsuranceDialog *m_pInputInsuranceDialog;
	QueryDeclareInsuranceResultDialog *m_pQueryDeclareInsuranceResultDialog;

public:
    explicit PayinsurancesDialog(QWidget *parent = 0);
    ~PayinsurancesDialog();

	void init();

	void initFrame();

	void finit();

private slots:
	void on_pBtnGohome_clicked();

    void on_pBtnPaytexesQuery_clicked();

    void on_pBtnDeclare_clicked();

    void on_pBtnPayinsurances_clicked();

private:
    Ui::PayinsurancesDialog *ui;
};

#endif // PAYINSURANCEESDIALOG_H
