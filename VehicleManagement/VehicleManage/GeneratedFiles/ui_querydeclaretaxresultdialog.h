/********************************************************************************
** Form generated from reading UI file 'querydeclaretaxresultdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUERYDECLARETAXRESULTDIALOG_H
#define UI_QUERYDECLARETAXRESULTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_QueryDeclareTaxResultDialog
{
public:
    QPushButton *pBtnHomepage;
    QPushButton *pushButton;
    QPushButton *pBtnDone;

    void setupUi(QDialog *QueryDeclareTaxResultDialog)
    {
        if (QueryDeclareTaxResultDialog->objectName().isEmpty())
            QueryDeclareTaxResultDialog->setObjectName(QStringLiteral("QueryDeclareTaxResultDialog"));
        QueryDeclareTaxResultDialog->resize(1920, 1080);
        pBtnHomepage = new QPushButton(QueryDeclareTaxResultDialog);
        pBtnHomepage->setObjectName(QStringLiteral("pBtnHomepage"));
        pBtnHomepage->setGeometry(QRect(330, 850, 300, 150));
        QFont font;
        font.setFamily(QStringLiteral("Algerian"));
        font.setPointSize(22);
        pBtnHomepage->setFont(font);
        pBtnHomepage->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/cancelon.png);"));
        pushButton = new QPushButton(QueryDeclareTaxResultDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(720, 380, 471, 150));
        QFont font1;
        font1.setFamily(QStringLiteral("Times New Roman"));
        font1.setPointSize(18);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QStringLiteral("border:2px groove gray;border-radius:10px;padding:2px 4px;"));
        pBtnDone = new QPushButton(QueryDeclareTaxResultDialog);
        pBtnDone->setObjectName(QStringLiteral("pBtnDone"));
        pBtnDone->setGeometry(QRect(1290, 850, 300, 150));
        QFont font2;
        font2.setPointSize(22);
        pBtnDone->setFont(font2);
        pBtnDone->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/finishon.png);"));

        retranslateUi(QueryDeclareTaxResultDialog);

        QMetaObject::connectSlotsByName(QueryDeclareTaxResultDialog);
    } // setupUi

    void retranslateUi(QDialog *QueryDeclareTaxResultDialog)
    {
        QueryDeclareTaxResultDialog->setWindowTitle(QApplication::translate("QueryDeclareTaxResultDialog", "QueryDeclareTaxResultDialog", 0));
        pBtnHomepage->setText(QString());
        pushButton->setText(QApplication::translate("QueryDeclareTaxResultDialog", "\347\224\263\346\212\245\345\256\214\346\210\220\357\274\201", 0));
        pBtnDone->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QueryDeclareTaxResultDialog: public Ui_QueryDeclareTaxResultDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUERYDECLARETAXRESULTDIALOG_H
