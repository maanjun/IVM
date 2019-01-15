/********************************************************************************
** Form generated from reading UI file 'paytaxesdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAYTAXESDIALOG_H
#define UI_PAYTAXESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_PaytaxesDialog
{
public:
    QPushButton *pBtnPaytexesQuery;
    QPushButton *pBtnDeclare;
    QPushButton *pBtnPaytaxes;

    void setupUi(QDialog *PaytaxesDialog)
    {
        if (PaytaxesDialog->objectName().isEmpty())
            PaytaxesDialog->setObjectName(QStringLiteral("PaytaxesDialog"));
        PaytaxesDialog->resize(1920, 1080);
        QFont font;
        font.setFamily(QStringLiteral("Times New Roman"));
        font.setPointSize(18);
        PaytaxesDialog->setFont(font);
        pBtnPaytexesQuery = new QPushButton(PaytaxesDialog);
        pBtnPaytexesQuery->setObjectName(QStringLiteral("pBtnPaytexesQuery"));
        pBtnPaytexesQuery->setGeometry(QRect(330, 400, 241, 81));
        QFont font1;
        font1.setFamily(QStringLiteral("Times New Roman"));
        font1.setPointSize(18);
        font1.setBold(false);
        font1.setWeight(50);
        pBtnPaytexesQuery->setFont(font1);
        pBtnPaytexesQuery->setStyleSheet(QStringLiteral("border:2px groove gray;border-radius:10px;padding:2px 4px;"));
        pBtnDeclare = new QPushButton(PaytaxesDialog);
        pBtnDeclare->setObjectName(QStringLiteral("pBtnDeclare"));
        pBtnDeclare->setGeometry(QRect(800, 400, 241, 81));
        QFont font2;
        font2.setFamily(QStringLiteral("Algerian"));
        font2.setPointSize(18);
        pBtnDeclare->setFont(font2);
        pBtnDeclare->setStyleSheet(QStringLiteral("border:2px groove gray;border-radius:10px;padding:2px 4px;"));
        pBtnPaytaxes = new QPushButton(PaytaxesDialog);
        pBtnPaytaxes->setObjectName(QStringLiteral("pBtnPaytaxes"));
        pBtnPaytaxes->setGeometry(QRect(1280, 400, 241, 81));
        pBtnPaytaxes->setFont(font);
        pBtnPaytaxes->setStyleSheet(QStringLiteral("border:2px groove gray;border-radius:10px;padding:2px 4px;"));

        retranslateUi(PaytaxesDialog);

        QMetaObject::connectSlotsByName(PaytaxesDialog);
    } // setupUi

    void retranslateUi(QDialog *PaytaxesDialog)
    {
        PaytaxesDialog->setWindowTitle(QApplication::translate("PaytaxesDialog", "PaytaxesDialog", 0));
        pBtnPaytexesQuery->setText(QApplication::translate("PaytaxesDialog", "\345\256\214\347\250\216\346\237\245\350\257\242", 0));
        pBtnDeclare->setText(QApplication::translate("PaytaxesDialog", "\347\224\263\346\212\245", 0));
        pBtnPaytaxes->setText(QApplication::translate("PaytaxesDialog", "\347\274\264\347\250\216", 0));
    } // retranslateUi

};

namespace Ui {
    class PaytaxesDialog: public Ui_PaytaxesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAYTAXESDIALOG_H
