#ifndef MORTGAGEBASE_H
#define MORTGAGEBASE_H

#include "BaseDialog.h"
#include "ui_mortgageBase.h"
#include "checkiddialog.h"
#include "facerecognicedialog.h"
#include "mortgageInputmessage.h"
#include "mortgageSelect.h"
#include "mortgageCheck.h"

class mortgageBase : public BaseDialog
{
	Q_OBJECT

public:
	mortgageBase(QWidget *parent = Q_NULLPTR);
	~mortgageBase();

public:
	CheckIDDialog *pcheckid_select_;
	CheckIDDialog *pcheckid_input_;
	FaceRecogniceDialog *m_pFaceRecogniceDialog;
	mortgageSelect *pmortage_select_;//��˰��ѯ
	mortgageInputmessage *pmortgage_input_message_;//��˰����
	mortgageCheck *pmortgage_check_;//��˰���

private slots:
	void on_pBtnGohome_clicked();
	void on_btnmortgageSelect_clicked();
	void on_btnmortgageReport_clicked();
	void on_btnmortgageCheck_clicked();

private:
	Ui::mortgageBase ui;
	void initFrame();
	void fini();
};


#endif