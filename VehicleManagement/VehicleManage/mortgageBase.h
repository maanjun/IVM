#pragma once

#include "BaseDialog.h"
#include "ui_mortgageBase.h"

class mortgageBase : public BaseDialog
{
	Q_OBJECT

public:
	mortgageBase(QWidget *parent = Q_NULLPTR);
	~mortgageBase();

private slots:
	void on_pBtnGohome_clicked();
	void on_btnmortgageSelect_clicked();
	void on_btnmortgageReport_clicked();
	void on_btnmortgageCheck_clicked();
private:
	Ui::mortgageBase ui;
};
