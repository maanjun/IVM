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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_QueryInsuranceDialog
{
public:
    QPushButton *pushButton;
    QPushButton *pBtnDone;
    QPushButton *pBtnHomepage;

    void setupUi(QDialog *QueryInsuranceDialog)
    {
        if (QueryInsuranceDialog->objectName().isEmpty())
            QueryInsuranceDialog->setObjectName(QStringLiteral("QueryInsuranceDialog"));
        QueryInsuranceDialog->resize(1920, 1080);
        pushButton = new QPushButton(QueryInsuranceDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(660, 220, 471, 150));
        QFont font;
        font.setFamily(QStringLiteral("Times New Roman"));
        font.setPointSize(18);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QStringLiteral("border:2px groove gray;border-radius:10px;padding:2px 4px;"));
        pBtnDone = new QPushButton(QueryInsuranceDialog);
        pBtnDone->setObjectName(QStringLiteral("pBtnDone"));
        pBtnDone->setGeometry(QRect(1290, 850, 300, 150));
        QFont font1;
        font1.setPointSize(22);
        pBtnDone->setFont(font1);
        pBtnDone->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/finishon.png);"));
        pBtnHomepage = new QPushButton(QueryInsuranceDialog);
        pBtnHomepage->setObjectName(QStringLiteral("pBtnHomepage"));
        pBtnHomepage->setGeometry(QRect(330, 850, 300, 150));
        QFont font2;
        font2.setFamily(QStringLiteral("Algerian"));
        font2.setPointSize(22);
        pBtnHomepage->setFont(font2);
        pBtnHomepage->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/cancelon.png);"));

        retranslateUi(QueryInsuranceDialog);

        QMetaObject::connectSlotsByName(QueryInsuranceDialog);
    } // setupUi

    void retranslateUi(QDialog *QueryInsuranceDialog)
    {
        QueryInsuranceDialog->setWindowTitle(QApplication::translate("QueryInsuranceDialog", "QueryInsuranceDialog", 0));
        pushButton->setText(QApplication::translate("QueryInsuranceDialog", "\346\262\241\346\234\211\346\211\276\345\210\260\344\277\235\351\231\251\346\225\260\346\215\256", 0));
        pBtnDone->setText(QString());
        pBtnHomepage->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QueryInsuranceDialog: public Ui_QueryInsuranceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUERYINSURANCEDIALOG_H
