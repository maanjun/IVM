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
	// ��ӡ
	// 1��json ����д���ļ�������
	CommonFunction commonFunction;
	string strContentUtf8 = commonFunction.GBKToUTF8("data='{\"checkor\":\"ŷ����\",\"checktime\":\"2019-12-27\",\"declarer\":\"�����\",\"declaretime\":\"2018-12-24\",\"declareresult\":\"������\",\"devicenumber\":\"JLKJJ78797979\",\"declareaddress\":\"�����н�����aaaaaa�ֵ�bbbbbb��cccccc��\"}';");
	commonFunction.WriteFile(strContentUtf8, QCoreApplication::applicationDirPath().toStdString() + "/Data/jsons/insurancedeclarequery.json");
	// 2��htmlת����ͼƬ(Ϊʲôֱ��д���Ϳ��ԣ���д���Ͳ��У�o(�i�n�i)o)
	string strExeRunPath = QCoreApplication::applicationDirPath().toStdString();
	string strExePath = strExeRunPath + "/Tools/Html2Bmp2/Html2Bmp2.exe";
	string strCmdParam = strExePath + " ";
	strCmdParam += strExeRunPath + "/Resources/Htmls/insurancedeclarequery.html";
	strCmdParam += " " + strExeRunPath + "/Data/images/insurancedeclarequery.bmp";
	//commonFunction.ExcuteProcess("D:/Works/Mine/IVM/Codes/IVM/VehicleManagement/Win32/Debug/Tools/Html2Bmp2/Html2Bmp2.exe D:/Works/Mine/IVM/Codes/IVM/VehicleManagement/Win32/Debug/Resources/Htmls/insurancedeclarequery.html D:/Works/Mine/IVM/Codes/IVM/VehicleManagement/Win32/Debug/Data/images/insurancedeclarequery.bmp", NULL, 30000);
	commonFunction.ExcuteProcess(strCmdParam.c_str(), NULL, 30000);
	// 3����ӡͼƬ����ӡȫ�ǿհף����ô��󣿣�
	m_pUSBPrinter->InitDefualtPrinter();
	string strImagePath = strExeRunPath + "/Data/images/insurancedeclarequery.bmp";
	m_pUSBPrinter->PrinterDoc((char*)strImagePath.c_str());
	m_pUSBPrinter->PrinterWalk();
	m_pUSBPrinter->PrinterCut();
	m_pUSBPrinter->ClosePrinter();
}
