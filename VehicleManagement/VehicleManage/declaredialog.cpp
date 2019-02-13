#include "declaredialog.h"
#include "ui_declaredialog.h"

DeclareDialog::DeclareDialog(QWidget *parent) :
	BaseDialog(parent),
    ui(new Ui::DeclareDialog)
{
    ui->setupUi(this);
}

DeclareDialog::~DeclareDialog()
{
    delete ui;
}

void DeclareDialog::on_pBtnHomepage_clicked()
{
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	emit goHomeSignal();
}

void DeclareDialog::on_pBtnNext_clicked()
{
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	//emit declaredSignal(m_qstrOwnerId);
}
