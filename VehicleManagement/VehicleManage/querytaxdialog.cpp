#include "querytaxdialog.h"
#include "ui_querytaxdialog.h"

QueryTaxDialog::QueryTaxDialog(QWidget *parent) :
	BaseDialog(parent),
    ui(new Ui::QueryTaxDialog)
{
    ui->setupUi(this);
}

QueryTaxDialog::~QueryTaxDialog()
{
    delete ui;
}

void QueryTaxDialog::on_pushButton_clicked()
{

}
