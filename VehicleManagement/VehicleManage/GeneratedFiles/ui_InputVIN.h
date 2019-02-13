/********************************************************************************
** Form generated from reading UI file 'InputVIN.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUTVIN_H
#define UI_INPUTVIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include "basedialog.h"

QT_BEGIN_NAMESPACE

class Ui_InputVIN
{
public:
    QLabel *labelTax;
    QPushButton *pBtnDone;
    QLineEdit *lineEditVIN;
    QPushButton *pBtnHomepage;
    QLabel *label;

    void setupUi(BaseDialog *InputVIN)
    {
        if (InputVIN->objectName().isEmpty())
            InputVIN->setObjectName(QStringLiteral("InputVIN"));
        InputVIN->resize(1920, 1080);
        labelTax = new QLabel(InputVIN);
        labelTax->setObjectName(QStringLiteral("labelTax"));
        labelTax->setGeometry(QRect(490, 420, 161, 60));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(36);
        labelTax->setFont(font);
        pBtnDone = new QPushButton(InputVIN);
        pBtnDone->setObjectName(QStringLiteral("pBtnDone"));
        pBtnDone->setGeometry(QRect(1290, 850, 300, 150));
        QFont font1;
        font1.setPointSize(22);
        pBtnDone->setFont(font1);
        pBtnDone->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/nexton.png);"));
        lineEditVIN = new QLineEdit(InputVIN);
        lineEditVIN->setObjectName(QStringLiteral("lineEditVIN"));
        lineEditVIN->setGeometry(QRect(690, 400, 540, 86));
        QFont font2;
        font2.setFamily(QStringLiteral("Times New Roman"));
        font2.setPointSize(36);
        lineEditVIN->setFont(font2);
        lineEditVIN->setStyleSheet(QStringLiteral("border:2px groove gray;border-radius:10px;padding:2px 4px"));
        pBtnHomepage = new QPushButton(InputVIN);
        pBtnHomepage->setObjectName(QStringLiteral("pBtnHomepage"));
        pBtnHomepage->setGeometry(QRect(330, 850, 300, 150));
        QFont font3;
        font3.setFamily(QStringLiteral("Algerian"));
        font3.setPointSize(22);
        pBtnHomepage->setFont(font3);
        pBtnHomepage->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/cancelon.png);"));
        label = new QLabel(InputVIN);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(670, 510, 631, 61));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font4.setPointSize(24);
        label->setFont(font4);
        label->setStyleSheet(QStringLiteral("color: rgb(170, 0, 0);"));

        retranslateUi(InputVIN);

        QMetaObject::connectSlotsByName(InputVIN);
    } // setupUi

    void retranslateUi(BaseDialog *InputVIN)
    {
        InputVIN->setWindowTitle(QApplication::translate("InputVIN", "InputVIN", 0));
        labelTax->setText(QApplication::translate("InputVIN", "\350\275\246\351\251\276\345\217\267\357\274\232", 0));
        pBtnDone->setText(QString());
        pBtnHomepage->setText(QString());
        label->setText(QApplication::translate("InputVIN", "*\346\262\241\346\234\211\346\211\276\345\210\260\345\257\271\345\272\224\347\232\204\350\275\246\351\251\276\345\217\267\344\277\241\346\201\257\357\274\214\350\257\267\351\207\215\346\226\260\350\276\223\345\205\245\357\274\201", 0));
    } // retranslateUi

};

namespace Ui {
    class InputVIN: public Ui_InputVIN {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUTVIN_H
