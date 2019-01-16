#include "readcertificatedialog.h"
#include "ui_readcertificatedialog.h"
#include <QMovie>

ReadCertificateDialog::ReadCertificateDialog(QWidget *parent) :
	BaseDialog(parent),
    ui(new Ui::ReadCertificateDialog)
{
    ui->setupUi(this);

	QMovie *movieScanning = new QMovie("./Resources/Images/scanning.gif", "gif", this);
	ui->label->setMovie(movieScanning);
	ui->label->setScaledContents(true);
	movieScanning->start();
}

ReadCertificateDialog::~ReadCertificateDialog()
{
    delete ui;
}

void ReadCertificateDialog::on_pBtnHomepage_clicked()
{
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	emit goHomeSignal();
}

void ReadCertificateDialog::on_pBtnNext_clicked()
{
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	emit certificateReadSignal(m_qstrOwnerId);
}
