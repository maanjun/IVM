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
        pBtnHomepage = new QPushButton(mortgageSelect);
        pBtnHomepage->setObjectName(QStringLiteral("pBtnHomepage"));
        pBtnHomepage->setGeometry(QRect(330, 850, 300, 150));
        QFont font1;
        font1.setFamily(QStringLiteral("Algerian"));
        font1.setPointSize(22);
        pBtnHomepage->setFont(font1);
        pBtnHomepage->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/cancelon.png);"));
        pBtnDone = new QPushButton(mortgageSelect);
        pBtnDone->setObjectName(QStringLiteral("pBtnDone"));
        pBtnDone->setGeometry(QRect(1290, 850, 300, 150));
        QFont font2;
        font2.setPointSize(22);
        pBtnDone->setFont(font2);
        pBtnDone->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/finishon.png);"));

        retranslateUi(mortgageSelect);

        QMetaObject::connectSlotsByName(mortgageSelect);
    } // setupUi

    void retranslateUi(BaseDialog *mortgageSelect)
    {
        mortgageSelect->setWindowTitle(QApplication::translate("mortgageSelect", "mortgageSelect", 0));
        label->setText(QApplication::translate("mortgageSelect", "\346\262\241\346\234\211\346\211\276\345\210\260\344\275\240\346\212\265\346\212\274\344\277\241\346\201\257\357\274\214\350\257\267\347\241\256\350\256\244\345\220\216\347\273\247\347\273\255\357\274\201", 0));
        pBtnHomepage->setText(QString());
        pBtnDone->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class mortgageSelect: public Ui_mortgageSelect {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MORTGAGESELECT_H
