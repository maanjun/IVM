#pragma once

#include "common.h"
#include <QMainWindow>
//#include <QDialog>
#include "ui_vehiclemanage.h"
#include "checkiddialog.h"
#include "vehicleinfodialog.h"
#include "checkreceiptdialog.h"
#include "inputdonedialog.h"
#include "selectlicensedialog.h"
#include "paytaxesdialog.h"
#include "payinsurancesdialog.h"
#include "mortgageBase.h"

#include "operateMysql.h"

#include <QString>
#include <QDebug>

class VehicleManage : public QMainWindow
{
	Q_OBJECT

public:
	VehicleManage(QWidget *parent = Q_NULLPTR);
	~VehicleManage();

signals:
	void goHomeVehicleSignal();

private slots:
	void on_pBtnCheck_clicked();

	void on_pBtnSelect_clicked();

	void on_pBtnMortgage_clicked();

	void on_pBtnTax_clicked();
	
	void on_pBtnInsurance_clicked();

	void onGoHomeSlot();

	void onIdCheckedSlot(unsigned int nCaller, QString qstrOwnerId);

	void onIdScannedSlot(unsigned int nStage, QString qstrOwnerId);

	void onVehicleInfoDoneSlot(QString qstrOwnerId);

	void onReceiptCheckedSlot(QString qstrOwnerId);

	void onInputDoneSlot();

	void onSelectDoneSlot();


	void onFaceRecognicedSlot(unsigned int nCaller);


	void onQueryTaxDoneSlot();

	void onCertificateReadSlot(QString qstrOwnerId);

	void onTaxDeclaredSlot(QString qstrOwnerId);

	void onPaytaxConfirmedSlot(QString qstrOwnerId);

	void onPaytaxDoneSlot(QString qstrOwnerId);

	void onInputTaxDoneSlot(QString qstrOwnerId);

	void onQueryDeclareTaxResultDoneSlot();


	void onQueryInsuranceDoneSlot();

	void onDrivinglisenceReadSlot(QString qstrOwnerId);

	void onInsuranceDeclaredSlot(QString qstrOwnerId);

	void onPayinsuranceConfirmedSlot(QString qstrOwnerId);

	void onPayinsuranceDoneSlot(QString qstrOwnerId);

	void onInputInsuranceDoneSlot(QString qstrOwnerId);

	void onQueryDeclareInsuranceResultDoneSlot();


	void on_pBtnHomepage_clicked();
	
	//电子抵押人脸检测
	void onMortgageCheckFaceRecognicedSlot();
	//电子抵押查询完成
	void onmortgageSelectSlot(int single);
	//电子抵押完成输入
	void OnmortgageInputDown();
	//税VIN码输入确认
	void onPaytaxesVINDone(int state);
	//保险VIN码输入确认
	void onPayInsurancesInputVINDone(int state);
private:
	Ui::VehicleManageClass ui;

	CheckIDDialog *m_pCheckIDDialogCheck;
	VehicleInfoDialog *m_pVehicleInfoDialog;
	CheckReceiptDialog *m_pCheckReceiptDialog;
	InputDoneDialog *m_pInputDoneDialog;
	CheckIDDialog *m_pCheckIDDialogSelect;
	SelectLicenseDialog *m_pSelectLicenseDialog;
	PaytaxesDialog *m_pPaytaxesDialog;
	PayinsurancesDialog *m_pPayinsurancesDialog;
	mortgageBase *m_pMortgageBase;

public:
	void init();
	bool initFrame();
	void finit();
};
