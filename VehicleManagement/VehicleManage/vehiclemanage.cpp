#include "vehiclemanage.h"
#include "QMessageBox"
#include <QSettings>
#include <exception>
#include "common.h"

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
	initDatabase();
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

bool VehicleManage::initDatabase()
{
	// 读取数据库配置文件，并建立连接
	try
	{
		QSettings *configIniRead = new QSettings("database.ini", QSettings::IniFormat);
		//将读取到的ini文件保存在QString中，先取值，然后通过toString()函数转换成QString类型
		QString strHostName = configIniRead->value("/database/host").toString();
		QString strDbName = configIniRead->value("/database/database").toString();
		QString strPort = configIniRead->value("/database/port").toString();
		QString strUserName = configIniRead->value("/database/username").toString();
		QString strPassword = configIniRead->value("/database/password").toString();
		delete configIniRead;
		m_db = QSqlDatabase::addDatabase("QMYSQL");
		m_db.setHostName(strHostName);
		m_db.setDatabaseName(strDbName);       //这里输入你的数据库名
		m_db.setPort(strPort.toInt());
		m_db.setUserName(strUserName);
		m_db.setPassword(strPassword);
		if (!m_db.open()) {
			QMessageBox::critical(0, QObject::tr("无法打开数据库"), "无法创建数据库连接！", QMessageBox::Cancel);
		}
		return true;
	}
	catch (std::exception &e)
	{
		QMessageBox::critical(0, QObject::tr("无法打开数据库"), "无法创建数据库连接！", QMessageBox::Cancel);
	}
	return false;
}

bool VehicleManage::initFrame()
{
	//设置系统名称
	this->setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);
	ui.labelTitle->setAttribute(Qt::WA_TranslucentBackground);
	ui.labelTitle->setStyleSheet("background:transparent");

	m_pCheckIDDialogCheck = new CheckIDDialog();
	m_pCheckIDDialogSelect = new CheckIDDialog();
	m_pVehicleInfoDialog = new VehicleInfoDialog();
	m_pSelectLicenseDialog = new SelectLicenseDialog();
	m_pCheckReceiptDialog = new CheckReceiptDialog();
	m_pInputDoneDialog = new InputDoneDialog();

	connect(m_pCheckIDDialogCheck, SIGNAL(idCheckedSignal(unsigned int)), this, SLOT(onIdCheckedSlot(unsigned int)));
	connect(m_pCheckIDDialogSelect, SIGNAL(idCheckedSignal(unsigned int)), this, SLOT(onIdCheckedSlot(unsigned int)));
	connect(m_pVehicleInfoDialog, SIGNAL(vehicleInfoDoneSingal()), this, SLOT(onVehicleInfoDoneSlot()));
	connect(m_pSelectLicenseDialog, SIGNAL(selectDoneSingal()), this, SLOT(onSelectDoneSlot()));
	connect(m_pCheckReceiptDialog, SIGNAL(receiptCheckedSingal()), this, SLOT(onReceiptCheckedSlot()));
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
	m_pCheckIDDialogCheck->setCaller(CHECKVEHICLE);
	m_pCheckIDDialogCheck->startTimer(20000);
	//connect(&m_checkIDDialogCheck, SIGNAL(idCheckedSignal(unsigned int)), this, SLOT(onIdCheckedSlot(unsigned int)));
	//m_checkIDDialogCheck.exec();
	//this->show();
}

void VehicleManage::on_pBtnSelect_clicked()
{
	// 跳转至自主选牌第一步
	this->hide();
	m_pCheckIDDialogSelect->show();
	m_pCheckIDDialogSelect->setCaller(SELECTLICENSE);
	m_pCheckIDDialogSelect->startTimer(20000);
	//connect(&m_checkIDDialogSelect, SIGNAL(idCheckedSignal(unsigned int)), this, SLOT(onIdCheckedSlot(unsigned int)));
	//m_checkIDDialogSelect.exec();
	//this->show();
}

void VehicleManage::onIdCheckedSlot(unsigned int type)
{
	//this->hide();
	if (type == CHECKVEHICLE)
	{
		//disconnect(&m_checkIDDialogCheck, SIGNAL(idCheckedSignal(unsigned int)), this, SLOT(onIdCheckedSlot(unsigned int)));
		m_pCheckIDDialogCheck->hide();
		m_pVehicleInfoDialog->show();
		m_pVehicleInfoDialog->startTimer(20000);
		//connect(&m_vehicleInfoDialog, SIGNAL(vehicleInfoDoneSingal()), this, SLOT(onVehicleInfoDoneSlot()));
		//m_vehicleInfoDialog.exec();
	}
	else
	{
		//disconnect(&m_checkIDDialogSelect, SIGNAL(idCheckedSignal(unsigned int)), this, SLOT(onIdCheckedSlot(unsigned int)));
		m_pCheckIDDialogSelect->hide();
		m_pSelectLicenseDialog->show();
		m_pSelectLicenseDialog->startTimer(20000);
		//connect(&m_SelectLicenseDialog, SIGNAL(selectDoneSingal()), this, SLOT(onSelectDoneSlot()));
		//m_SelectLicenseDialog.exec();
	}
	//this->show();
}

void VehicleManage::onVehicleInfoDoneSlot()
{
	//this->hide();
	//disconnect(&m_vehicleInfoDialog, SIGNAL(vehicleInfoDoneSingal()), this, SLOT(onVehicleInfoDoneSlot()));
	m_pVehicleInfoDialog->hide();
	m_pCheckReceiptDialog->show();
	m_pCheckReceiptDialog->startTimer(120000);
	//connect(&m_checkReceiptDialog, SIGNAL(receiptCheckedSingal()), this, SLOT(onReceiptCheckedSlot()));
	//m_checkReceiptDialog.exec();
	//this->show();
}

void VehicleManage::onReceiptCheckedSlot()
{
	//this->hide();
	//disconnect(&m_checkReceiptDialog, SIGNAL(receiptCheckedSingal()), this, SLOT(onReceiptCheckedSlot()));
	m_pCheckReceiptDialog->hide();
	m_pInputDoneDialog->show();
	m_pInputDoneDialog->startTimer(20000);
	//connect(&m_inputDoneDialog, SIGNAL(inputDoneSingal()), this, SLOT(onInputDoneSlot()));
	//m_inputDoneDialog.exec();
	//this->show();
}

void VehicleManage::onInputDoneSlot()
{
	//this->hide();
	//disconnect(&m_inputDoneDialog, SIGNAL(inputDoneSingal()), this, SLOT(onInputDoneSlot()));
	m_pInputDoneDialog->hide();
	this->show();
}

void VehicleManage::onSelectDoneSlot()
{
	//this->hide();
	//disconnect(&m_SelectLicenseDialog, SIGNAL(selectDoneSingal()), this, SLOT(onSelectDoneSlot()));
	m_pSelectLicenseDialog->hide();
	this->show();
}

void VehicleManage::on_pBtnMortgage_clicked()
{
	// 跳转至电子抵押第一步
	QMessageBox::information(NULL, QString::fromLocal8Bit("提示"), QString::fromLocal8Bit("功能正在完善中，敬请期待……"));
}