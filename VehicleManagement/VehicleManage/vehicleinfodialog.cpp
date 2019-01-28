#include "vehicleinfodialog.h"
#include "ui_vehicleinfodialog.h"
#include <QMessageBox>
#include <QMovie>
#include <QDebug>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonValue>
#include <QJsonParseError>

VehicleInfoDialog::VehicleInfoDialog(QWidget *parent) :
	BaseDialog(parent),
    ui(new Ui::VehicleInfoDialog)
{
    ui->setupUi(this);

	//初始化数据
	m_vehicleInfo.reset();
	m_vehicle.reset();

	ui->pBtnNext->setEnabled(false);
	// 读取
	m_qstrVehicleInfoTemplateHtml = "";
	QString runPath = QCoreApplication::applicationDirPath() + "/Resources/Htmls/vehicleinfotemplate.html";
	readFile(runPath, m_qstrVehicleInfoTemplateHtml);

	QMovie *movieScanning = new QMovie("./Resources/Images/scanning.gif", "gif", this);
	ui->label->setMovie(movieScanning);
	ui->label->setScaledContents(true);
	movieScanning->start();

	QMovie *movieLoading = new QMovie("./Resources/Images/loading.gif", "gif", this);
	ui->labelLoading->setMovie(movieLoading);
	movieLoading->start();
}

VehicleInfoDialog::~VehicleInfoDialog()
{
    delete ui;
}

void VehicleInfoDialog::on_pBtnHomepage_clicked()
{
    // 回到主页
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	emit goHomeSignal();
}

void VehicleInfoDialog::on_pBtnNext_clicked()
{
    // 下一步
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	// 将数据存入数据库
	m_operateMysql.init();
	m_operateMysql.begin();
	QString qstrInsertSql = QString("INSERT INTO VEHICLE(VEHICLEID, MANUFACTUREDATE, MANUFACTUREADDRESS, MANUFACTURER, COLOR, MODEL, BRAND, USERID, OWNERNO, ISVALID) VALUES('%1', '%2', '%3', '%4', '%5', '%6', '%7', %8, '%9', %10)")
		.arg(m_vehicleInfo.szVehicleId)
		.arg(m_vehicleInfo.szManufactureDate)
		.arg(QString::fromLocal8Bit(m_vehicleInfo.szManufactureAddress))
		.arg(QString::fromLocal8Bit(m_vehicleInfo.szManufacturer))
		.arg(QString::fromLocal8Bit(m_vehicleInfo.szColor))
		.arg(QString::fromLocal8Bit(m_vehicleInfo.szModel))
		.arg(QString::fromLocal8Bit(m_vehicleInfo.szBrand))
		.arg(m_vehicleInfo.nUserid)
		.arg(m_vehicleInfo.szOwnerId)
		.arg(1);
	QString qstrUpdateSql = QString("UPDATE USER SET STAGE=2 WHERE NUMBER='%1'").arg(m_vehicleInfo.szOwnerId);
	if (m_operateMysql.queryExe(qstrInsertSql) && m_operateMysql.queryExe(qstrUpdateSql))
	{
		m_operateMysql.commit();
	}
	else
	{
		m_operateMysql.rollback();
		//QMessageBox::information(NULL, QString::fromLocal8Bit("提示"), QString::fromLocal8Bit("数据插入错误！"));
	}
	m_operateMysql.close();
	emit vehicleInfoDoneSingal(m_qstrOwnerId);
}

