#include "paytaxdonedialog.h"
#include "ui_paytaxdonedialog.h"

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
