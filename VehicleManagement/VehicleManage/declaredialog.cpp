#include "declaredialog.h"
#include "ui_declaredialog.h"

DeclareDialog::DeclareDialog(QWidget *parent) :
	BaseDialog(parent),
    ui(new Ui::DeclareDialog)
{
    ui->setupUi(this);
}

DeclareDialog::~DeclareDialog()
{
    delete ui;
}
