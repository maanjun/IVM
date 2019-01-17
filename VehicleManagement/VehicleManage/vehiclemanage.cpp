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
	if (m_pPaytaxesDialog != NULL)
	{
		delete m_pPaytaxesDialog;
	}
	if (m_pPayinsurancesDialog != NULL)
	{
		delete m_pPayinsurancesDialog;
	}
	if (m_pMortgageBase != NULL)
	{
		delete m_pMortgageBase;
	}
}

bool VehicleManage::initFrame()
{
	//设置系统名称
	//this->setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);

	m_pCheckIDDialogCheck = new CheckIDDialog(CHECKVEHICLE);
	m_pCheckIDDialogSelect = new CheckIDDialog(SELECTLICENSE);
	m_pVehicleInfoDialog = new VehicleInfoDialog();
	m_pSelectLicenseDialog = new SelectLicenseDialog();
	m_pCheckReceiptDialog = new CheckReceiptDialog();
	m_pInputDoneDialog = new InputDoneDialog();
	m_pPaytaxesDialog = new PaytaxesDialog();
	m_pPayinsurancesDialog = new PayinsurancesDialog();
	m_pMortgageBase = new mortgageBase();

	// 每一步的完成信号
	connect(m_pCheckIDDialogCheck, SIGNAL(idCheckedSignal(unsigned int, QString)), this, SLOT(onIdCheckedSlot(unsigned int, QString)));
	connect(m_pCheckIDDialogSelect, SIGNAL(idCheckedSignal(unsigned int, QString)), this, SLOT(onIdCheckedSlot(unsigned int, QString)));
	connect(m_pVehicleInfoDialog, SIGNAL(vehicleInfoDoneSingal(QString)), this, SLOT(onVehicleInfoDoneSlot(QString)));
	connect(m_pSelectLicenseDialog, SIGNAL(selectDoneSignal()), this, SLOT(onSelectDoneSlot()));
	connect(m_pCheckReceiptDialog, SIGNAL(receiptCheckedSingal(QString)), this, SLOT(onReceiptCheckedSlot(QString)));
	connect(m_pInputDoneDialog, SIGNAL(inputDoneSignal()), this, SLOT(onInputDoneSlot()));

	connect(m_pPaytaxesDialog->m_pCheckIDDialogQueryTax, SIGNAL(idCheckedSignal(unsigned int, QString)), this, SLOT(onIdCheckedSlot(unsigned int, QString)));
	connect(m_pPaytaxesDialog->m_pCheckIDDialogDeclare, SIGNAL(idCheckedSignal(unsigned int, QString)), this, SLOT(onIdCheckedSlot(unsigned int, QString)));
	connect(m_pPaytaxesDialog->m_pQueryTaxDialog, SIGNAL(queryTaxDoneSignal()), this, SLOT(onQueryTaxDoneSlot()));
	connect(m_pPaytaxesDialog->m_pReadCertificateDialog, SIGNAL(drivinglisenceReadSignal(QString)), this, SLOT(onCertificateReadSlot(QString)));
	connect(m_pPaytaxesDialog->m_pDeclareTaxDialog, SIGNAL(taxDeclaredSignal(QString)), this, SLOT(onTaxDeclaredSlot(QString)));
	connect(m_pPaytaxesDialog->m_pConfirmPaytaxDialog, SIGNAL(payTaxConfirmedSignal(QString)), this, SLOT(onPaytaxConfirmedSlot(QString)));
	connect(m_pPaytaxesDialog->m_pPaytaxDoneDialog, SIGNAL(paytaxDoneSignal(QString)), this, SLOT(onPaytaxDoneSlot(QString)));
	connect(m_pPaytaxesDialog->m_pface_recognition, SIGNAL(faceRecognicedSignal()), this, SLOT(onFaceRecognicedSlot()));
	connect(m_pPaytaxesDialog->m_pInputTaxDialog, SIGNAL(inputTaxDoneSignal()), this, SLOT(onInputTaxDoneSlot()));

	connect(m_pPayinsurancesDialog->m_pCheckIDDialogQueryInsurance, SIGNAL(idCheckedSignal(unsigned int, QString)), this, SLOT(onIdCheckedSlot(unsigned int, QString)));
	connect(m_pPayinsurancesDialog->m_pCheckIDDialogDeclare, SIGNAL(idCheckedSignal(unsigned int, QString)), this, SLOT(onIdCheckedSlot(unsigned int, QString)));
	connect(m_pPayinsurancesDialog->m_pQueryInsuranceDialog, SIGNAL(queryInsuranceDoneSignal()), this, SLOT(onQueryInsuranceDoneSlot()));
	connect(m_pPayinsurancesDialog->m_pReadCertificateDialog, SIGNAL(drivinglisenceReadSignal(QString)), this, SLOT(onDrivinglisenceReadSlot(QString)));
	connect(m_pPayinsurancesDialog->m_pDeclareInsuranceDialog, SIGNAL(insuranceDeclaredSignal(QString)), this, SLOT(onInsuranceDeclaredSlot(QString)));
	connect(m_pPayinsurancesDialog->m_pConfirmPayinsuranceDialog, SIGNAL(payInsuranceConfirmedSignal(QString)), this, SLOT(onPayinsuranceConfirmedSlot(QString)));
	connect(m_pPayinsurancesDialog->m_pPayinsuranceDoneDialog, SIGNAL(payinsuranceDoneSignal(QString)), this, SLOT(onPayinsuranceDoneSlot(QString)));
	connect(m_pPayinsurancesDialog->m_pface_recognition, SIGNAL(faceRecognicedSignal()), this, SLOT(onFaceRecognicedSlot()));
	connect(m_pPayinsurancesDialog->m_pInputInsuranceDialog, SIGNAL(inputInsuranceDoneSignal()), this, SLOT(onInputInsuranceDoneSlot()));

	// 回到车管业务
	connect(m_pCheckIDDialogCheck, SIGNAL(goHomeSignal()), this, SLOT(onGoHomeSlot()));
	connect(m_pVehicleInfoDialog, SIGNAL(goHomeSignal()), this, SLOT(onGoHomeSlot()));
	connect(m_pCheckReceiptDialog, SIGNAL(goHomeSignal()), this, SLOT(onGoHomeSlot()));
	connect(m_pInputDoneDialog, SIGNAL(goHomeSignal()), this, SLOT(onGoHomeSlot()));
	connect(m_pCheckIDDialogSelect, SIGNAL(goHomeSignal()), this, SLOT(onGoHomeSlot()));
	connect(m_pSelectLicenseDialog, SIGNAL(goHomeSignal()), this, SLOT(onGoHomeSlot()));

	connect(m_pPaytaxesDialog->m_pCheckIDDialogQueryTax, SIGNAL(goHomeSignal()), this, SLOT(onGoHomeSlot()));
	connect(m_pPaytaxesDialog->m_pQueryTaxDialog, SIGNAL(goHomeSignal()), this, SLOT(onGoHomeSlot()));
	connect(m_pPaytaxesDialog->m_pCheckIDDialogDeclare, SIGNAL(goHomeSignal()), this, SLOT(onGoHomeSlot()));
	connect(m_pPaytaxesDialog->m_pReadCertificateDialog, SIGNAL(goHomeSignal()), this, SLOT(onGoHomeSlot()));
	connect(m_pPaytaxesDialog->m_pDeclareTaxDialog, SIGNAL(goHomeSignal()), this, SLOT(onGoHomeSlot()));
	connect(m_pPaytaxesDialog->m_pConfirmPaytaxDialog, SIGNAL(goHomeSignal()), this, SLOT(onGoHomeSlot()));
	connect(m_pPaytaxesDialog->m_pPaytaxDoneDialog, SIGNAL(goHomeSignal()), this, SLOT(onGoHomeSlot()));
	connect(m_pPaytaxesDialog->m_pface_recognition, SIGNAL(goHomeSignal()), this, SLOT(onGoHomeSlot()));
	connect(m_pPaytaxesDialog->m_pInputTaxDialog, SIGNAL(goHomeSignal()), this, SLOT(onGoHomeSlot()));

	connect(m_pPayinsurancesDialog->m_pCheckIDDialogQueryInsurance, SIGNAL(goHomeSignal()), this, SLOT(onGoHomeSlot()));
	connect(m_pPayinsurancesDialog->m_pQueryInsuranceDialog, SIGNAL(goHomeSignal()), this, SLOT(onGoHomeSlot()));
	connect(m_pPayinsurancesDialog->m_pCheckIDDialogDeclare, SIGNAL(goHomeSignal()), this, SLOT(onGoHomeSlot()));
	connect(m_pPayinsurancesDialog->m_pReadCertificateDialog, SIGNAL(goHomeSignal()), this, SLOT(onGoHomeSlot()));
	connect(m_pPayinsurancesDialog->m_pDeclareInsuranceDialog, SIGNAL(goHomeSignal()), this, SLOT(onGoHomeSlot()));
	connect(m_pPayinsurancesDialog->m_pConfirmPayinsuranceDialog, SIGNAL(goHomeSignal()), this, SLOT(onGoHomeSlot()));
	connect(m_pPayinsurancesDialog->m_pPayinsuranceDoneDialog, SIGNAL(goHomeSignal()), this, SLOT(onGoHomeSlot()));
	connect(m_pPayinsurancesDialog->m_pface_recognition, SIGNAL(goHomeSignal()), this, SLOT(onGoHomeSlot()));
	connect(m_pPayinsurancesDialog->m_pInputInsuranceDialog, SIGNAL(goHomeSignal()), this, SLOT(onGoHomeSlot()));

	connect(m_pMortgageBase, SIGNAL(goHomeSignal()), this, SLOT(onGoHomeSlot()));

	//Todo 身份证扫描完成信号
	connect(m_pCheckIDDialogCheck, SIGNAL(idScannedSignal(unsigned int, QString)), this, SLOT(onIdScannedSlot(unsigned int, QString)));
	connect(m_pCheckIDDialogSelect, SIGNAL(idScannedSignal(unsigned int, QString)), this, SLOT(onIdScannedSlot(unsigned int, QString)));
	connect(m_pPaytaxesDialog->m_pCheckIDDialogQueryTax, SIGNAL(idScannedSignal(unsigned int, QString)), this, SLOT(onIdScannedSlot(unsigned int, QString)));
	connect(m_pPaytaxesDialog->m_pCheckIDDialogDeclare, SIGNAL(idScannedSignal(unsigned int, QString)), this, SLOT(onIdScannedSlot(unsigned int, QString)));

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
	m_pPaytaxesDialog->m_pCheckIDDialogQueryTax->hide();
	m_pPaytaxesDialog->m_pQueryTaxDialog->hide();
	m_pPaytaxesDialog->m_pCheckIDDialogDeclare->hide();
	m_pPaytaxesDialog->m_pReadCertificateDialog->hide();
	m_pPaytaxesDialog->m_pDeclareTaxDialog->hide();
	m_pPaytaxesDialog->m_pConfirmPaytaxDialog->hide();
	m_pPaytaxesDialog->m_pCheckIDDialogQueryTax->hide();
	m_pPaytaxesDialog->m_pPaytaxDoneDialog->hide();
	m_pPaytaxesDialog->m_pface_recognition->hide();
	m_pPaytaxesDialog->m_pInputTaxDialog->hide();
	m_pMortgageBase->hide();
}

