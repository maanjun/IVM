#include "facerecognicedialog.h"
#include "ui_facerecognicedialog.h"

FaceRecogniceDialog::FaceRecogniceDialog(unsigned int caller, QWidget *parent) :
	m_caller(caller),
    BaseDialog(parent),
    ui(new Ui::FaceRecogniceDialog)
{
    ui->setupUi(this);
}

FaceRecogniceDialog::~FaceRecogniceDialog()
{
    delete ui;
}

void FaceRecogniceDialog::on_pBtnHomepage_clicked()
{
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	emit goHomeSignal();
}

void FaceRecogniceDialog::on_pBtnNext_clicked()
{
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	emit faceRecognicedSignal(m_caller);
}
