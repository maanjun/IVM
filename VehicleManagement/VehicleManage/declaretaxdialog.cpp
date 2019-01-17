#include "declaretaxdialog.h"
#include "ui_declaretaxdialog.h"

DeclareTaxDialog::DeclareTaxDialog(QWidget *parent) :
	BaseDialog(parent),
    ui(new Ui::DeclareTaxDialog)
{
    ui->setupUi(this);
}

DeclareTaxDialog::~DeclareTaxDialog()
{
    delete ui;
}

void DeclareTaxDialog::on_pBtnHomepage_clicked()
{
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	emit goHomeSignal();
}

void DeclareTaxDialog::on_pBtnNext_clicked()
{
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	emit taxDeclaredSignal(m_qstrOwnerId);
}
