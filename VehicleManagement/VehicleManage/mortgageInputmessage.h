#pragma once

#include "BaseDialog.h"
#include "ui_mortgageInputmessage.h"

class mortgageInputmessage : public BaseDialog
{
	Q_OBJECT

public:
	mortgageInputmessage(QWidget *parent = Q_NULLPTR);
	~mortgageInputmessage();

private:
	Ui::mortgageInputmessage ui;

private slots:
	void on_pBtnHomepage_clicked();
	void on_pBtnDone_clicked();
};
