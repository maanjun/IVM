#include "checkiddialog.h"
#include "ui_checkiddialog.h"
#include <QMessageBox>
#include <QLabel>
#include <QImage>
#include <QPixmap>
#include <QMovie>
#include <QDebug>
#include "CommonFunction.h"

using namespace CommonFuncs;

CheckIDDialog::CheckIDDialog(unsigned int caller, QWidget *parent) :
	m_caller(caller),
    BaseDialog(parent),
    ui(new Ui::CheckIDDialog)
{
    ui->setupUi(this);

	// 身份信息初始化
	// m_idInfo = { 0 };
	m_idCardData.reset();
	m_pIDCardReader = new IDCardReader();
	m_pIDCardReader->init();

	// 默认远程验车
	if (CHECKVEHICLE == m_caller)
	{
		ui->viewIDVehicle->setVisible(true);
		ui->viewScanningVehicle->setVisible(true);
		ui->labelScanningVehicle->setVisible(true);
		ui->viewVehicleFax->setVisible(true);
		ui->viewInputFax->setVisible(true);
		ui->labelInputFax->setVisible(true);
		ui->viewFaxDone->setVisible(true);
		ui->labelDone->setVisible(true);
		ui->viewIDSelect->setVisible(false);
		ui->labelSelect->setVisible(false);
	}
	else if (SELECTLICENSE == m_caller)
	{
		ui->viewIDVehicle->setVisible(false);
		ui->viewScanningVehicle->setVisible(false);
		ui->labelScanningVehicle->setVisible(false);
		ui->viewVehicleFax->setVisible(false);
		ui->viewInputFax->setVisible(false);
		ui->labelInputFax->setVisible(false);
		ui->viewFaxDone->setVisible(false);
		ui->labelDone->setVisible(false);
		ui->viewIDSelect->setVisible(true);
		ui->labelSelect->setVisible(true);
	}
	else
	{
		ui->viewScanningID->setVisible(false);
		ui->labelScanningID->setVisible(false);
		ui->viewIDVehicle->setVisible(false);
		ui->viewScanningVehicle->setVisible(false);
		ui->labelScanningVehicle->setVisible(false);
		ui->viewVehicleFax->setVisible(false);
		ui->viewInputFax->setVisible(false);
		ui->labelInputFax->setVisible(false);
		ui->viewFaxDone->setVisible(false);
		ui->labelDone->setVisible(false);
		ui->viewIDSelect->setVisible(false);
		ui->labelSelect->setVisible(false);
		ui->viewDone->setVisible(false);
	}
	QMovie *movie = new QMovie("./Resources/Images/loading.gif", "gif", this);
	ui->labelLoading->setMovie(movie);
	movie->start();

	// 读取
	m_qstrIDTemplateHtml = "";
	QString runPath = QCoreApplication::applicationDirPath()+ "/Resources/Htmls/sfztemplate.html";
	readFile(runPath, m_qstrIDTemplateHtml);
}

CheckIDDialog::~CheckIDDialog()
{
	if (nullptr != m_pIDCardReader)
	{
		m_pIDCardReader->fini();
		delete m_pIDCardReader;
	}
    delete ui;
}

