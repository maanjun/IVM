#include "checkiddialog.h"
#include "ui_checkiddialog.h"
#include <QMessageBox>
#include <QLabel>
#include <QImage>
#include <QPixmap>
#include <QMovie>
#include <QDebug>

CheckIDDialog::CheckIDDialog(unsigned int caller, QWidget *parent) :
	m_caller(caller),
    BaseDialog(parent),
    ui(new Ui::CheckIDDialog)
{
    ui->setupUi(this);

	// 身份信息初始化
	m_idInfo = { 0 };

	// 默认远程验车
	if (CHECKVEHICLE == m_caller)
	{
		ui->pBtnScanIdSelect->setVisible(true);
		ui->pBtnScanVehicle->setVisible(true);
		ui->pBtnReceipt->setVisible(true);
		ui->pBtnDone->setVisible(true);
		ui->pBtnScanIdSelect->setVisible(false);
		ui->pBtnSelect->setVisible(false);
	}
	else 
	{
		ui->pBtnScanIdSelect->setVisible(false);
		ui->pBtnScanVehicle->setVisible(false);
		ui->pBtnReceipt->setVisible(false);
		ui->pBtnDone->setVisible(false);
		ui->pBtnScanIdSelect->setVisible(true);
		ui->pBtnSelect->setVisible(true);
	}

	QMovie *movie = new QMovie("./Resources/Images/loading.gif", "gif", this);
	ui->labelLoading->setMovie(movie);
	movie->start();

	// 读取
	m_qstrIDTemplateHtml = "";
	readFile("D:\\Works\\Mine\\IVM\\Codes\\IVM\\VehicleManagement\\VehicleManage\\Resources\\Html\\sfztemplate.html", m_qstrIDTemplateHtml);
}

CheckIDDialog::~CheckIDDialog()
{
    delete ui;
}

void CheckIDDialog::startTimer(int nMillisecond)
{
	m_idInfo = { 0 };
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
			// 读取成功
			m_idInfo.nGender = 1;
			strcpy_s(m_idInfo.szAddress, "重庆市江北区石马河社区");
			strcpy_s(m_idInfo.szAuthority, "重庆市江北区");
			strcpy_s(m_idInfo.szBirthday, "2018-10-13");
			strcpy_s(m_idInfo.szHeadimage, "");
			strcpy_s(m_idInfo.szNation, "汉");
			strcpy_s(m_idInfo.szNumber, "500105198811112222");
			strcpy_s(m_idInfo.szUsername, "马军");
			strcpy_s(m_idInfo.szValidSection, "2018-10-13~2028-10-13");
			if (150 == nCount) {
				ui->labelLoading->setVisible(false);
				ui->pBtnNext->setStyleSheet("border:2px groove gray;border-radius:10px;padding:2px 4px;border-image:url(./Resources/Images/nexton.png)");
				ui->pBtnNext->setEnabled(true);
				//将读取的数据写成html，设置进textBrower
				QString qstrIDInfo = m_qstrIDTemplateHtml;
					//.arg(QString::fromLocal8Bit("头像"))
					//.arg(QString::fromLocal8Bit("姓名"))
					//.arg(QString::fromLocal8Bit("性别"))
					//.arg(QString::fromLocal8Bit("民族"))
					//.arg(QString::fromLocal8Bit("2018"))
					//.arg(QString::fromLocal8Bit("11"))
					//.arg(QString::fromLocal8Bit("11"))
					//.arg(QString::fromLocal8Bit("住址第一行"))
					//.arg(QString::fromLocal8Bit("住址第二行"))
					//.arg(QString::fromLocal8Bit("住址第三行"))
					//.arg(QString::fromLocal8Bit("身份证号码"));
				ui->textBrowser->setHtml(qstrIDInfo);
				ui->labelHead->setPixmap(QPixmap("./Resources/Images/head.png"));
				ui->labelHead->setScaledContents(true);
				ui->labelHead->setVisible(true);
				// 查询用户当前到哪一步
				getUserinfo(m_idInfo.szNumber);
				break;
			}
			// 每50ms读取一次身份证信息
			Sleep(50);
		} while (nCount-- && !m_bInterrupted);
	}
	else
	{
		// 默认60秒自动关闭
		m_pTimer->start(60000);
	}
}

void CheckIDDialog::on_pBtnHomepage_clicked()
{
    // 回到主页
	//this->close();
	m_bInterrupted = true;
	m_pTimer->stop();
	emit goHomeSignal();
}

void CheckIDDialog::on_pBtnNext_clicked()
{
    // 下一步
	m_pTimer->stop();
	// 存入数据库()
	m_operateMysql.init();
	m_operateMysql.begin();
	QString qstrSql = QString("INSERT INTO USER(USERNAME, GENDER, NATION, BIRTHDAY, ADDRESS, NUMBER, AUTHORITY, VALIDSECTION, STAGE, ISVALID, HEADIMAGE) VALUES('%1', %2, '%3', '%4', '%5', '%6', '%7', '%8', %9, %10, '%11')")
		.arg(QString::fromLocal8Bit(m_idInfo.szUsername))
		.arg(m_idInfo.nGender)
		.arg(QString::fromLocal8Bit(m_idInfo.szNation))
		.arg(m_idInfo.szBirthday)
		.arg(QString::fromLocal8Bit(m_idInfo.szAddress))
		.arg(m_idInfo.szNumber)
		.arg(QString::fromLocal8Bit(m_idInfo.szAuthority))
		.arg(QString::fromLocal8Bit(m_idInfo.szValidSection))
		.arg(1)
		.arg(1)
		.arg(QString::fromLocal8Bit(m_idInfo.szHeadimage));
	qDebug() << qstrSql << endl;
	if (m_operateMysql.queryExe(qstrSql))
	{
		m_operateMysql.commit();
	}
	else 
	{
		m_operateMysql.rollback();
		QMessageBox::information(NULL, QString::fromLocal8Bit("提示"), QString::fromLocal8Bit("数据插入错误！"));
	}
	m_operateMysql.close();
	emit idCheckedSignal(m_caller, m_idInfo.szNumber);
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
		QMessageBox::information(NULL, QString::fromLocal8Bit("提示"), QString::fromLocal8Bit("网络异常！"));
	}
}