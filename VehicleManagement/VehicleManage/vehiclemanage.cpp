#include "vehiclemanage.h"
#include "QMessageBox"
#include <QSettings>
#include <exception>

VehicleManage::VehicleManage(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	init();
}

VehicleManage::~VehicleManage()
{
	finit();
}

void VehicleManage::init() 
{
	initFrame();
}

void VehicleManage::finit()
{
	// 清理工作
	if (m_pCheckIDDialogCheck != NULL)
	{
		delete m_pCheckIDDialogCheck;
	}
	if (m_pCheckIDDialogSelect != NULL)
	{
		delete m_pCheckIDDialogSelect;
	}
	if (m_pVehicleInfoDialog != NULL)
	{
		delete m_pVehicleInfoDialog;
	}
	if (m_pSelectLicenseDialog != NULL)
	{
		delete m_pSelectLicenseDialog;
	}
	if (m_pCheckReceiptDialog != NULL)
	{
		delete m_pCheckReceiptDialog;
	}
	if (m_pInputDoneDialog != NULL)
	{
		delete m_pInputDoneDialog;
	}
}

bool VehicleManage::initFrame()
{
	//设置系统名称
	this->setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);
	//ui.labelTitle->setAttribute(Qt::WA_TranslucentBackground);
	//ui.labelTitle->setStyleSheet("background:transparent");

	m_pCheckIDDialogCheck = new CheckIDDialog(CHECKVEHICLE);
	m_pCheckIDDialogSelect = new CheckIDDialog(SELECTLICENSE);
	m_pVehicleInfoDialog = new VehicleInfoDialog();
	m_pSelectLicenseDialog = new SelectLicenseDialog();
	m_pCheckReceiptDialog = new CheckReceiptDialog();
	m_pInputDoneDialog = new InputDoneDialog();

	connect(m_pCheckIDDialogCheck, SIGNAL(idCheckedSignal(unsigned int, QString)), this, SLOT(onIdCheckedSlot(unsigned int, QString)));
	connect(m_pCheckIDDialogSelect, SIGNAL(idCheckedSignal(unsigned int, QString)), this, SLOT(onIdCheckedSlot(unsigned int, QString)));
	//身份证扫描完成信号
	connect(m_pCheckIDDialogCheck, SIGNAL(idScannedSignal(unsigned int, QString)), this, SLOT(onIdScannedSlot(unsigned int, QString)));
	connect(m_pCheckIDDialogSelect, SIGNAL(idScannedSignal(unsigned int, QString)), this, SLOT(onIdScannedSlot(unsigned int, QString)));
	connect(m_pVehicleInfoDialog, SIGNAL(vehicleInfoDoneSingal(QString)), this, SLOT(onVehicleInfoDoneSlot(QString)));
	connect(m_pSelectLicenseDialog, SIGNAL(selectDoneSingal()), this, SLOT(onSelectDoneSlot()));
	connect(m_pCheckReceiptDialog, SIGNAL(receiptCheckedSingal(QString)), this, SLOT(onReceiptCheckedSlot(QString)));
	connect(m_pInputDoneDialog, SIGNAL(inputDoneSingal()), this, SLOT(onInputDoneSlot()));

	connect(m_pCheckIDDialogCheck, SIGNAL(goHomeSignal()), this, SLOT(onGoHomeSlot()));
	connect(m_pVehicleInfoDialog, SIGNAL(goHomeSignal()), this, SLOT(onGoHomeSlot()));
	connect(m_pCheckReceiptDialog, SIGNAL(goHomeSignal()), this, SLOT(onGoHomeSlot()));
	connect(m_pInputDoneDialog, SIGNAL(goHomeSignal()), this, SLOT(onGoHomeSlot()));
	connect(m_pCheckIDDialogSelect, SIGNAL(goHomeSignal()), this, SLOT(onGoHomeSlot()));
	connect(m_pSelectLicenseDialog, SIGNAL(goHomeSignal()), this, SLOT(onGoHomeSlot()));
	return true;
}

