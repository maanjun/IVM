#include "paytaxdonedialog.h"
#include "ui_paytaxdonedialog.h"
#include "CommonFunction.h"

using namespace CommonFuncs;

PaytaxDoneDialog::PaytaxDoneDialog(QWidget *parent) :
	BaseDialog(parent),
    ui(new Ui::PaytaxDoneDialog)
{
    ui->setupUi(this);

	m_pUSBPrinter = new USBPrinter();
}

PaytaxDoneDialog::~PaytaxDoneDialog()
{
	if (nullptr != m_pUSBPrinter)
	{
		delete m_pUSBPrinter;
		m_pUSBPrinter = nullptr;
	}
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
	string strContentUtf8 = commonFunction.GBKToUTF8("data = '{\"serialnumber\":\"1111111111\",\"declarer\":\"���˼\",\"declaretime\":\"2018-12-31\",\"amount\":\"12345678\",\"devicenumber\":\"JLKJJ78797979\",\"declareaddress\":\"�����н�����xxxxxx�ֵ�yyyyyy��zzzzzz��\"}'; ");
	commonFunction.WriteFile(strContentUtf8, QCoreApplication::applicationDirPath().toStdString() + "/Data/jsons/taxdeclare.json");
	// 2��htmlת����ͼƬ(Ϊʲôֱ��д���Ϳ��ԣ���д���Ͳ��У�o(�i�n�i)o)
	string strExeRunPath = QCoreApplication::applicationDirPath().toStdString();
	string strExePath = strExeRunPath + "/Tools/Html2Bmp2/Html2Bmp2.exe";
	string strCmdParam = strExePath + " ";
	strCmdParam += strExeRunPath + "/Resources/Htmls/taxdeclare.html";
	strCmdParam += " " + strExeRunPath + "/Data/images/taxdeclare.bmp";
	//commonFunction.ExcuteProcess("D:/Works/Mine/IVM/Codes/IVM/VehicleManagement/Win32/Debug/Tools/Html2Bmp2/Html2Bmp2.exe D:/Works/Mine/IVM/Codes/IVM/VehicleManagement/Win32/Debug/Resources/Htmls/taxdeclare.html D:/Works/Mine/IVM/Codes/IVM/VehicleManagement/Win32/Debug/Data/images/taxdeclare.bmp", NULL, 30000);
	commonFunction.ExcuteProcess(strCmdParam.c_str(), NULL, 30000);
	// 3����ӡͼƬ����ӡȫ�ǿհף����ô��󣿣�
	m_pUSBPrinter->InitDefualtPrinter();
	string strImagePath = strExeRunPath + "/Data/images/taxdeclare.bmp";
	m_pUSBPrinter->PrinterDoc((char*)strImagePath.c_str());
	m_pUSBPrinter->PrinterWalk();
	m_pUSBPrinter->PrinterCut();
	m_pUSBPrinter->ClosePrinter();
}

