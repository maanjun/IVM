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
    QPushButton *pBtnGohome;
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
        pBtnGohome = new QPushButton(mortgageCheck);
        pBtnGohome->setObjectName(QStringLiteral("pBtnGohome"));
        pBtnGohome->setGeometry(QRect(1600, 90, 231, 91));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(20);
        pBtnGohome->setFont(font);
        pBtnGohome->setStyleSheet(QLatin1String("border:0px groove gray;border-radius:10px;\n"
"background-image: url(:/Resources/Images/btn.png);\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/Images/\344\270\273\351\241\265.png"), QSize(), QIcon::Normal, QIcon::Off);
        pBtnGohome->setIcon(icon);
        pBtnGohome->setIconSize(QSize(71, 92));
        pBtnGohome->setFlat(true);
        lineEdit = new QLineEdit(mortgageCheck);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(1020, 450, 431, 71));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(28);
        lineEdit->setFont(font1);
        pBtnDone = new QPushButton(mortgageCheck);
        pBtnDone->setObjectName(QStringLiteral("pBtnDone"));
        pBtnDone->setGeometry(QRect(1520, 830, 300, 150));
        QFont font2;
        font2.setPointSize(22);
        pBtnDone->setFont(font2);
        pBtnDone->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/confirmon.png);"));
        pBtnHomepage = new QPushButton(mortgageCheck);
        pBtnHomepage->setObjectName(QStringLiteral("pBtnHomepage"));
        pBtnHomepage->setGeometry(QRect(560, 830, 300, 150));
        QFont font3;
        font3.setFamily(QStringLiteral("Algerian"));
        font3.setPointSize(22);
        pBtnHomepage->setFont(font3);
        pBtnHomepage->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/cancelon.png);"));
        label = new QLabel(mortgageCheck);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(850, 430, 201, 101));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font4.setPointSize(24);
        label->setFont(font4);
        label_2 = new QLabel(mortgageCheck);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(890, 620, 601, 101));
        label_2->setFont(font4);
        label_2->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));

        retranslateUi(mortgageCheck);

        QMetaObject::connectSlotsByName(mortgageCheck);
    } // setupUi

    void retranslateUi(BaseDialog *mortgageCheck)
    {
        mortgageCheck->setWindowTitle(QApplication::translate("mortgageCheck", "mortgageCheck", 0));
        pBtnGohome->setText(QApplication::translate("mortgageCheck", "\344\270\273\351\241\265", 0));
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
