#include "querydeclaretaxresultdialog.h"
#include "ui_querydeclaretaxresultdialog.h"

QueryDeclareTaxResultDialog::QueryDeclareTaxResultDialog(QWidget *parent) :
	BaseDialog(parent),
    ui(new Ui::QueryDeclareTaxResultDialog)
{
    ui->setupUi(this);
}

QueryDeclareTaxResultDialog::~QueryDeclareTaxResultDialog()
{
    delete ui;
}

void QueryDeclareTaxResultDialog::on_pBtnHomepage_clicked()
{
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	emit goHomeSignal();
}

void QueryDeclareTaxResultDialog::on_pBtnDone_clicked()
{
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	emit queryDeclareTaxResultDoneSignal();
}
