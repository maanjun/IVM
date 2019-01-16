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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_QueryTaxDialog
{
public:
    QPushButton *pushButton;
    QPushButton *pBtnDone;
    QPushButton *pBtnHomepage;

    void setupUi(QDialog *QueryTaxDialog)
    {
        if (QueryTaxDialog->objectName().isEmpty())
            QueryTaxDialog->setObjectName(QStringLiteral("QueryTaxDialog"));
        QueryTaxDialog->resize(1920, 1080);
        pushButton = new QPushButton(QueryTaxDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(660, 220, 471, 150));
        QFont font;
        font.setFamily(QStringLiteral("Times New Roman"));
        font.setPointSize(18);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QStringLiteral("border:2px groove gray;border-radius:10px;padding:2px 4px;"));
        pBtnDone = new QPushButton(QueryTaxDialog);
        pBtnDone->setObjectName(QStringLiteral("pBtnDone"));
        pBtnDone->setGeometry(QRect(1290, 850, 300, 150));
        QFont font1;
        font1.setPointSize(22);
        pBtnDone->setFont(font1);
        pBtnDone->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/finishon.png);"));
        pBtnHomepage = new QPushButton(QueryTaxDialog);
        pBtnHomepage->setObjectName(QStringLiteral("pBtnHomepage"));
        pBtnHomepage->setGeometry(QRect(330, 850, 300, 150));
        QFont font2;
        font2.setFamily(QStringLiteral("Algerian"));
        font2.setPointSize(22);
        pBtnHomepage->setFont(font2);
        pBtnHomepage->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/cancelon.png);"));

        retranslateUi(QueryTaxDialog);

        QMetaObject::connectSlotsByName(QueryTaxDialog);
    } // setupUi

    void retranslateUi(QDialog *QueryTaxDialog)
    {
        QueryTaxDialog->setWindowTitle(QApplication::translate("QueryTaxDialog", "QueryTaxDialog", 0));
        pushButton->setText(QApplication::translate("QueryTaxDialog", "\346\262\241\346\234\211\346\211\276\345\210\260\347\250\216\345\212\241\346\225\260\346\215\256", 0));
        pBtnDone->setText(QString());
        pBtnHomepage->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QueryTaxDialog: public Ui_QueryTaxDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUERYTAXDIALOG_H
