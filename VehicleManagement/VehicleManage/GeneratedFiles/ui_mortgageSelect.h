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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "basedialog.h"

QT_BEGIN_NAMESPACE

class Ui_mortgageSelect
{
public:
    QLabel *labelLoading;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QTextBrowser *taxInfo;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pBtnHomepage;
    QSpacerItem *horizontalSpacer;
    QPushButton *pBtnDone;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(BaseDialog *mortgageSelect)
    {
        if (mortgageSelect->objectName().isEmpty())
            mortgageSelect->setObjectName(QStringLiteral("mortgageSelect"));
        mortgageSelect->resize(1900, 1080);
        labelLoading = new QLabel(mortgageSelect);
        labelLoading->setObjectName(QStringLiteral("labelLoading"));
        labelLoading->setGeometry(QRect(830, 400, 151, 141));
        widget = new QWidget(mortgageSelect);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(122, 250, 1652, 766));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        taxInfo = new QTextBrowser(widget);
        taxInfo->setObjectName(QStringLiteral("taxInfo"));
        taxInfo->setMinimumSize(QSize(700, 410));

        horizontalLayout_2->addWidget(taxInfo);

        horizontalSpacer_5 = new QSpacerItem(128, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 188, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(208, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pBtnHomepage = new QPushButton(widget);
        pBtnHomepage->setObjectName(QStringLiteral("pBtnHomepage"));
        pBtnHomepage->setMinimumSize(QSize(300, 150));
        QFont font;
        font.setFamily(QStringLiteral("Algerian"));
        font.setPointSize(22);
        pBtnHomepage->setFont(font);
        pBtnHomepage->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/cancelon.png);"));

        horizontalLayout->addWidget(pBtnHomepage);

        horizontalSpacer = new QSpacerItem(648, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pBtnDone = new QPushButton(widget);
        pBtnDone->setObjectName(QStringLiteral("pBtnDone"));
        pBtnDone->setMinimumSize(QSize(300, 150));
        QFont font1;
        font1.setPointSize(22);
        pBtnDone->setFont(font1);
        pBtnDone->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/finishon.png);"));

        horizontalLayout->addWidget(pBtnDone);

        horizontalSpacer_3 = new QSpacerItem(168, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(mortgageSelect);

        QMetaObject::connectSlotsByName(mortgageSelect);
    } // setupUi

    void retranslateUi(BaseDialog *mortgageSelect)
    {
        mortgageSelect->setWindowTitle(QApplication::translate("mortgageSelect", "mortgageSelect", 0));
        labelLoading->setText(QString());
        pBtnHomepage->setText(QString());
        pBtnDone->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class mortgageSelect: public Ui_mortgageSelect {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MORTGAGESELECT_H
