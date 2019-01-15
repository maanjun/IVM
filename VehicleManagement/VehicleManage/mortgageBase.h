#pragma once

#include "BaseDialog.h"
#include "ui_mortgageBase.h"

class mortgageBase : public BaseDialog
{
	Q_OBJECT

public:
	mortgageBase(QWidget *parent = Q_NULLPTR);
	~mortgageBase();

private:
	Ui::mortgageBase ui;
};
