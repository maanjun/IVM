#include "basedialog.h"
#include "ui_basedialog.h"

BaseDialog::BaseDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BaseDialog)
{
    ui->setupUi(this);

	this->setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);
	ui->labelTitle->setAttribute(Qt::WA_TranslucentBackground);
	ui->labelTitle->setStyleSheet("background:transparent");

	m_bInterrupted = false;
    m_pTimer = new QTimer(this);
    m_pTimer->setSingleShot(true);
    connect(m_pTimer, SIGNAL(timeout()), this, SLOT(onTimecoutSlot()));
}

BaseDialog::~BaseDialog()
{
    if(m_pTimer != Q_NULLPTR)
        m_pTimer->deleteLater();

    delete ui;
}

void BaseDialog::startTimer(int nMillisecond)
{
    // 定时关闭
    if (nMillisecond > 0)
    {
        m_pTimer->start(nMillisecond);
    }
    else
    {
		// 默认60秒自动关闭
        m_pTimer->start(60000);
    }
}

void BaseDialog::onTimecoutSlot()
{
	emit goHomeSignal();
}
