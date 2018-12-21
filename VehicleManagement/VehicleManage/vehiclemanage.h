#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_vehiclemanage.h"
#include "checkiddialog.h"
#include "vehicleinfodialog.h"
#include "checkreceiptdialog.h"
#include "inputdonedialog.h"
#include "selectlicensedialog.h"

#include <QSqlQuery>
#include <QSqlTableModel>
#include <QSqlError>

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

	void onIdCheckedSlot(unsigned int type);

	void onVehicleInfoDoneSlot();

	void onReceiptCheckedSlot();

	void onInputDoneSlot();

	void onSelectDoneSlot();

private:
	Ui::VehicleManageClass ui;

	QSqlDatabase m_db;

	CheckIDDialog *m_pCheckIDDialogCheck;
	VehicleInfoDialog *m_pVehicleInfoDialog;
	CheckReceiptDialog *m_pCheckReceiptDialog;
	InputDoneDialog *m_pInputDoneDialog;
	CheckIDDialog *m_pCheckIDDialogSelect;
	SelectLicenseDialog *m_pSelectLicenseDialog;

public:
	void init();
	bool initDatabase();
	bool initFrame();
	void finit();
};