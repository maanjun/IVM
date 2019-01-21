/********************************************************************************
** Form generated from reading UI file 'mortgageSelect.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MORTGAGESELECT_H
#define UI_MORTGAGESELECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include "basedialog.h"

QT_BEGIN_NAMESPACE

class Ui_mortgageSelect
{
public:
    QLabel *label;
    QPushButton *pBtnGohome;
    QPushButton *pBtnHomepage;
    QPushButton *pBtnDone;

    void setupUi(BaseDialog *mortgageSelect)
    {
        if (mortgageSelect->objectName().isEmpty())
            mortgageSelect->setObjectName(QStringLiteral("mortgageSelect"));
        mortgageSelect->resize(1900, 1080);
        label = new QLabel(mortgageSelect);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(690, 470, 561, 101));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(24);
        label->setFont(font);
        pBtnGohome = new QPushButton(mortgageSelect);
        pBtnGohome->setObjectName(QStringLiteral("pBtnGohome"));
        pBtnGohome->setGeometry(QRect(1600, 60, 251, 91));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font1.setPointSize(20);
        pBtnGohome->setFont(font1);
        pBtnGohome->setStyleSheet(QLatin1String("border:0px groove gray;border-radius:10px;\n"
"background-image: url(:/Resources/Images/btn.png);\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/Images/\344\270\273\351\241\265.png"), QSize(), QIcon::Normal, QIcon::Off);
        pBtnGohome->setIcon(icon);
        pBtnGohome->setIconSize(QSize(71, 92));
        pBtnGohome->setFlat(true);
        pBtnHomepage = new QPushButton(mortgageSelect);
        pBtnHomepage->setObjectName(QStringLiteral("pBtnHomepage"));
        pBtnHomepage->setGeometry(QRect(330, 850, 300, 150));
        QFont font2;
        font2.setFamily(QStringLiteral("Algerian"));
        font2.setPointSize(22);
        pBtnHomepage->setFont(font2);
        pBtnHomepage->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/cancelon.png);"));
        pBtnDone = new QPushButton(mortgageSelect);
        pBtnDone->setObjectName(QStringLiteral("pBtnDone"));
        pBtnDone->setGeometry(QRect(1290, 850, 300, 150));
        QFont font3;
        font3.setPointSize(22);
        pBtnDone->setFont(font3);
        pBtnDone->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/finishon.png);"));

        retranslateUi(mortgageSelect);

        QMetaObject::connectSlotsByName(mortgageSelect);
    } // setupUi

    void retranslateUi(BaseDialog *mortgageSelect)
    {
        mortgageSelect->setWindowTitle(QApplication::translate("mortgageSelect", "mortgageSelect", 0));
        label->setText(QApplication::translate("mortgageSelect", "\346\262\241\346\234\211\346\211\276\345\210\260\344\275\240\346\212\265\346\212\274\344\277\241\346\201\257\357\274\214\350\257\267\347\241\256\350\256\244\345\220\216\347\273\247\347\273\255\357\274\201", 0));
        pBtnGohome->setText(QApplication::translate("mortgageSelect", "\344\270\273\351\241\265", 0));
        pBtnHomepage->setText(QString());
        pBtnDone->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class mortgageSelect: public Ui_mortgageSelect {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MORTGAGESELECT_H
