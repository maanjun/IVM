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
	// ��ȡ
	m_qstrIDTemplateHtml = "";
	//QString runPath = QCoreApplication::applicationDirPath() + "/Resources/Htmls/QueryTax.html";
	//readFile(runPath, m_qstrIDTemplateHtml);
	QString html = QString::fromLocal8Bit("<html><body><h1>û�л�ȡ�����ӵ�Ѻ��Ϣ</h1></body></html>");
	ui->taxInfo->setHtml(html);
	ui->labelLoading->setVisible(false);
}

void mortgageSelect::startTimer(int nMillisecond)
{
	setLabelContent(QString::fromLocal8Bit("���ڶ�ȡ���ӵ�Ѻ��Ϣ"));
	m_nMillisecond = nMillisecond / 1000;
	m_pCountdownTimer->start(1000);

	ui->taxInfo->setHtml("");
	ui->labelLoading->setVisible(true);
	m_bInterrupted = false;
	// ��ʱ�ر�
	if (nMillisecond > 0)
	{
		m_pTimer->start(nMillisecond);
		// ��ȡ���֤��Ϣ
		int nCount = nMillisecond / (50 * 2);
		do
		{
			QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
			bool bFailed = false;
			//���ݸ������֤���ҳ���ʶ���룬���ҳ���˰��Ϣ
			if (bFailed == true) {
				// ��ȡʧ���򷵻أ����Ի������÷��أ������޷�չʾ
				// continue;
			}

			if (250 >= nCount) {
				ShowmortgageInfo();
				break;
			}
			// ÿ50ms��ȡһ�����֤��Ϣ
			Sleep(50);
		} while (nCount-- && !m_bInterrupted);
	}
	else
	{
		// Ĭ��60���Զ��ر�
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
	// ��ӡ
}
