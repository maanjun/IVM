#include "payinsurancedonedialog.h"
#include "ui_payinsurancedonedialog.h"

PayinsuranceDoneDialog::PayinsuranceDoneDialog(QWidget *parent) :
	BaseDialog(parent),
    ui(new Ui::PayinsuranceDoneDialog)
{
    ui->setupUi(this);
	m_pUSBPrinter = new USBPrinter();
}

PayinsuranceDoneDialog::~PayinsuranceDoneDialog()
{
	if (nullptr != m_pUSBPrinter)
	{
		delete m_pUSBPrinter;
		m_pUSBPrinter = nullptr;
	}
    delete ui;
}

void PayinsuranceDoneDialog::on_pBtnHomepage_clicked()
{
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	emit goHomeSignal();
}

void PayinsuranceDoneDialog::on_pBtnDone_clicked()
{
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	emit payinsuranceDoneSignal(m_qstrOwnerId);
	// 打印
	// 1、json 数据写入文件并保存
	CommonFunction commonFunction;
	string strContentUtf8 = commonFunction.GBKToUTF8("data = '{\"serialnumber\":\"22222222\",\"declarer\":\"马克思\",\"declaretime\":\"2018-12-31\",\"amount\":\"12345678\",\"devicenumber\":\"JLKJJ78797979\",\"declareaddress\":\"重庆市江北区xxxxxx街道yyyyyy幢zzzzzz号\"}'; ");
	commonFunction.WriteFile(strContentUtf8, QCoreApplication::applicationDirPath().toStdString() + "/Data/jsons/insurancedeclare.json");
	// 2、html转化成图片(为什么直接写死就可以？不写死就不行，o(╥﹏╥)o)
	string strExeRunPath = QCoreApplication::applicationDirPath().toStdString();
	string strExePath = strExeRunPath + "/Tools/Html2Bmp2/Html2Bmp2.exe";
	string strCmdParam = strExePath + " ";
	strCmdParam += strExeRunPath + "/Resources/Htmls/insurancedeclare.html";
	strCmdParam += " " + strExeRunPath + "/Data/images/insurancedeclare.bmp";
	//commonFunction.ExcuteProcess("D:/Works/Mine/IVM/Codes/IVM/VehicleManagement/Win32/Debug/Tools/Html2Bmp2/Html2Bmp2.exe D:/Works/Mine/IVM/Codes/IVM/VehicleManagement/Win32/Debug/Resources/Htmls/insurancedeclare.html D:/Works/Mine/IVM/Codes/IVM/VehicleManagement/Win32/Debug/Data/images/insurancedeclare.bmp", NULL, 30000);
	commonFunction.ExcuteProcess(strCmdParam.c_str(), NULL, 30000);
	// 3、打印图片（打印全是空白，调用错误？）
	m_pUSBPrinter->InitDefualtPrinter();
	string strImagePath = strExeRunPath + "/Data/images/insurancedeclare.bmp";
	m_pUSBPrinter->PrinterDoc((char*)strImagePath.c_str());
	m_pUSBPrinter->PrinterWalk();
	m_pUSBPrinter->PrinterCut();
	m_pUSBPrinter->ClosePrinter();
}
