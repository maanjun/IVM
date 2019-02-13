#include "InputVIN.h"

InputVIN::InputVIN(QWidget *parent)
	: BaseDialog(parent)
{
	ui.setupUi(this);
	ownerGui_ = 0;
	VINNo = "";
}

InputVIN::~InputVIN()
{
}


void InputVIN::on_pBtnHomepage_clicked()
{
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	emit goHomeSignal();
}

void InputVIN::on_pBtnDone_clicked()
{
	QString value = ui.lineEditVIN->text();
	if (value.length() >= 6)
	{
		VINNo = value;
		m_pCountdownTimer->stop();
		m_pTimer->stop();
		emit InputVINDone(ownerGui_);
	}
	else {
		m_pCountdownTimer->stop();
		m_pTimer->stop();
		this->startTimer(30000);
		value = QString::fromLocal8Bit("请输入正确的车驾号信息!");
		setLabelContent(value);
	}
}

void InputVIN::setOwnerGUIID(int ownerGUI)
{
	ownerGui_ = ownerGUI;
}

int InputVIN::getOwnerGUIID()
{
	return ownerGui_;
}

QString &InputVIN::GetInputVinNo()
{
	return VINNo;
}
