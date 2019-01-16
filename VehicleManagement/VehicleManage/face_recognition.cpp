#include "face_recognition.h"



face_recognition::face_recognition(QWidget *parent)
{
}


face_recognition::~face_recognition()
{
}


void face_recognition::on_pBtnHomepage_clicked()
{
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	emit goHomeSignal();
}

void face_recognition::on_pBtnDone_clicked()
{
	m_pCountdownTimer->stop();
	m_pTimer->stop();
	emit faceRecognicedSignal();
}