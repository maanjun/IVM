#include "inputdonedialog.h"
#include "ui_inputdonedialog.h"

InputDoneDialog::InputDoneDialog(QWidget *parent) :
	BaseDialog(parent),
    ui(new Ui::InputDoneDialog)
{
    ui->setupUi(this);
	// ÉèÖÃ°´Å¥±³¾°Í¼Æ¬
	ui->pBtnHomepage->setStyleSheet("border:2px groove gray;border-radius:10px;padding:2px 4px;border-image:url(./Images/homepageon.png)");
	ui->pBtnDone->setStyleSheet("border:2px groove gray;border-radius:10px;padding:2px 4px;border-image:url(./Images/finishon.png)");
}

InputDoneDialog::~InputDoneDialog()
{
    delete ui;
}

void InputDoneDialog::on_pBtnHomepage_clicked()
{
	//this->close();
	emit goHomeSignal();
}

void InputDoneDialog::on_pBtnDone_clicked()
{
	emit inputDoneSingal();
	//this->close();
}