void VehicleManage::on_pBtnCheck_clicked()
{
	// 跳转至远程验车第一步
	this->hide();
	m_pCheckIDDialogCheck->show();
	m_pCheckIDDialogCheck->startTimer(30000);
}

void VehicleManage::on_pBtnSelect_clicked()
{
	// 跳转至自主选牌第一步
	this->hide();
	m_pCheckIDDialogSelect->show();
	m_pCheckIDDialogSelect->startTimer(30000);
}

void VehicleManage::onIdCheckedSlot(unsigned int nCaller, QString qstrOwnerId)
{
	switch (nCaller)
	{
	case CHECKVEHICLE:
		m_pCheckIDDialogCheck->hide();
		m_pVehicleInfoDialog->show();
		m_pVehicleInfoDialog->setOwnerId(qstrOwnerId);
		m_pVehicleInfoDialog->startTimer(30000);
		break;
	case SELECTLICENSE:
		m_pCheckIDDialogSelect->hide();
		m_pSelectLicenseDialog->show();
		m_pSelectLicenseDialog->setOwnerId(qstrOwnerId);
		m_pSelectLicenseDialog->startTimer(30000);
		break;
	case TAXQUERY:
		m_pPaytaxesDialog->m_pCheckIDDialogQueryTax->hide();
		m_pPaytaxesDialog->m_pQueryTaxDialog->show();
		m_pPaytaxesDialog->m_pQueryTaxDialog->setOwnerId(qstrOwnerId);
		m_pPaytaxesDialog->m_pQueryTaxDialog->startTimer(30000);
		break;
	case TAXDECLARE:
		m_pPaytaxesDialog->m_pCheckIDDialogDeclare->hide();
		m_pPaytaxesDialog->m_pReadCertificateDialog->show();
		m_pPaytaxesDialog->m_pReadCertificateDialog->setOwnerId(qstrOwnerId);
		m_pPaytaxesDialog->m_pReadCertificateDialog->startTimer(30000);
	default:
		break;
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
	m_pPaytaxesDialog->m_pCheckIDDialogQueryTax->hide();
	switch (nStage)
	{
	case CHECKID:
		m_pVehicleInfoDialog->show();
		m_pVehicleInfoDialog->setOwnerId(qstrOwnerId);
		m_pVehicleInfoDialog->startTimer(30000);
		break;
	case VEHICLEINCO:
		m_pCheckReceiptDialog->show();
		m_pCheckReceiptDialog->setOwnerId(qstrOwnerId);
		m_pCheckReceiptDialog->startTimer(30000);
		break;
	case CHECKRECEIPT:
		m_pInputDoneDialog->show();
		m_pInputDoneDialog->setOwnerId(qstrOwnerId);
		m_pInputDoneDialog->startTimer(30000);
		break;
	case INPUTDONE:
		this->show();
		break;
	case CHECKIDSELECT:
		m_pSelectLicenseDialog->show();
		m_pSelectLicenseDialog->setOwnerId(qstrOwnerId);
		m_pSelectLicenseDialog->startTimer(30000);
		break;
	case SELECTED:
		this->show();
		break;
	case TAXQUERIED:
		this->show();
	default:
		break;
	}
}

void VehicleManage::onVehicleInfoDoneSlot(QString qstrOwnerId)
{
	m_pVehicleInfoDialog->hide();
	m_pCheckReceiptDialog->show();
	m_pCheckReceiptDialog->setOwnerId(qstrOwnerId);
	m_pCheckReceiptDialog->startTimer(30000);
}

void VehicleManage::onReceiptCheckedSlot(QString qstrOwnerId)
{
	m_pCheckReceiptDialog->hide();
	m_pInputDoneDialog->show();
	m_pInputDoneDialog->setOwnerId(qstrOwnerId);
	m_pInputDoneDialog->startTimer(30000);
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

void VehicleManage::onQueryTaxDoneSlot()
{
	m_pPaytaxesDialog->m_pQueryTaxDialog->hide();
	this->show();
}

void VehicleManage::onCertificateReadSlot(QString qstrOwnerId)
{
	m_pPaytaxesDialog->m_pReadCertificateDialog->hide();
	m_pPaytaxesDialog->m_pDeclareTaxDialog->show();
	m_pPaytaxesDialog->m_pDeclareTaxDialog->setOwnerId(qstrOwnerId);
	m_pPaytaxesDialog->m_pDeclareTaxDialog->startTimer(30000);
	this->show();
}

void VehicleManage::onTaxDeclaredSlot(QString qstrOwnerId)
{
	m_pPaytaxesDialog->m_pDeclareTaxDialog->hide();
	m_pPaytaxesDialog->m_pConfirmPaytaxDialog->show();
	m_pPaytaxesDialog->m_pConfirmPaytaxDialog->setOwnerId(qstrOwnerId);
	m_pPaytaxesDialog->m_pConfirmPaytaxDialog->startTimer(30000);
	this->show();
}

void VehicleManage::onPaytaxConfirmedSlot(QString qstrOwnerId)
{
	m_pPaytaxesDialog->m_pConfirmPaytaxDialog->hide();
	m_pPaytaxesDialog->m_pPaytaxDoneDialog->show();
	m_pPaytaxesDialog->m_pPaytaxDoneDialog->setOwnerId(qstrOwnerId);
	m_pPaytaxesDialog->m_pPaytaxDoneDialog->startTimer(30000);
	this->show();
}

void VehicleManage::onPaytaxDoneSlot(QString qstrOwnerId)
{
	m_pPaytaxesDialog->m_pConfirmPaytaxDialog->hide();
	this->show();
}

void VehicleManage::onFaceRecognicedSlot()
{
	m_pPaytaxesDialog->m_pface_recognition->hide();
	m_pPaytaxesDialog->m_pInputTaxDialog->show();
	m_pPaytaxesDialog->m_pInputTaxDialog->startTimer(30000);
}

void VehicleManage::onInputTaxDoneSlot()
{
	m_pPaytaxesDialog->m_pInputTaxDialog->hide();
	this->show();
}

void VehicleManage::onQueryInsuranceDoneSlot()
{
	m_pPayinsurancesDialog->m_pQueryInsuranceDialog->hide();
	this->show();
}

void VehicleManage::onDrivinglisenceReadSlot(QString qstrOwnerId)
{
	m_pPayinsurancesDialog->m_pReadCertificateDialog->hide();
	m_pPayinsurancesDialog->m_pDeclareInsuranceDialog->show();
	m_pPayinsurancesDialog->m_pDeclareInsuranceDialog->setOwnerId(qstrOwnerId);
	m_pPayinsurancesDialog->m_pDeclareInsuranceDialog->startTimer(30000);
	this->show();
}

void VehicleManage::onInsuranceDeclaredSlot(QString qstrOwnerId)
{
	m_pPayinsurancesDialog->m_pDeclareInsuranceDialog->hide();
	m_pPayinsurancesDialog->m_pConfirmPayinsuranceDialog->show();
	m_pPayinsurancesDialog->m_pConfirmPayinsuranceDialog->setOwnerId(qstrOwnerId);
	m_pPayinsurancesDialog->m_pConfirmPayinsuranceDialog->startTimer(30000);
	this->show();
}

void VehicleManage::onPayinsuranceConfirmedSlot(QString qstrOwnerId)
{
	m_pPayinsurancesDialog->m_pConfirmPayinsuranceDialog->hide();
	m_pPayinsurancesDialog->m_pPayinsuranceDoneDialog->show();
	m_pPayinsurancesDialog->m_pPayinsuranceDoneDialog->setOwnerId(qstrOwnerId);
	m_pPayinsurancesDialog->m_pPayinsuranceDoneDialog->startTimer(30000);
	this->show();
}

void VehicleManage::onPayinsuranceDoneSlot(QString qstrOwnerId)
{
	m_pPayinsurancesDialog->m_pConfirmPayinsuranceDialog->hide();
	this->show();
}

void VehicleManage::onInputInsuranceDoneSlot()
{
	m_pPayinsurancesDialog->m_pInputInsuranceDialog->hide();
	this->show();
}

void VehicleManage::on_pBtnMortgage_clicked()
{
	// 跳转至电子抵押第一步
	this->hide();
	m_pMortgageBase->show();
	m_pMortgageBase->startTimer(30000);
}

void VehicleManage::on_pBtnTax_clicked()
{
	// 跳转至电子完税第一步
	this->hide();
	m_pPaytaxesDialog->show();
	m_pPaytaxesDialog->startTimer(30000);
}

void VehicleManage::on_pBtnInsurance_clicked()
{
	// 跳转至电子保单第一步
	this->hide();
	m_pPayinsurancesDialog->show();
	m_pPayinsurancesDialog->startTimer(30000);
}

void VehicleManage::on_pBtnHomepage_clicked()
{
	emit goHomeVehicleSignal();
}
