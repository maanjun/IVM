/********************************************************************************
** Form generated from reading UI file 'checkreceiptdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECKRECEIPTDIALOG_H
#define UI_CHECKRECEIPTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CheckReceiptDialog
{
public:
    QPushButton *pBtnHomepage;
    QPushButton *pBtnNext;

    void setupUi(QDialog *CheckReceiptDialog)
    {
        if (CheckReceiptDialog->objectName().isEmpty())
            CheckReceiptDialog->setObjectName(QStringLiteral("CheckReceiptDialog"));
        CheckReceiptDialog->resize(1024, 768);
        pBtnHomepage = new QPushButton(CheckReceiptDialog);
        pBtnHomepage->setObjectName(QStringLiteral("pBtnHomepage"));
        pBtnHomepage->setGeometry(QRect(190, 570, 200, 100));
        QFont font;
        font.setFamily(QStringLiteral("Algerian"));
        font.setPointSize(22);
        pBtnHomepage->setFont(font);
        pBtnHomepage->setStyleSheet(QStringLiteral("border:2px groove gray;border-radius:10px;padding:2px 4px;"));
        pBtnNext = new QPushButton(CheckReceiptDialog);
        pBtnNext->setObjectName(QStringLiteral("pBtnNext"));
        pBtnNext->setGeometry(QRect(590, 570, 200, 100));
        QFont font1;
        font1.setPointSize(22);
        pBtnNext->setFont(font1);
        pBtnNext->setStyleSheet(QStringLiteral("border:2px groove gray;border-radius:10px;padding:2px 4px;"));

        retranslateUi(CheckReceiptDialog);

        QMetaObject::connectSlotsByName(CheckReceiptDialog);
    } // setupUi

    void retranslateUi(QDialog *CheckReceiptDialog)
    {
        CheckReceiptDialog->setWindowTitle(QApplication::translate("CheckReceiptDialog", "CheckReceiptDialog", 0));
        pBtnHomepage->setText(QString());
        pBtnNext->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CheckReceiptDialog: public Ui_CheckReceiptDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKRECEIPTDIALOG_H