bool VehicleInfoDialog::getVehicleData(QString qstrName, Vehicle &vehicle)
{
	QFile loadFile(QCoreApplication::applicationDirPath() + "/Data/jsons/" + qstrName);

	if (!loadFile.open(QIODevice::ReadOnly))
	{
		qDebug() << "could't open projects json";
		return false;
	}

	QByteArray allData = loadFile.readAll();
	loadFile.close();

	QJsonParseError json_error;
	QJsonDocument jsonDoc(QJsonDocument::fromJson(allData, &json_error));

	if (json_error.error != QJsonParseError::NoError)
	{
		qDebug() << "json error!";
		return false;
	}

	QJsonObject rootObj = jsonDoc.object();

	//输出所有key，这一步是非必须的，放最后的话，你可能读不到任何key
	QStringList keys = rootObj.keys();
	for (int i = 0; i < keys.size(); i++)
	{
		qDebug() << "key" << i << " is:" << keys.at(i);
	}

	//因为是预先定义好的JSON数据格式，所以这里可以这样读取
	if (rootObj.contains("success"))
	{
		if (0 != rootObj.value("success").toString().compare("true"))
		{
			return false;
		}
	}
	else
	{
		return false;
	}

	if (rootObj.contains("data"))
	{
		QJsonObject dataObject = rootObj.value("data").toObject();
		strcpy_s(vehicle.clztxx, dataObject.value("clztxx").toString().toLocal8Bit().data());
		strcpy_s(vehicle.gbthps, dataObject.value("gbthps").toString().toLocal8Bit().data());
		strcpy_s(vehicle.pl, dataObject.value("pl").toString().toLocal8Bit().data());
		strcpy_s(vehicle.zchgzbh, dataObject.value("zchgzbh").toString().toLocal8Bit().data());
		strcpy_s(vehicle.wkg, dataObject.value("wkg").toString().toLocal8Bit().data());
		strcpy_s(vehicle.fzrq, dataObject.value("fzrq").toString().toLocal8Bit().data());
		strcpy_s(vehicle.clzzqymc, dataObject.value("clzzqymc").toString().toLocal8Bit().data());
		strcpy_s(vehicle.clfl, dataObject.value("clfl").toString().toLocal8Bit().data());
		strcpy_s(vehicle.clxh, dataObject.value("clxh").toString().toLocal8Bit().data());
		strcpy_s(vehicle.clpp, dataObject.value("clpp").toString().toLocal8Bit().data());
		strcpy_s(vehicle.clmcchar, dataObject.value("clmcchar").toString().toLocal8Bit().data());
		strcpy_s(vehicle.hxnbg, dataObject.value("hxnbg").toString().toLocal8Bit().data());
		strcpy_s(vehicle.qyid, dataObject.value("qyid").toString().toLocal8Bit().data());
		strcpy_s(vehicle.csys, dataObject.value("csys").toString().toLocal8Bit().data());
		strcpy_s(vehicle.dpxh, dataObject.value("dpxh").toString().toLocal8Bit().data());
		strcpy_s(vehicle.zqyzzl, dataObject.value("zqyzzl").toString().toLocal8Bit().data());
		strcpy_s(vehicle.dpid, dataObject.value("dpid").toString().toLocal8Bit().data());
		strcpy_s(vehicle.zgcs, dataObject.value("zgcs").toString().toLocal8Bit().data());
		strcpy_s(vehicle.dpbh, dataObject.value("dpbh").toString().toLocal8Bit().data());
		strcpy_s(vehicle.edzk, dataObject.value("edzk").toString().toLocal8Bit().data());
		strcpy_s(vehicle.clsbdh, dataObject.value("clsbdh").toString().toLocal8Bit().data());
		strcpy_s(vehicle.fdjxh, dataObject.value("fdjxh").toString().toLocal8Bit().data());
		strcpy_s(vehicle.fdjh, dataObject.value("fdjh").toString().toLocal8Bit().data());
		strcpy_s(vehicle.rlzl, dataObject.value("rlzl").toString().toLocal8Bit().data());
		strcpy_s(vehicle.clscdwmc, dataObject.value("clscdwmc").toString().toLocal8Bit().data());
		strcpy_s(vehicle.pfbz, dataObject.value("pfbz").toString().toLocal8Bit().data());
		strcpy_s(vehicle.gl, dataObject.value("gl").toString().toLocal8Bit().data());
		strcpy_s(vehicle.zxxs, dataObject.value("zxxs").toString().toLocal8Bit().data());
		strcpy_s(vehicle.qlj, dataObject.value("qlj").toString().toLocal8Bit().data());
		strcpy_s(vehicle.hxnbk, dataObject.value("hxnbk").toString().toLocal8Bit().data());
		strcpy_s(vehicle.cpscdz, dataObject.value("cpscdz").toString().toLocal8Bit().data());
		strcpy_s(vehicle.lts, dataObject.value("lts").toString().toLocal8Bit().data());
		strcpy_s(vehicle.zs, dataObject.value("zs").toString().toLocal8Bit().data());
		strcpy_s(vehicle.ltgg, dataObject.value("ltgg").toString().toLocal8Bit().data());
		strcpy_s(vehicle.zzl, dataObject.value("zzl").toString().toLocal8Bit().data());
		strcpy_s(vehicle.zj, dataObject.value("zj").toString().toLocal8Bit().data());
		strcpy_s(vehicle.zzllyxs, dataObject.value("zzllyxs").toString().toLocal8Bit().data());
		strcpy_s(vehicle.zh, dataObject.value("zh").toString().toLocal8Bit().data());
		strcpy_s(vehicle.wkc, dataObject.value("wkc").toString().toLocal8Bit().data());
		strcpy_s(vehicle.edzzl, dataObject.value("edzzl").toString().toLocal8Bit().data());
		strcpy_s(vehicle.wkk, dataObject.value("wkk").toString().toLocal8Bit().data());
		strcpy_s(vehicle.hxnbc, dataObject.value("hxnbc").toString().toLocal8Bit().data());
		strcpy_s(vehicle.zbzl, dataObject.value("zbzl").toString().toLocal8Bit().data());
		strcpy_s(vehicle.bgcazzdyxzzl, dataObject.value("bgcazzdyxzzl").toString().toLocal8Bit().data());
		strcpy_s(vehicle.jsszcrs, dataObject.value("jsszcrs").toString().toLocal8Bit().data());
		strcpy_s(vehicle.clzzrq, dataObject.value("clzzrq").toString().toLocal8Bit().data());
		strcpy_s(vehicle.bz, dataObject.value("bz").toString().toLocal8Bit().data());
		strcpy_s(vehicle.qybz, dataObject.value("qybz").toString().toLocal8Bit().data());
		strcpy_s(vehicle.yh, dataObject.value("yh").toString().toLocal8Bit().data());
		strcpy_s(vehicle.zxzs, dataObject.value("zxzs").toString().toLocal8Bit().data());
		strcpy_s(vehicle.ggpc, dataObject.value("ggpc").toString().toLocal8Bit().data());
	}
	else
	{
		return false;
	}
	return true;
}

