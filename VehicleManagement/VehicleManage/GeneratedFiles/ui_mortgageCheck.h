/********************************************************************************
** Form generated from reading UI file 'mortgageCheck.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MORTGAGECHECK_H
#define UI_MORTGAGECHECK_H

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

class Ui_mortgageCheck
{
public:
    QLineEdit *lineEdit;
    QPushButton *pBtnDone;
    QPushButton *pBtnHomepage;
    QLabel *label;
    QLabel *label_2;

    void setupUi(BaseDialog *mortgageCheck)
    {
        if (mortgageCheck->objectName().isEmpty())
            mortgageCheck->setObjectName(QStringLiteral("mortgageCheck"));
        mortgageCheck->resize(1900, 1080);
        lineEdit = new QLineEdit(mortgageCheck);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(830, 420, 431, 71));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(28);
        lineEdit->setFont(font);
        pBtnDone = new QPushButton(mortgageCheck);
        pBtnDone->setObjectName(QStringLiteral("pBtnDone"));
        pBtnDone->setGeometry(QRect(1290, 850, 300, 150));
        QFont font1;
        font1.setPointSize(22);
        pBtnDone->setFont(font1);
        pBtnDone->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/confirmon.png);"));
        pBtnHomepage = new QPushButton(mortgageCheck);
        pBtnHomepage->setObjectName(QStringLiteral("pBtnHomepage"));
        pBtnHomepage->setGeometry(QRect(330, 850, 300, 150));
        QFont font2;
        font2.setFamily(QStringLiteral("Algerian"));
        font2.setPointSize(22);
        pBtnHomepage->setFont(font2);
        pBtnHomepage->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/cancelon.png);"));
        label = new QLabel(mortgageCheck);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(660, 400, 201, 101));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(24);
        label->setFont(font3);
        label_2 = new QLabel(mortgageCheck);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(700, 590, 601, 71));
        label_2->setFont(font3);
        label_2->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));

        retranslateUi(mortgageCheck);

        QMetaObject::connectSlotsByName(mortgageCheck);
    } // setupUi

    void retranslateUi(BaseDialog *mortgageCheck)
    {
        mortgageCheck->setWindowTitle(QApplication::translate("mortgageCheck", "mortgageCheck", 0));
        lineEdit->setText(QString());
        pBtnDone->setText(QString());
        pBtnHomepage->setText(QString());
        label->setText(QApplication::translate("mortgageCheck", "\346\212\265\346\212\274\345\215\225\345\217\267", 0));
        label_2->setText(QApplication::translate("mortgageCheck", "* \346\262\241\346\234\211\346\211\276\345\210\260\346\212\265\346\212\274\345\215\225\345\217\267\357\274\214\350\257\267\347\241\256\350\256\244\345\220\216\347\273\247\347\273\255", 0));
    } // retranslateUi

};

namespace Ui {
    class mortgageCheck: public Ui_mortgageCheck {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MORTGAGECHECK_H
