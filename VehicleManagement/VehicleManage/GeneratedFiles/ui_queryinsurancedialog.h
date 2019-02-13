/********************************************************************************
** Form generated from reading UI file 'queryinsurancedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUERYINSURANCEDIALOG_H
#define UI_QUERYINSURANCEDIALOG_H

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

class Ui_QueryInsuranceDialog
{
public:
    QLabel *labelLoading;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QTextBrowser *taxInfo;
    QSpacerItem *horizontalSpacer_2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pBtnHomepage;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pBtnDone;
    QSpacerItem *horizontalSpacer_5;

    void setupUi(QDialog *QueryInsuranceDialog)
    {
        if (QueryInsuranceDialog->objectName().isEmpty())
            QueryInsuranceDialog->setObjectName(QStringLiteral("QueryInsuranceDialog"));
        QueryInsuranceDialog->resize(1920, 1080);
        labelLoading = new QLabel(QueryInsuranceDialog);
        labelLoading->setObjectName(QStringLiteral("labelLoading"));
        labelLoading->setGeometry(QRect(850, 400, 151, 141));
        layoutWidget = new QWidget(QueryInsuranceDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(329, 300, 1331, 412));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(58, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        taxInfo = new QTextBrowser(layoutWidget);
        taxInfo->setObjectName(QStringLiteral("taxInfo"));
        taxInfo->setMinimumSize(QSize(700, 410));

        horizontalLayout->addWidget(taxInfo);

        horizontalSpacer_2 = new QSpacerItem(378, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        layoutWidget1 = new QWidget(QueryInsuranceDialog);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(250, 722, 1276, 268));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 108, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        pBtnHomepage = new QPushButton(layoutWidget1);
        pBtnHomepage->setObjectName(QStringLiteral("pBtnHomepage"));
        pBtnHomepage->setMinimumSize(QSize(300, 150));
        QFont font;
        font.setFamily(QStringLiteral("Algerian"));
        font.setPointSize(22);
        pBtnHomepage->setFont(font);
        pBtnHomepage->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/cancelon.png);"));

        horizontalLayout_2->addWidget(pBtnHomepage);

        horizontalSpacer_3 = new QSpacerItem(568, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        pBtnDone = new QPushButton(layoutWidget1);
        pBtnDone->setObjectName(QStringLiteral("pBtnDone"));
        pBtnDone->setMinimumSize(QSize(300, 150));
        QFont font1;
        font1.setPointSize(22);
        pBtnDone->setFont(font1);
        pBtnDone->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/finishon.png);"));

        horizontalLayout_2->addWidget(pBtnDone);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(QueryInsuranceDialog);

        QMetaObject::connectSlotsByName(QueryInsuranceDialog);
    } // setupUi

    void retranslateUi(QDialog *QueryInsuranceDialog)
    {
        QueryInsuranceDialog->setWindowTitle(QApplication::translate("QueryInsuranceDialog", "QueryInsuranceDialog", 0));
        labelLoading->setText(QString());
        pBtnHomepage->setText(QString());
        pBtnDone->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QueryInsuranceDialog: public Ui_QueryInsuranceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUERYINSURANCEDIALOG_H
