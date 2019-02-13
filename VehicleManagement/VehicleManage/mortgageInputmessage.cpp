#include "mortgageInputmessage.h"

mortgageInputmessage::mortgageInputmessage(QWidget *parent)
	: BaseDialog(parent)
{
	ui.setupUi(this);
}

mortgageInputmessage::~mortgageInputmessage()
{

}

void mortgageInputmessage::on_pBtnHomepage_clicked()
{
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	emit goHomeSignal();
}
void mortgageInputmessage::on_pBtnDone_clicked()
{
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	emit mortgageInputDown();
}