void VehicleInfoDialog::startTimer(int nMillisecond)
{
	m_nMillisecond = nMillisecond / 1000;
	m_pCountdownTimer->start(1000); 

	ui->textBrowser->setHtml("");
	ui->pBtnNext->setStyleSheet("border:2px groove gray;border-radius:10px;padding:2px 4px;border-image:url(./Resources/Images/nextoff.png)");
	ui->pBtnNext->setEnabled(false);
	ui->labelLoading->setVisible(true);
	m_bInterrupted = false;
	// 定时关闭
	if (nMillisecond > 0)
	{
		m_pTimer->start(nMillisecond);
		// 读取车辆信息
		int nCount = nMillisecond / 50 / 2;
		do
		{
			QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
			// 读取的Json是在内存中还是以文件的方式存储在本地？
			if (getVehicleData("1.json", m_vehicle))
			{
				// 读取成功
			}
			// 读取成功
			strcpy_s(m_vehicleInfo.szBrand, "雪佛兰");
			strcpy_s(m_vehicleInfo.szColor, "红色");
			strcpy_s(m_vehicleInfo.szManufactureAddress, "重庆");
			strcpy_s(m_vehicleInfo.szManufactureDate, "2018-12-12");
			strcpy_s(m_vehicleInfo.szManufacturer, "上汽通用");
			strcpy_s(m_vehicleInfo.szModel, "科沃兹");
			strcpy_s(m_vehicleInfo.szOwnerId, m_qstrOwnerId.toStdString().c_str());
			strcpy_s(m_vehicleInfo.szVehicleId, "45678GHJK567");
			if (150 == nCount) {
				ui->labelLoading->setVisible(false);
				ui->pBtnNext->setStyleSheet("border:2px groove gray;border-radius:10px;padding:2px 4px;border-image:url(./Resources/Images/nexton.png)");
				ui->pBtnNext->setEnabled(true);
				//将读取的数据写成html，设置进textBrower
				QString qstrVehicleInfo = m_qstrVehicleInfoTemplateHtml;
				ui->textBrowser->setHtml(qstrVehicleInfo);
				break;
			}
			// 每50ms读取一次身份证信息
			Sleep(50);
		} while (nCount-- && !m_bInterrupted);
	}
	else
	{
		// 默认60秒自动关闭
		m_pTimer->start(30000);
	}
}
