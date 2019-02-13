#pragma once

#include "BaseDialog.h"
#include "ui_mortgageSelect.h"
namespace Ui {
	class mortgageSelect;
}

class mortgageSelect : public BaseDialog
{
	Q_OBJECT

public:
	mortgageSelect(QWidget *parent = Q_NULLPTR);
	~mortgageSelect();
	void startTimer(int nMillisecond = 30000);
private slots:
	void on_pBtnHomepage_clicked();

	void on_pBtnDone_clicked();
private:
	Ui::mortgageSelect *ui;
	QString m_qstrIDTemplateHtml;
	void ShowmortgageInfo();

};
