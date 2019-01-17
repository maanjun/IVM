#include "readdrivinglisencedialog.h"
#include "ui_readdrivinglisencedialog.h"
#include <QMovie>

ReadDrivinglisenceDialog::ReadDrivinglisenceDialog(QWidget *parent) :
	BaseDialog(parent),
    ui(new Ui::ReadDrivinglisenceDialog)
{
    ui->setupUi(this);

	QMovie *movieScanning = new QMovie("./Resources/Images/scanning.gif", "gif", this);
	ui->label->setMovie(movieScanning);
	ui->label->setScaledContents(true);
	movieScanning->start();
}

ReadDrivinglisenceDialog::~ReadDrivinglisenceDialog()
{
    delete ui;
}

void ReadDrivinglisenceDialog::on_pBtnHomepage_clicked()
{
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	emit goHomeSignal();
}

void ReadDrivinglisenceDialog::on_pBtnNext_clicked()
{
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	emit drivinglisenceReadSignal(m_qstrOwnerId);
}
