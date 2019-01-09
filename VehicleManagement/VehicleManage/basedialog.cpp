#include "basedialog.h"
#include "ui_basedialog.h"

BaseDialog::BaseDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BaseDialog)
{
    ui->setupUi(this);

	this->setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);
	//ui->labelTitle->setAttribute(Qt::WA_TranslucentBackground);
	//ui->labelTitle->setStyleSheet("background:transparent");
	m_nMillisecond = 0;
	m_pTimer = new QTimer(this);
	connect(m_pTimer, SIGNAL(timeout()), this, SLOT(onTimecoutSlot()));
	m_pCountdownTimer = new QTimer(this);
	connect(m_pCountdownTimer, SIGNAL(timeout()), this, SLOT(showCountdownTimeSlot()));
	ui->labelWarning->setVisible(false);
	m_pLabelWarningTimer = new QTimer(this);
	connect(m_pLabelWarningTimer, SIGNAL(timeout()), this, SLOT(hideLabelWarningSlot()));
	m_bInterrupted = false;
}

BaseDialog::~BaseDialog()
{
    if (m_pTimer != Q_NULLPTR)
        m_pTimer->deleteLater();
	if (m_pCountdownTimer != Q_NULLPTR)
		m_pCountdownTimer->deleteLater();
	if (m_pLabelWarningTimer != Q_NULLPTR)
		m_pLabelWarningTimer->deleteLater();
    delete ui;
}

void BaseDialog::startTimer(int nMillisecond)
{
	m_nMillisecond = nMillisecond / 1000;
    // 定时关闭
    if (nMillisecond > 0)
    {
        m_pTimer->start(nMillisecond);
    }
    else
    {
		// 默认60秒自动关闭
        m_pTimer->start(20000);
    }
	m_pCountdownTimer->start(1000);
}

void BaseDialog::onTimecoutSlot()
{
	m_pCountdownTimer->stop();
	emit goHomeSignal();
}

void BaseDialog::stopTimer()
{
	m_pCountdownTimer->stop();
	m_pTimer->stop();
}

void BaseDialog::setOwnerId(QString qstrOwnerId)
{
	m_qstrOwnerId = qstrOwnerId;
}


void BaseDialog::showCountdownTimeSlot()
{
	m_nMillisecond--;
	QString CountdownText = "";
	if (m_nMillisecond > 99) 
	{
		CountdownText = QString("%1").arg(99);
	}
	else if (m_nMillisecond < 10 && m_nMillisecond >= 0)
	{
		CountdownText = QString("0%1").arg(m_nMillisecond);
	}
	else if (m_nMillisecond < 0)
	{
		CountdownText = QString("00");
	}
	else
	{
		CountdownText = QString("0%1").arg(m_nMillisecond);
	}
	ui->lcdNumber->display(CountdownText);
}

void BaseDialog::keyPressEvent(QKeyEvent *event)
{
	switch (event->key())
	{
		//重写esc关闭窗口
	case Qt::Key_Escape:
		break;
	default:
		QDialog::keyPressEvent(event);
	}
}

void BaseDialog::setLabelContent(QString qstrContent)
{
	m_pLabelWarningTimer->start(5000);
	ui->labelWarning->setText(qstrContent);
	ui->labelWarning->setVisible(true);
}

void BaseDialog::hideLabelWarningSlot()
{
	m_pLabelWarningTimer->stop();
	ui->labelWarning->setVisible(false);
}