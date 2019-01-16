#include "mortgageBase.h"

mortgageBase::mortgageBase(QWidget *parent)
	: BaseDialog(parent)
{
	ui.setupUi(this);
}

mortgageBase::~mortgageBase()
{
}

void mortgageBase::on_pBtnGohome_clicked()
{
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	emit goHomeSignal();
}

void mortgageBase::on_btnmortgageSelect_clicked()
{

}
void mortgageBase::on_btnmortgageReport_clicked()
{

}
void mortgageBase::on_btnmortgageCheck_clicked()
{

}
