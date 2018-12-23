#pragma once

#include "common.h"
#include <QtWidgets/QMainWindow>
#include "ui_vehiclemanage.h"
#include "checkiddialog.h"
#include "vehicleinfodialog.h"
#include "checkreceiptdialog.h"
#include "inputdonedialog.h"
#include "selectlicensedialog.h"

#include "operateMysql.h"

#include <QString>
#include <QDebug>

class VehicleManage : public QMainWindow
{
	Q_OBJECT

public:
	VehicleManage(QWidget *parent = Q_NULLPTR);
	~VehicleManage();

private slots:
	void on_pBtnCheck_clicked();

	void on_pBtnSelect_clicked();

	void on_pBtnMortgage_clicked();

	void onGoHomeSlot();

	void onIdCheckedSlot(unsigned int nCaller, QString qstrOwnerId);

	void onIdScannedSlot(unsigned int nStage, QString qstrOwnerId);

	void onVehicleInfoDoneSlot(QString qstrOwnerId);

	void onReceiptCheckedSlot(QString qstrOwnerId);

	void onInputDoneSlot();

	void onSelectDoneSlot();

private:
	Ui::VehicleManageClass ui;

	CheckIDDialog *m_pCheckIDDialogCheck;
	VehicleInfoDialog *m_pVehicleInfoDialog;
	CheckReceiptDialog *m_pCheckReceiptDialog;
	InputDoneDialog *m_pInputDoneDialog;
	CheckIDDialog *m_pCheckIDDialogSelect;
	SelectLicenseDialog *m_pSelectLicenseDialog;

public:
	void init();
	bool initFrame();
	void finit();
};
