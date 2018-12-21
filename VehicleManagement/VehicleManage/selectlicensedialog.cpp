#include "selectlicensedialog.h"
#include "ui_selectlicensedialog.h"

SelectLicenseDialog::SelectLicenseDialog(QWidget *parent) :
	BaseDialog(parent),
    ui(new Ui::SelectLicenseDialog)
{
    ui->setupUi(this);
}

SelectLicenseDialog::~SelectLicenseDialog()
{
    delete ui;
}

void SelectLicenseDialog::on_pBtnHomepage_clicked()
{
    // 回到主页
    //this->close();
	m_pTimer->stop();
	emit goHomeSignal();
}

void SelectLicenseDialog::on_pBtnConfirm_clicked()
{
	m_pTimer->stop();
    emit selectDoneSingal();
    //this->close();
}
