#pragma once

#include "BaseDialog.h"
#include "ui_mortgageCheck.h"

class mortgageCheck : public BaseDialog
{
	Q_OBJECT

public:
	mortgageCheck(QWidget *parent = Q_NULLPTR);
	~mortgageCheck();
private slots:
	void on_pBtnHomepage_clicked();

	void on_pBtnDone_clicked();
private:
	Ui::mortgageCheck ui;
};
