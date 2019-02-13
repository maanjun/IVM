#ifndef INPUT_VIN_GUI_H
#define INPUT_VIN_GUI_H

#include "BaseDialog.h"
#include "ui_InputVIN.h"

class InputVIN : public BaseDialog
{
	Q_OBJECT

public:
	InputVIN(QWidget *parent = Q_NULLPTR);
	~InputVIN();
	void setOwnerGUIID(int ownerGUI);
	int getOwnerGUIID();
	QString &GetInputVinNo();
private slots:
	void on_pBtnHomepage_clicked();

	void on_pBtnDone_clicked();
private:
	int ownerGui_;
	Ui::InputVIN ui;
	QString VINNo;
};

#endif