void CheckIDDialog::startTimer(int nMillisecond)
{
	setLabelContent(QString::fromLocal8Bit("我是测试，五秒钟之后我会消失。"));
	m_nMillisecond = nMillisecond / 1000;
	m_pCountdownTimer->start(1000);

	// m_idInfo = { 0 };
	m_idCardData.reset();
	ui->textBrowser->setHtml("");
	ui->pBtnNext->setStyleSheet("border:2px groove gray;border-radius:10px;padding:2px 4px;border-image:url(./Resources/Images/nextoff.png)");
	ui->pBtnNext->setEnabled(false);
	ui->labelLoading->setVisible(true);
	ui->labelHead->setVisible(false);
	m_bInterrupted = false;
	// 定时关闭
	if (nMillisecond > 0)
	{
		m_pTimer->start(nMillisecond);
		// 读取身份证信息
		int nCount = nMillisecond / (50 * 2);
		do
		{
			QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
			bool bFailed = false;
			// 读取身份证信息
			BYTE * bufferName = new BYTE(64);
			BYTE * bufferSex = new BYTE(12);
			BYTE * bufferNation = new BYTE(40);
			BYTE * bufferBirth = new BYTE(36);
			BYTE * bufferAddress = new BYTE(144);
			BYTE * bufferIDCardNo = new BYTE(76);
			BYTE * bufferGrantDept = new BYTE(64);
			BYTE * bufferUserLifeBegin = new BYTE(36);
			BYTE * bufferUserLifeEnd = new BYTE(36);
			BYTE * bufferReserved = new BYTE(76);
			BYTE * bufferPhotoFileName = new BYTE(510);
			if (!m_pIDCardReader->GetName(bufferName) || 0 == memcmp(bufferName, "", 1))
			{
				strcpy_s(m_idCardData.Name, (char*)bufferName);
			}
			else 
			{
				setLabelContent(QString::fromLocal8Bit("读取身份证信息失败！"), WARN_TIP);
				bFailed = true;
				goto FAILED;
			}
			if (!m_pIDCardReader->GetSex(bufferSex))
			{
				strcpy_s(m_idCardData.Sex, (char*)bufferSex);
			}
			else
			{
				setLabelContent(QString::fromLocal8Bit("读取身份证信息失败！"), WARN_TIP);
				bFailed = true;
				goto FAILED;
			}
			if (!m_pIDCardReader->GetFolk(bufferNation))
			{
				strcpy_s(m_idCardData.Nation, (char*)bufferNation);
			}
			else
			{
				setLabelContent(QString::fromLocal8Bit("读取身份证信息失败！"), WARN_TIP);
				bFailed = true;
				goto FAILED;
			}
			if (!m_pIDCardReader->GetBirth(bufferBirth))
			{
				strcpy_s(m_idCardData.Born, (char*)bufferBirth);
			}
			else
			{
				setLabelContent(QString::fromLocal8Bit("读取身份证信息失败！"), WARN_TIP);
				bFailed = true;
				goto FAILED;
			}
			if (!m_pIDCardReader->GetAddr(bufferAddress))
			{
				strcpy_s(m_idCardData.Address, (char*)bufferAddress);
			}
			else
			{
				setLabelContent(QString::fromLocal8Bit("读取身份证信息失败！"), WARN_TIP);
				bFailed = true;
				goto FAILED;
			}
			if (!m_pIDCardReader->GetIDNum(bufferIDCardNo))
			{
				strcpy_s(m_idCardData.IDCardNo, (char*)bufferIDCardNo);
			}
			else
			{
				setLabelContent(QString::fromLocal8Bit("读取身份证信息失败！"), WARN_TIP);
				bFailed = true;
				goto FAILED;
			}
			if (!m_pIDCardReader->GetDep(bufferGrantDept))
			{
				strcpy_s(m_idCardData.GrantDept, (char*)bufferGrantDept);
			}
			else
			{
				setLabelContent(QString::fromLocal8Bit("读取身份证信息失败！"), WARN_TIP);
				bFailed = true;
				goto FAILED;
			}
			if (!m_pIDCardReader->GetBegin(bufferUserLifeBegin))
			{
				strcpy_s(m_idCardData.UserLifeBegin, (char*)bufferUserLifeBegin);
			}
			else
			{
				setLabelContent(QString::fromLocal8Bit("读取身份证信息失败！"), WARN_TIP);
				bFailed = true;
				goto FAILED;
			}
			if (!m_pIDCardReader->GetEnd(bufferUserLifeEnd))
			{
				strcpy_s(m_idCardData.UserLifeEnd, (char*)bufferUserLifeEnd);
			}
			else
			{
				setLabelContent(QString::fromLocal8Bit("读取身份证信息失败！"), WARN_TIP);
				bFailed = true;
				goto FAILED;
			}
			if (!m_pIDCardReader->GetNewAddr(bufferReserved))
			{
				strcpy_s(m_idCardData.reserved, (char*)bufferReserved);
			}
			else
			{
				setLabelContent(QString::fromLocal8Bit("读取身份证信息失败！"), WARN_TIP);
				bFailed = true;
				goto FAILED;
			}
			if (!m_pIDCardReader->GetPicPath(bufferPhotoFileName))
			{
				strcpy_s(m_idCardData.PhotoFileName, (char*)bufferPhotoFileName);
			}
			else
			{
				setLabelContent(QString::fromLocal8Bit("读取身份证信息失败！"), WARN_TIP);
				bFailed = true;
				goto FAILED;
			}
			FAILED:
			delete bufferName;
			bufferName = NULL;
			delete bufferSex;
			bufferSex = NULL;
			delete bufferNation;
			bufferNation = NULL;
			delete bufferBirth;
			bufferBirth = NULL;
			delete bufferAddress;
			bufferAddress = NULL;
			delete bufferIDCardNo;
			bufferIDCardNo = NULL;
			delete bufferGrantDept;
			bufferGrantDept = NULL;
			delete bufferUserLifeBegin;
			bufferUserLifeBegin = NULL;
			delete bufferUserLifeEnd;
			bufferUserLifeEnd = NULL;
			delete bufferReserved;
			bufferReserved = NULL;
			delete bufferPhotoFileName;
			bufferPhotoFileName = NULL;
			if (bFailed == true) {
				// 读取失败则返回，测试环境不用返回，否则无法展示
				// continue;
			}

			if (250 == nCount) {
				strcpy_s(m_idCardData.Name, "马安君");
				strcpy_s(m_idCardData.Sex, "男");
				strcpy_s(m_idCardData.Nation, "汉");
				strcpy_s(m_idCardData.Born, "2018-10-13");
				strcpy_s(m_idCardData.Address, "重庆市江北区石马河街道可乐小镇三个电饭锅水电费公司的分公司感受到");
				strcpy_s(m_idCardData.IDCardNo, "500105198811113333");
				strcpy_s(m_idCardData.GrantDept, "重庆江北");
				strcpy_s(m_idCardData.UserLifeBegin, "2018-10-13");
				strcpy_s(m_idCardData.UserLifeEnd, "2019-10-13");
				strcpy_s(m_idCardData.reserved, "保留");
				strcpy_s(m_idCardData.PhotoFileName, "");

				ui->labelLoading->setVisible(false);
				ui->pBtnNext->setStyleSheet("border:2px groove gray;border-radius:10px;padding:2px 4px;border-image:url(./Resources/Images/nexton.png)");
				ui->pBtnNext->setEnabled(true);
				QString qstrBirthday = m_idCardData.Born;
				string strAddress = m_idCardData.Address;
				QString qstrAddress = QString::fromLocal8Bit(strAddress.c_str());
				//将读取的数据写成html，设置进textBrower
				QString qstrIDInfo = m_qstrIDTemplateHtml
					.arg(QString::fromLocal8Bit(m_idCardData.Name))
					.arg(QString::fromLocal8Bit(m_idCardData.Sex))
					.arg(QString::fromLocal8Bit(m_idCardData.Nation))
					.arg(qstrBirthday.mid(0, 4))
					.arg(qstrBirthday.mid(5, 2))
					.arg(qstrBirthday.mid(8))
					.arg(qstrAddress.mid(0, 11))
					.arg(qstrAddress.mid(12, 11))
					.arg(qstrAddress.mid(24))
					.arg(m_idCardData.IDCardNo);
				ui->textBrowser->setHtml(qstrIDInfo);
				ui->labelHead->setPixmap(QPixmap("./Resources/Images/head.png"));
				ui->labelHead->setScaledContents(true);
				ui->labelHead->setVisible(true);
				// 查询用户当前到哪一步
				//getUserinfo(m_idInfo.szNumber);
				getUserinfo(m_idCardData.IDCardNo);
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

void CheckIDDialog::on_pBtnHomepage_clicked()
{
    // 回到主页
	//this->close();
	m_bInterrupted = true;
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	emit goHomeSignal();
}

void CheckIDDialog::on_pBtnNext_clicked()
{
    // 下一步
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	// 存入数据库()
	m_operateMysql.init();
	m_operateMysql.begin();
	QString qstrSql = QString("INSERT INTO USER(USERNAME, GENDER, NATION, BIRTHDAY, ADDRESS, NUMBER, AUTHORITY, USERLIFEBEGIN, USERLIFEEND, STAGE, ISVALID, HEADIMAGE) VALUES('%1', '%2', '%3', '%4', '%5', '%6', '%7', '%8', '%9', %10, %11,'%12')")
		.arg(QString::fromLocal8Bit(m_idCardData.Name))
		.arg(QString::fromLocal8Bit(m_idCardData.Sex))
		.arg(m_idCardData.Nation)
		.arg(QString::fromLocal8Bit(m_idCardData.Born))
		.arg(m_idCardData.Address)
		.arg(QString::fromLocal8Bit(m_idCardData.IDCardNo))
		.arg(QString::fromLocal8Bit(m_idCardData.GrantDept))
		.arg(m_idCardData.UserLifeBegin)
		.arg(QString::fromLocal8Bit(m_idCardData.UserLifeEnd))
		.arg(1)
		.arg(1)
		.arg(QString::fromLocal8Bit(m_idCardData.PhotoFileName));
	qDebug() << qstrSql << endl;
	if (m_operateMysql.queryExe(qstrSql))
	{
		m_operateMysql.commit();
	}
	else 
	{
		m_operateMysql.rollback();
		//QMessageBox::information(NULL, QString::fromLocal8Bit("提示"), QString::fromLocal8Bit("数据插入错误！"));
	}
	m_operateMysql.close();
	emit idCheckedSignal(m_caller, m_idCardData.IDCardNo);
}

void CheckIDDialog::getUserinfo(QString qstrId)
{
	if (m_operateMysql.init())
	{
		int nStage = 1;
		QString qsqlSelect = QString("SELECT * FROM USER WHERE NUMBER='%1';").arg(qstrId);
		if (m_operateMysql.queryExe(qsqlSelect))
		{
			if (m_operateMysql.m_pQuery->next())
			{
				int nStage = m_operateMysql.m_pQuery->value("STAGE").toInt();
				QString qstrOwnerId = m_operateMysql.m_pQuery->value("NUMBER").toString();
				switch (nStage)
				{
				case CHECKID:
				case VEHICLEINCO:
				case CHECKRECEIPT:
				case INPUTDONE:
				case CHECKIDSELECT:
				case SELECTED:
					m_pTimer->stop();
					m_pCountdownTimer->stop();
					emit idScannedSignal(nStage, qstrOwnerId);
					break;
				default:
					break;
				}
			}
		}
		m_operateMysql.close();
	}
	else 
	{
		//QMessageBox::information(NULL, QString::fromLocal8Bit("提示"), QString::fromLocal8Bit("网络异常！"));
	}
}