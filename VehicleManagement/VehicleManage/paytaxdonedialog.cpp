#include "paytaxdonedialog.h"
#include "ui_paytaxdonedialog.h"
#include "CommonFunction.h"

using namespace CommonFuncs;

PaytaxDoneDialog::PaytaxDoneDialog(QWidget *parent) :
	BaseDialog(parent),
    ui(new Ui::PaytaxDoneDialog)
{
    ui->setupUi(this);
}

PaytaxDoneDialog::~PaytaxDoneDialog()
{
    delete ui;
}

void PaytaxDoneDialog::on_pBtnHomepage_clicked()
{
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	emit goHomeSignal();
}

void PaytaxDoneDialog::on_pBtnDone_clicked()
{
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	emit paytaxDoneSignal(m_qstrOwnerId);
	// ��ӡ
	// 1��json ����д���ļ�������
	CommonFunction commonFunction;
	commonFunction.WriteFile("./Data/jsons/taxdeclare.json", ""data = '{\"serialnumber\":\"JLKJAD687799\",\"declarer\":\"����\",\"declaretime\":\"2018-12-24\",\"amount\":\"12345678\",\"devicenumber\":\"JLKJJ78797979\",\"declareaddress\":\"�����н�����xxxxxx�ֵ�yyyyyy��zzzzzz��"}'; "");
	// 2��htmlת����ͼƬ
	commonFunction.ExcuteProcess("", "./Html2BMP.exe ./Resources/Htmls/", 30000);
	// 3����ӡͼƬ
}

