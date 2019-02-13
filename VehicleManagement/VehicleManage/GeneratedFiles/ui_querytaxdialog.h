/********************************************************************************
** Form generated from reading UI file 'querytaxdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUERYTAXDIALOG_H
#define UI_QUERYTAXDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QueryTaxDialog
{
public:
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QTextBrowser *taxInfo;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pBtnHomepage;
    QSpacerItem *horizontalSpacer;
    QPushButton *pBtnDone;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelLoading;

    void setupUi(QDialog *QueryTaxDialog)
    {
        if (QueryTaxDialog->objectName().isEmpty())
            QueryTaxDialog->setObjectName(QStringLiteral("QueryTaxDialog"));
        QueryTaxDialog->resize(1920, 1080);
        pushButton = new QPushButton(QueryTaxDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(670, 270, 471, 150));
        QFont font;
        font.setFamily(QStringLiteral("Times New Roman"));
        font.setPointSize(18);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QStringLiteral("border:2px groove gray;border-radius:10px;padding:2px 4px;"));
        layoutWidget = new QWidget(QueryTaxDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(-18, 270, 1932, 736));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        taxInfo = new QTextBrowser(layoutWidget);
        taxInfo->setObjectName(QStringLiteral("taxInfo"));
        taxInfo->setMinimumSize(QSize(700, 410));

        horizontalLayout_2->addWidget(taxInfo);

        horizontalSpacer_5 = new QSpacerItem(178, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 158, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(338, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        pBtnHomepage = new QPushButton(layoutWidget);
        pBtnHomepage->setObjectName(QStringLiteral("pBtnHomepage"));
        pBtnHomepage->setMinimumSize(QSize(300, 150));
        QFont font1;
        font1.setFamily(QStringLiteral("Algerian"));
        font1.setPointSize(22);
        pBtnHomepage->setFont(font1);
        pBtnHomepage->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/cancelon.png);"));

        horizontalLayout->addWidget(pBtnHomepage);

        horizontalSpacer = new QSpacerItem(658, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pBtnDone = new QPushButton(layoutWidget);
        pBtnDone->setObjectName(QStringLiteral("pBtnDone"));
        pBtnDone->setMinimumSize(QSize(300, 150));
        QFont font2;
        font2.setPointSize(22);
        pBtnDone->setFont(font2);
        pBtnDone->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/finishon.png);"));

        horizontalLayout->addWidget(pBtnDone);

        horizontalSpacer_2 = new QSpacerItem(308, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        labelLoading = new QLabel(QueryTaxDialog);
        labelLoading->setObjectName(QStringLiteral("labelLoading"));
        labelLoading->setGeometry(QRect(900, 400, 151, 141));

        retranslateUi(QueryTaxDialog);

        QMetaObject::connectSlotsByName(QueryTaxDialog);
    } // setupUi

    void retranslateUi(QDialog *QueryTaxDialog)
    {
        QueryTaxDialog->setWindowTitle(QApplication::translate("QueryTaxDialog", "QueryTaxDialog", 0));
        pushButton->setText(QApplication::translate("QueryTaxDialog", "\346\262\241\346\234\211\346\211\276\345\210\260\347\250\216\345\212\241\346\225\260\346\215\256", 0));
        pBtnHomepage->setText(QString());
        pBtnDone->setText(QString());
        labelLoading->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QueryTaxDialog: public Ui_QueryTaxDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUERYTAXDIALOG_H
