#include "confirmpaydialog.h"
#include "ui_confirmpaydialog.h"

ConfirmPayDialog::ConfirmPayDialog(QWidget *parent) :
	BaseDialog(parent),
    ui(new Ui::ConfirmPayDialog)
{
    ui->setupUi(this);
}

ConfirmPayDialog::~ConfirmPayDialog()
{
    delete ui;
}
