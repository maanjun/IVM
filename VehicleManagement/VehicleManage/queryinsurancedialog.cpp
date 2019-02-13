#include "queryinsurancedialog.h"
#include "ui_queryinsurancedialog.h"
#include <qmovie.h>

QueryInsuranceDialog::QueryInsuranceDialog(QWidget *parent) :
	BaseDialog(parent),
    ui(new Ui::QueryInsuranceDialog)
{
    ui->setupUi(this);
	QMovie *movie = new QMovie("./Resources/Images/loading.gif", "gif", this);
	ui->labelLoading->setMovie(movie);
	movie->start();
}
void QueryInsuranceDialog::startTimer(int nMillisecond)
{
	setLabelContent(QString::fromLocal8Bit("正在读取保险信息"));
	m_nMillisecond = nMillisecond / 1000;
	m_pCountdownTimer->start(1000);

	ui->taxInfo->setHtml("");
	ui->labelLoading->setVisible(true);
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
			//根据给定身份证查找车辆识别码，再找出交税信息
			if (bFailed == true) {
				// 读取失败则返回，测试环境不用返回，否则无法展示
				// continue;
			}

			if (250 >= nCount) {
				ShowInsuranceInfo();
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
void QueryInsuranceDialog::ShowInsuranceInfo()
{
	// 读取
	m_qstrIDTemplateHtml = "";
	QString runPath = QCoreApplication::applicationDirPath() + "/Resources/Htmls/QueryInsurance.html";
	readFile(runPath, m_qstrIDTemplateHtml);
	QString html = m_qstrIDTemplateHtml.arg("BXP0000011").arg(QString::fromLocal8Bit("OR0001"))
		.arg(m_qstrOwnerId).arg(QString::fromLocal8Bit("中国人保")).arg("02").arg(QString::fromLocal8Bit("渝AEE331"))
		.arg("LL66HAB02JB228010").arg("2018-11-24").arg("2019-11-23").arg(QString::fromLocal8Bit("马安君"))
		.arg(QString::fromLocal8Bit("512322198103052091")).arg(QString::fromLocal8Bit("确认"))
		.arg(QString::fromLocal8Bit("完税")).arg("213.00").arg("WS00135612321").arg("").arg("2018-11-24").arg("2018-11-24").arg("2019-11-23");
	ui->taxInfo->setHtml(html);
	ui->labelLoading->setVisible(false);
}
QueryInsuranceDialog::~QueryInsuranceDialog()
{
    delete ui;
}

void QueryInsuranceDialog::on_pBtnHomepage_clicked()
{
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	emit goHomeSignal();
}

void QueryInsuranceDialog::on_pBtnDone_clicked()
{
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	emit queryInsuranceDoneSignal();
}
