#include "querytaxdialog.h"
#include "ui_querytaxdialog.h"
#include <QMovie>
QueryTaxDialog::QueryTaxDialog(QWidget *parent) :
	BaseDialog(parent),
    ui(new Ui::QueryTaxDialog)
{
    ui->setupUi(this);

	QMovie *movie = new QMovie("./Resources/Images/loading.gif", "gif", this);
	ui->labelLoading->setMovie(movie);
	movie->start();

}
void QueryTaxDialog::startTimer(int nMillisecond)
{
	setLabelContent(QString::fromLocal8Bit("正在读取纳税信息"));
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
				ShowTaxInfo();
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
void QueryTaxDialog::ShowTaxInfo()
{
	// 读取
	m_qstrIDTemplateHtml = "";
	QString runPath = QCoreApplication::applicationDirPath() + "/Resources/Htmls/QueryTax.html";
	readFile(runPath, m_qstrIDTemplateHtml);
	QString html = m_qstrIDTemplateHtml.arg("PX0000011").arg(QString::fromLocal8Bit("马安君"))
		.arg(m_qstrOwnerId).arg("15902346232").arg(QString::fromLocal8Bit("长安牌")).arg("LL66HAB02JB228010")
		.arg("YR2700").arg("0230003").arg("2018-11-24").arg(QString::fromLocal8Bit("完税证明"))
		.arg(QString::fromLocal8Bit("有效")).arg(QString::fromLocal8Bit("重庆税务两江新区"))
		.arg("2018-11-26").arg("PX0001ACD14").arg("12321").arg("21003.00");
	ui->taxInfo->setHtml(html);
	ui->labelLoading->setVisible(false);

}

QueryTaxDialog::~QueryTaxDialog()
{
    delete ui;
}

void QueryTaxDialog::on_pBtnHomepage_clicked()
{
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	emit goHomeSignal();
}

void QueryTaxDialog::on_pBtnDone_clicked()
{
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	emit queryTaxDoneSignal();
	// 打印

}