void VehicleManage::onGoHomeSlot()
{
	this->show();
	m_pCheckIDDialogCheck->hide();
	m_pVehicleInfoDialog->hide();
	m_pCheckReceiptDialog->hide();
	m_pInputDoneDialog->hide();
	m_pCheckIDDialogSelect->hide();
	m_pSelectLicenseDialog->hide();
}

void VehicleManage::on_pBtnCheck_clicked()
{
	// 跳转至远程验车第一步
	this->hide();
	m_pCheckIDDialogCheck->show();
	m_pCheckIDDialogCheck->startTimer();
}

void VehicleManage::on_pBtnSelect_clicked()
{
	// 跳转至自主选牌第一步
	this->hide();
	m_pCheckIDDialogSelect->show();
	m_pCheckIDDialogSelect->startTimer();
}

void VehicleManage::onIdCheckedSlot(unsigned int nCaller, QString qstrOwnerId)
{
	if (nCaller == CHECKVEHICLE)
	{
		m_pCheckIDDialogCheck->hide();
		m_pVehicleInfoDialog->show();
		m_pVehicleInfoDialog->setOwnerId(qstrOwnerId);
		m_pVehicleInfoDialog->startTimer();
	}
	else
	{
		m_pCheckIDDialogSelect->hide();
		m_pSelectLicenseDialog->show();
		m_pSelectLicenseDialog->setOwnerId(qstrOwnerId);
		m_pSelectLicenseDialog->startTimer();
	}
}

void VehicleManage::onIdScannedSlot(unsigned int nStage, QString qstrOwnerId)
{
	m_pCheckIDDialogCheck->hide();
	m_pVehicleInfoDialog->hide();
	m_pCheckReceiptDialog->hide();
	m_pInputDoneDialog->hide();
	m_pCheckIDDialogSelect->hide();
	m_pSelectLicenseDialog->hide();
	switch (nStage)
	{
	case CHECKID:
		m_pVehicleInfoDialog->show();
		m_pVehicleInfoDialog->setOwnerId(qstrOwnerId);
		m_pVehicleInfoDialog->startTimer();
		break;
	case VEHICLEINCO:
		m_pCheckReceiptDialog->show();
		m_pCheckReceiptDialog->setOwnerId(qstrOwnerId);
		m_pCheckReceiptDialog->startTimer();
		break;
	case CHECKRECEIPT:
		m_pInputDoneDialog->show();
		m_pInputDoneDialog->setOwnerId(qstrOwnerId);
		m_pInputDoneDialog->startTimer();
		break;
	case INPUTDONE:
		this->show();
		break;
	case CHECKIDSELECT:
		m_pSelectLicenseDialog->show();
		m_pSelectLicenseDialog->setOwnerId(qstrOwnerId);
		m_pSelectLicenseDialog->startTimer();
		break;
	case SELECTED:
		this->show();
		break;
	default:
		break;
	}
}

void VehicleManage::onVehicleInfoDoneSlot(QString qstrOwnerId)
{
	m_pVehicleInfoDialog->hide();
	m_pCheckReceiptDialog->show();
	m_pCheckReceiptDialog->setOwnerId(qstrOwnerId);
	m_pCheckReceiptDialog->startTimer();
}

void VehicleManage::onReceiptCheckedSlot(QString qstrOwnerId)
{
	m_pCheckReceiptDialog->hide();
	m_pInputDoneDialog->show();
	m_pInputDoneDialog->setOwnerId(qstrOwnerId);
	m_pInputDoneDialog->startTimer();
}

void VehicleManage::onInputDoneSlot()
{
	m_pInputDoneDialog->hide();
	this->show();
}

void VehicleManage::onSelectDoneSlot()
{
	m_pSelectLicenseDialog->hide();
	this->show();
}

void VehicleManage::on_pBtnMortgage_clicked()
{
	// 跳转至电子抵押第一步
	QMessageBox::information(NULL, QString::fromLocal8Bit("提示"), QString::fromLocal8Bit("功能正在完善中，敬请期待……"));
}