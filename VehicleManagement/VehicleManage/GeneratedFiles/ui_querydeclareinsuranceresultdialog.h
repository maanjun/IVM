/********************************************************************************
** Form generated from reading UI file 'querydeclareinsuranceresultdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUERYDECLAREINSURANCERESULTDIALOG_H
#define UI_QUERYDECLAREINSURANCERESULTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_QueryDeclareInsuranceResultDialog
{
public:
    QPushButton *pBtnHomepage;
    QPushButton *pBtnDone;
    QPushButton *pushButton;

    void setupUi(QDialog *QueryDeclareInsuranceResultDialog)
    {
        if (QueryDeclareInsuranceResultDialog->objectName().isEmpty())
            QueryDeclareInsuranceResultDialog->setObjectName(QStringLiteral("QueryDeclareInsuranceResultDialog"));
        QueryDeclareInsuranceResultDialog->resize(1920, 1101);
        pBtnHomepage = new QPushButton(QueryDeclareInsuranceResultDialog);
        pBtnHomepage->setObjectName(QStringLiteral("pBtnHomepage"));
        pBtnHomepage->setGeometry(QRect(330, 850, 300, 150));
        QFont font;
        font.setFamily(QStringLiteral("Algerian"));
        font.setPointSize(22);
        pBtnHomepage->setFont(font);
        pBtnHomepage->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/cancelon.png);"));
        pBtnDone = new QPushButton(QueryDeclareInsuranceResultDialog);
        pBtnDone->setObjectName(QStringLiteral("pBtnDone"));
        pBtnDone->setGeometry(QRect(1290, 850, 300, 150));
        QFont font1;
        font1.setPointSize(22);
        pBtnDone->setFont(font1);
        pBtnDone->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/finishon.png);"));
        pushButton = new QPushButton(QueryDeclareInsuranceResultDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(720, 380, 471, 150));
        QFont font2;
        font2.setFamily(QStringLiteral("Times New Roman"));
        font2.setPointSize(18);
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QStringLiteral("border:2px groove gray;border-radius:10px;padding:2px 4px;"));

        retranslateUi(QueryDeclareInsuranceResultDialog);

        QMetaObject::connectSlotsByName(QueryDeclareInsuranceResultDialog);
    } // setupUi

    void retranslateUi(QDialog *QueryDeclareInsuranceResultDialog)
    {
        QueryDeclareInsuranceResultDialog->setWindowTitle(QApplication::translate("QueryDeclareInsuranceResultDialog", "QueryDeclareInsuranceResultDialog", 0));
        pBtnHomepage->setText(QString());
        pBtnDone->setText(QString());
        pushButton->setText(QApplication::translate("QueryDeclareInsuranceResultDialog", "\347\224\263\346\212\245\345\256\214\346\210\220\357\274\201", 0));
    } // retranslateUi

};

namespace Ui {
    class QueryDeclareInsuranceResultDialog: public Ui_QueryDeclareInsuranceResultDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUERYDECLAREINSURANCERESULTDIALOG_H
