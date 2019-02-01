#include "querydeclareinsuranceresultdialog.h"
#include "ui_querydeclareinsuranceresultdialog.h"

QueryDeclareInsuranceResultDialog::QueryDeclareInsuranceResultDialog(QWidget *parent) :
	BaseDialog(parent),
    ui(new Ui::QueryDeclareInsuranceResultDialog)
{
    ui->setupUi(this);

	m_pUSBPrinter = new USBPrinter();
}

QueryDeclareInsuranceResultDialog::~QueryDeclareInsuranceResultDialog()
{
	if (nullptr != m_pUSBPrinter)
	{
		delete m_pUSBPrinter;
		m_pUSBPrinter = nullptr;
	}
    delete ui;
}

void QueryDeclareInsuranceResultDialog::on_pBtnHomepage_clicked()
{
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	emit goHomeSignal();
}

void QueryDeclareInsuranceResultDialog::on_pBtnDone_clicked()
{
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	emit queryDeclareInsuranceResultDoneSignal();
	// 打印
	// 1、json 数据写入文件并保存
	CommonFunction commonFunction;
	string strContentUtf8 = commonFunction.GBKToUTF8("data='{\"checkor\":\"欧阳锋\",\"checktime\":\"2019-12-27\",\"declarer\":\"令狐冲\",\"declaretime\":\"2018-12-24\",\"declareresult\":\"无异议\",\"devicenumber\":\"JLKJJ78797979\",\"declareaddress\":\"重庆市江北区aaaaaa街道bbbbbb幢cccccc号\"}';");
	commonFunction.WriteFile(strContentUtf8, QCoreApplication::applicationDirPath().toStdString() + "/Data/jsons/insurancedeclarequery.json");
	// 2、html转化成图片(为什么直接写死就可以？不写死就不行，o(╥﹏╥)o)
	string strExeRunPath = QCoreApplication::applicationDirPath().toStdString();
	string strExePath = strExeRunPath + "/Tools/Html2Bmp2/Html2Bmp2.exe";
	string strCmdParam = strExePath + " ";
	strCmdParam += strExeRunPath + "/Resources/Htmls/insurancedeclarequery.html";
	strCmdParam += " " + strExeRunPath + "/Data/images/insurancedeclarequery.bmp";
	//commonFunction.ExcuteProcess("D:/Works/Mine/IVM/Codes/IVM/VehicleManagement/Win32/Debug/Tools/Html2Bmp2/Html2Bmp2.exe D:/Works/Mine/IVM/Codes/IVM/VehicleManagement/Win32/Debug/Resources/Htmls/insurancedeclarequery.html D:/Works/Mine/IVM/Codes/IVM/VehicleManagement/Win32/Debug/Data/images/insurancedeclarequery.bmp", NULL, 30000);
	commonFunction.ExcuteProcess(strCmdParam.c_str(), NULL, 30000);
	// 3、打印图片（打印全是空白，调用错误？）
	m_pUSBPrinter->InitDefualtPrinter();
	string strImagePath = strExeRunPath + "/Data/images/insurancedeclarequery.bmp";
	m_pUSBPrinter->PrinterDoc((char*)strImagePath.c_str());
	m_pUSBPrinter->PrinterWalk();
	m_pUSBPrinter->PrinterCut();
	m_pUSBPrinter->ClosePrinter();
}
