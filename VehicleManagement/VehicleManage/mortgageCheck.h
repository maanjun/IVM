#pragma once

#include "BaseDialog.h"
#include "ui_mortgageCheck.h"

class mortgageCheck : public BaseDialog
{
	Q_OBJECT

public:
	mortgageCheck(QWidget *parent = Q_NULLPTR);
	~mortgageCheck();

private:
	Ui::mortgageCheck ui;
};
