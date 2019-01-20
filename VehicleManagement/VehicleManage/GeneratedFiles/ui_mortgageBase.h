/********************************************************************************
** Form generated from reading UI file 'mortgageBase.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MORTGAGEBASE_H
#define UI_MORTGAGEBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include "basedialog.h"

QT_BEGIN_NAMESPACE

class Ui_mortgageBase
{
public:
    QPushButton *btnmortgageSelect;
    QPushButton *btnmortgageReport;
    QPushButton *btnmortgageCheck;
    QPushButton *pBtnGohome;

    void setupUi(BaseDialog *mortgageBase)
    {
        if (mortgageBase->objectName().isEmpty())
            mortgageBase->setObjectName(QStringLiteral("mortgageBase"));
        mortgageBase->resize(1900, 1080);
        btnmortgageSelect = new QPushButton(mortgageBase);
        btnmortgageSelect->setObjectName(QStringLiteral("btnmortgageSelect"));
        btnmortgageSelect->setGeometry(QRect(330, 400, 250, 90));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(20);
        btnmortgageSelect->setFont(font);
        btnmortgageSelect->setStyleSheet(QLatin1String("border:0px groove gray;border-radius:10px;\n"
"background-image: url(:/Resources/Images/btn.png);\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/Images/\346\212\265\346\212\274\346\237\245\350\257\242.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnmortgageSelect->setIcon(icon);
        btnmortgageSelect->setIconSize(QSize(71, 92));
        btnmortgageSelect->setFlat(true);
        btnmortgageReport = new QPushButton(mortgageBase);
        btnmortgageReport->setObjectName(QStringLiteral("btnmortgageReport"));
        btnmortgageReport->setGeometry(QRect(800, 400, 250, 90));
        btnmortgageReport->setFont(font);
        btnmortgageReport->setStyleSheet(QLatin1String("border:0px groove gray;border-radius:10px;\n"
"background-image: url(:/Resources/Images/btn.png);\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/Images/\346\212\265\346\212\274\347\224\263\346\212\245.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnmortgageReport->setIcon(icon1);
        btnmortgageReport->setIconSize(QSize(71, 92));
        btnmortgageReport->setFlat(true);
        btnmortgageCheck = new QPushButton(mortgageBase);
        btnmortgageCheck->setObjectName(QStringLiteral("btnmortgageCheck"));
        btnmortgageCheck->setGeometry(QRect(1280, 400, 250, 90));
        btnmortgageCheck->setFont(font);
        btnmortgageCheck->setStyleSheet(QLatin1String("border:0px groove gray;border-radius:10px;\n"
"background-image: url(:/Resources/Images/btn.png);\n"
""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resources/Images/\346\212\265\346\212\274\346\243\200\346\237\245.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnmortgageCheck->setIcon(icon2);
        btnmortgageCheck->setIconSize(QSize(71, 92));
        btnmortgageCheck->setFlat(true);
        pBtnGohome = new QPushButton(mortgageBase);
        pBtnGohome->setObjectName(QStringLiteral("pBtnGohome"));
        pBtnGohome->setGeometry(QRect(1600, 60, 240, 90));
        pBtnGohome->setFont(font);
        pBtnGohome->setStyleSheet(QLatin1String("border:0px groove gray;border-radius:10px;\n"
"background-image: url(:/Resources/Images/btn.png);\n"
""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Resources/Images/\344\270\273\351\241\265.png"), QSize(), QIcon::Normal, QIcon::Off);
        pBtnGohome->setIcon(icon3);
        pBtnGohome->setIconSize(QSize(71, 92));
        pBtnGohome->setFlat(true);

        retranslateUi(mortgageBase);

        QMetaObject::connectSlotsByName(mortgageBase);
    } // setupUi

    void retranslateUi(BaseDialog *mortgageBase)
    {
        mortgageBase->setWindowTitle(QApplication::translate("mortgageBase", "mortgageBase", 0));
        btnmortgageSelect->setText(QApplication::translate("mortgageBase", "\346\212\265\346\212\274\346\237\245\350\257\242", 0));
        btnmortgageReport->setText(QApplication::translate("mortgageBase", "\346\212\265\346\212\274\347\224\263\346\212\245", 0));
        btnmortgageCheck->setText(QApplication::translate("mortgageBase", "\346\212\265\346\212\274\351\252\214\350\257\201", 0));
        pBtnGohome->setText(QApplication::translate("mortgageBase", "\350\277\224\345\233\236", 0));
    } // retranslateUi

};

namespace Ui {
    class mortgageBase: public Ui_mortgageBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MORTGAGEBASE_H
