#include "querydeclaretaxresultdialog.h"
#include "ui_querydeclaretaxresultdialog.h"

QueryDeclareTaxResultDialog::QueryDeclareTaxResultDialog(QWidget *parent) :
	BaseDialog(parent),
    ui(new Ui::QueryDeclareTaxResultDialog)
{
    ui->setupUi(this);
	m_pUSBPrinter = new USBPrinter;
}

QueryDeclareTaxResultDialog::~QueryDeclareTaxResultDialog()
{
	if (nullptr != m_pUSBPrinter)
	{
		delete m_pUSBPrinter;
		m_pUSBPrinter = nullptr;
	}
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
	// ��ӡ
	// 1��json ����д���ļ�������
	CommonFunction commonFunction;
	string strContentUtf8 = commonFunction.GBKToUTF8("data='{\"checkor\":\"ŷ����\",\"checktime\":\"2019-12-27\",\"declarer\":\"�����\",\"declaretime\":\"2018-12-24\",\"declareresult\":\"������\",\"devicenumber\":\"JLKJJ78797979\",\"declareaddress\":\"�����н�����aaaaaa�ֵ�bbbbbb��cccccc��\"}';");
	commonFunction.WriteFile(strContentUtf8, QCoreApplication::applicationDirPath().toStdString() + "/Data/jsons/taxdeclarequery.json");
	// 2��htmlת����ͼƬ(Ϊʲôֱ��д���Ϳ��ԣ���д���Ͳ��У�o(�i�n�i)o)
	string strExeRunPath = QCoreApplication::applicationDirPath().toStdString();
	string strExePath = strExeRunPath + "/Tools/Html2Bmp2/Html2Bmp2.exe";
	string strCmdParam = strExePath + " ";
	strCmdParam += strExeRunPath + "/Resources/Htmls/taxdeclarequery.html";
	strCmdParam += " " + strExeRunPath + "/Data/images/taxdeclarequery.bmp";
	//commonFunction.ExcuteProcess("D:/Works/Mine/IVM/Codes/IVM/VehicleManagement/Win32/Debug/Tools/Html2Bmp2/Html2Bmp2.exe D:/Works/Mine/IVM/Codes/IVM/VehicleManagement/Win32/Debug/Resources/Htmls/taxdeclarequery.html D:/Works/Mine/IVM/Codes/IVM/VehicleManagement/Win32/Debug/Data/images/taxdeclarequery.bmp", NULL, 30000);
	commonFunction.ExcuteProcess(strCmdParam.c_str(), NULL, 30000);
	// 3����ӡͼƬ����ӡȫ�ǿհף����ô��󣿣�
	m_pUSBPrinter->InitDefualtPrinter();
	string strImagePath = strExeRunPath + "/Data/images/taxdeclarequery.bmp";
	m_pUSBPrinter->PrinterDoc((char*)strImagePath.c_str());
	m_pUSBPrinter->PrinterWalk();
	m_pUSBPrinter->PrinterCut();
	m_pUSBPrinter->ClosePrinter();
}
