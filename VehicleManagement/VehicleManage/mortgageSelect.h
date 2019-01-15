#pragma once

#include "BaseDialog.h"
#include "ui_mortgageSelect.h"

class mortgageSelect : public BaseDialog
{
	Q_OBJECT

public:
	mortgageSelect(QWidget *parent = Q_NULLPTR);
	~mortgageSelect();

private:
	Ui::mortgageSelect ui;
};
