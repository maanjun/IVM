#include "mortgageBase.h"
#include "common.h"

mortgageBase::mortgageBase(QWidget *parent)
	: BaseDialog(parent)
{
	ui.setupUi(this);
	initFrame();
}

mortgageBase::~mortgageBase()
{
	fini();
}
void mortgageBase::fini()
{
	if (0 != pcheckid_select_) { delete pcheckid_select_;	pcheckid_select_ = 0; }
	if (0 != pcheckid_input_) { delete 	pcheckid_input_;	pcheckid_input_ = 0; }
	if (0 != m_pFaceRecogniceDialog) { delete m_pFaceRecogniceDialog;	m_pFaceRecogniceDialog = 0; }
	if (0 != pmortage_select_) { delete pmortage_select_; pmortage_select_ = 0; }
	if (0 != pmortgage_input_message_) { delete pmortgage_input_message_;pmortgage_input_message_ = 0; }
	if (0 != pmortgage_check_) { delete pmortgage_check_;	pmortgage_check_ = 0; }
}

void mortgageBase::on_pBtnGohome_clicked()
{
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	emit goHomeSignal();
}

void mortgageBase::on_btnmortgageSelect_clicked()
{
	//��ѯ�Ƿ��Ѿ�������ӵ�Ѻ
	pcheckid_select_->show();
	pcheckid_select_->startTimer(30000);
	this->hide();
}
void mortgageBase::on_btnmortgageReport_clicked()
{
	//������ӵ�Ѻ
	pcheckid_input_->show();
	pcheckid_input_->startTimer(30000);
	this->hide();
}
void mortgageBase::on_btnmortgageCheck_clicked()
{	//����걨
	m_pFaceRecogniceDialog->show();
	m_pFaceRecogniceDialog->startTimer(30000);
	this->hide();
}

void mortgageBase::initFrame()
{
	pcheckid_select_ = new CheckIDDialog(MORTGAGE_SELECT);
	pcheckid_select_->hide();
	pcheckid_input_ =  new CheckIDDialog(MORTGAGE_INPUT);
	pcheckid_input_->hide();
	m_pFaceRecogniceDialog = new FaceRecogniceDialog(MORTGAGE);
	m_pFaceRecogniceDialog->hide();
	pmortage_select_ = new mortgageSelect();//��˰��ѯ
	pmortage_select_->hide();
	pmortgage_input_message_ = new mortgageInputmessage();//��˰����
	pmortgage_input_message_->hide();
	pmortgage_check_ = new mortgageCheck();//��˰���
	pmortgage_check_->hide();
}