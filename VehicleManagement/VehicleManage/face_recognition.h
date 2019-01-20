#ifndef FACE_RECOGNITION_H
#define FACE_RECOGNITION_H

#include "common.h"
#include "basedialog.h"

namespace Ui {
	class face_recognition;
}

class face_recognition : public BaseDialog
{

	Q_OBJECT

public:
	explicit face_recognition(unsigned int caller, QWidget *parent = 0);
	~face_recognition();

private:
	unsigned int m_caller;

private slots:
	void on_pBtnHomepage_clicked();

	void on_pBtnDone_clicked();

private:
	Ui::face_recognition *ui;
};

#endif