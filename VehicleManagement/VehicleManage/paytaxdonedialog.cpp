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
	// 打印
	// 1、json 数据写入文件并保存
	CommonFunction commonFunction;
	commonFunction.WriteFile("./Data/jsons/taxdeclare.json", ""data = '{\"serialnumber\":\"JLKJAD687799\",\"declarer\":\"马安君\",\"declaretime\":\"2018-12-24\",\"amount\":\"12345678\",\"devicenumber\":\"JLKJJ78797979\",\"declareaddress\":\"重庆市江北区xxxxxx街道yyyyyy幢zzzzzz号"}'; "");
	// 2、html转化成图片
	commonFunction.ExcuteProcess("", "./Html2BMP.exe ./Resources/Htmls/", 30000);
	// 3、打印图片
}

