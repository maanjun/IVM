#include "mortgageCheck.h"

mortgageCheck::mortgageCheck(QWidget *parent)
	: BaseDialog(parent)
{
	ui.setupUi(this);
}

mortgageCheck::~mortgageCheck()
{
}


void mortgageCheck::on_pBtnHomepage_clicked()
{
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	emit goHomeSignal();
}

void mortgageCheck::on_pBtnDone_clicked()
{
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	emit goHomeSignal();
}