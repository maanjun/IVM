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
	//this->setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);
	initDatabase();
	initFrame();
}

void VehicleManage::finit()
{
	// 清理工作
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
	connect(&m_checkIDDialogCheck, SIGNAL(idCheckedSignal(unsigned int)), this, SLOT(onIdCheckedSlot(unsigned int)));
	connect(&m_checkIDDialogSelect, SIGNAL(idCheckedSignal(unsigned int)), this, SLOT(onIdCheckedSlot(unsigned int)));
	connect(&m_vehicleInfoDialog, SIGNAL(vehicleInfoDoneSingal()), this, SLOT(onVehicleInfoDoneSlot()));
	connect(&m_SelectLicenseDialog, SIGNAL(selectDoneSingal()), this, SLOT(onSelectDoneSlot()));
	connect(&m_checkReceiptDialog, SIGNAL(receiptCheckedSingal()), this, SLOT(onReceiptCheckedSlot()));
	connect(&m_inputDoneDialog, SIGNAL(inputDoneSingal()), this, SLOT(onInputDoneSlot()));

	connect(&m_checkIDDialogCheck, SIGNAL(goHomeSignal()), this, SLOT(onGoHomeSlot()));
	connect(&m_vehicleInfoDialog, SIGNAL(goHomeSignal()), this, SLOT(onGoHomeSlot()));
	connect(&m_checkReceiptDialog, SIGNAL(goHomeSignal()), this, SLOT(onGoHomeSlot()));
	connect(&m_inputDoneDialog, SIGNAL(goHomeSignal()), this, SLOT(onGoHomeSlot()));
	connect(&m_checkIDDialogSelect, SIGNAL(goHomeSignal()), this, SLOT(onGoHomeSlot()));
	connect(&m_SelectLicenseDialog, SIGNAL(goHomeSignal()), this, SLOT(onGoHomeSlot()));
	return true;
}

void VehicleManage::onGoHomeSlot()
{
	this->show();
	m_checkIDDialogCheck.hide();
	m_vehicleInfoDialog.hide();
	m_checkReceiptDialog.hide();
	m_inputDoneDialog.hide();
	m_checkIDDialogSelect.hide();
	m_SelectLicenseDialog.hide();
}

void VehicleManage::on_pBtnCheck_clicked()
{
	// 跳转至远程验车第一步
	this->hide();
	m_checkIDDialogCheck.show();
	m_checkIDDialogCheck.setCaller(CHECKVEHICLE);
	m_checkIDDialogCheck.startTimer(20000);
	//connect(&m_checkIDDialogCheck, SIGNAL(idCheckedSignal(unsigned int)), this, SLOT(onIdCheckedSlot(unsigned int)));
	//m_checkIDDialogCheck.exec();
	//this->show();
}

void VehicleManage::on_pBtnSelect_clicked()
{
	// 跳转至自主选牌第一步
	this->hide();
	m_checkIDDialogSelect.show();
	m_checkIDDialogSelect.setCaller(SELECTLICENSE);
	m_checkIDDialogSelect.startTimer(20000);
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
		m_checkIDDialogCheck.hide();
		m_vehicleInfoDialog.show();
		m_vehicleInfoDialog.startTimer(5000);
		//connect(&m_vehicleInfoDialog, SIGNAL(vehicleInfoDoneSingal()), this, SLOT(onVehicleInfoDoneSlot()));
		//m_vehicleInfoDialog.exec();
	}
	else
	{
		//disconnect(&m_checkIDDialogSelect, SIGNAL(idCheckedSignal(unsigned int)), this, SLOT(onIdCheckedSlot(unsigned int)));
		m_checkIDDialogSelect.hide();
		m_SelectLicenseDialog.show();
		m_SelectLicenseDialog.startTimer(5000);
		//connect(&m_SelectLicenseDialog, SIGNAL(selectDoneSingal()), this, SLOT(onSelectDoneSlot()));
		//m_SelectLicenseDialog.exec();
	}
	//this->show();
}

void VehicleManage::onVehicleInfoDoneSlot()
{
	//this->hide();
	//disconnect(&m_vehicleInfoDialog, SIGNAL(vehicleInfoDoneSingal()), this, SLOT(onVehicleInfoDoneSlot()));
	m_vehicleInfoDialog.hide();
	m_checkReceiptDialog.show();
	m_checkReceiptDialog.startTimer(5000);
	//connect(&m_checkReceiptDialog, SIGNAL(receiptCheckedSingal()), this, SLOT(onReceiptCheckedSlot()));
	//m_checkReceiptDialog.exec();
	//this->show();
}

void VehicleManage::onReceiptCheckedSlot()
{
	//this->hide();
	//disconnect(&m_checkReceiptDialog, SIGNAL(receiptCheckedSingal()), this, SLOT(onReceiptCheckedSlot()));
	m_checkReceiptDialog.hide();
	m_inputDoneDialog.show();
	m_inputDoneDialog.startTimer(5000);
	//connect(&m_inputDoneDialog, SIGNAL(inputDoneSingal()), this, SLOT(onInputDoneSlot()));
	//m_inputDoneDialog.exec();
	//this->show();
}

void VehicleManage::onInputDoneSlot()
{
	//this->hide();
	//disconnect(&m_inputDoneDialog, SIGNAL(inputDoneSingal()), this, SLOT(onInputDoneSlot()));
	m_inputDoneDialog.hide();
	this->show();
}

void VehicleManage::onSelectDoneSlot()
{
	//this->hide();
	//disconnect(&m_SelectLicenseDialog, SIGNAL(selectDoneSingal()), this, SLOT(onSelectDoneSlot()));
	m_SelectLicenseDialog.hide();
	this->show();
}

void VehicleManage::on_pBtnMortgage_clicked()
{
	// 跳转至电子抵押第一步
	QMessageBox::information(NULL, QString::fromLocal8Bit("提示"), QString::fromLocal8Bit("功能正在完善中，敬请期待……"));
}