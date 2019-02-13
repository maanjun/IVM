#include "mortgageSelect.h"
#include <qmovie.h>


mortgageSelect::mortgageSelect(QWidget *parent)
	: BaseDialog(parent),
	ui(new Ui::mortgageSelect)
{
	ui->setupUi(this);
	QMovie *movie = new QMovie("./Resources/Images/loading.gif", "gif", this);
	ui->labelLoading->setMovie(movie);
	movie->start();

}

mortgageSelect::~mortgageSelect()
{

}

void mortgageSelect::ShowmortgageInfo()
{
	// 读取
	m_qstrIDTemplateHtml = "";
	//QString runPath = QCoreApplication::applicationDirPath() + "/Resources/Htmls/QueryTax.html";
	//readFile(runPath, m_qstrIDTemplateHtml);
	QString html = QString::fromLocal8Bit("<html><body><h1>没有获取到电子抵押信息</h1></body></html>");
	ui->taxInfo->setHtml(html);
	ui->labelLoading->setVisible(false);
}

void mortgageSelect::startTimer(int nMillisecond)
{
	setLabelContent(QString::fromLocal8Bit("正在读取电子抵押信息"));
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
				ShowmortgageInfo();
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
 
void mortgageSelect::on_pBtnHomepage_clicked()
{
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	emit mortgageSelectSignal(0);

}

void mortgageSelect::on_pBtnDone_clicked()
{
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	emit mortgageSelectSignal(1);
	// 打印
}
