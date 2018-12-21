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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CheckReceiptDialog
{
public:
    QPushButton *pBtnHomepage;
    QPushButton *pBtnNext;
    QLabel *labelReceipt;
    QLabel *labelTax;
    QLineEdit *lineEditReceipt;
    QLineEdit *lineEditTax;
    QLabel *labelTitle;

    void setupUi(QDialog *CheckReceiptDialog)
    {
        if (CheckReceiptDialog->objectName().isEmpty())
            CheckReceiptDialog->setObjectName(QStringLiteral("CheckReceiptDialog"));
        CheckReceiptDialog->resize(1024, 768);
        CheckReceiptDialog->setStyleSheet(QStringLiteral("#CheckReceiptDialog{border-image: url(:/Resources/Images/background.png);}"));
        pBtnHomepage = new QPushButton(CheckReceiptDialog);
        pBtnHomepage->setObjectName(QStringLiteral("pBtnHomepage"));
        pBtnHomepage->setGeometry(QRect(190, 570, 200, 100));
        QFont font;
        font.setFamily(QStringLiteral("Algerian"));
        font.setPointSize(22);
        pBtnHomepage->setFont(font);
        pBtnHomepage->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/homepageon.png);"));
        pBtnNext = new QPushButton(CheckReceiptDialog);
        pBtnNext->setObjectName(QStringLiteral("pBtnNext"));
        pBtnNext->setGeometry(QRect(590, 570, 200, 100));
        QFont font1;
        font1.setPointSize(22);
        pBtnNext->setFont(font1);
        pBtnNext->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/nextoff.png);"));
        labelReceipt = new QLabel(CheckReceiptDialog);
        labelReceipt->setObjectName(QStringLiteral("labelReceipt"));
        labelReceipt->setGeometry(QRect(70, 290, 150, 60));
        labelReceipt->setFont(font1);
        labelTax = new QLabel(CheckReceiptDialog);
        labelTax->setObjectName(QStringLiteral("labelTax"));
        labelTax->setGeometry(QRect(70, 420, 150, 60));
        labelTax->setFont(font1);
        lineEditReceipt = new QLineEdit(CheckReceiptDialog);
        lineEditReceipt->setObjectName(QStringLiteral("lineEditReceipt"));
        lineEditReceipt->setGeometry(QRect(230, 290, 360, 60));
        QFont font2;
        font2.setFamily(QStringLiteral("Times New Roman"));
        font2.setPointSize(18);
        lineEditReceipt->setFont(font2);
        lineEditReceipt->setStyleSheet(QStringLiteral("border:2px groove gray;border-radius:10px;padding:2px 4px"));
        lineEditTax = new QLineEdit(CheckReceiptDialog);
        lineEditTax->setObjectName(QStringLiteral("lineEditTax"));
        lineEditTax->setGeometry(QRect(230, 420, 360, 60));
        lineEditTax->setFont(font2);
        lineEditTax->setStyleSheet(QStringLiteral("border:2px groove gray;border-radius:10px;padding:2px 4px"));
        labelTitle = new QLabel(CheckReceiptDialog);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));
        labelTitle->setGeometry(QRect(250, 60, 481, 141));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font3.setPointSize(42);
        labelTitle->setFont(font3);
        labelTitle->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0.3125, y1:0, x2:0.784, y2:1, stop:0 rgba(211, 217, 255, 255), stop:1 rgba(255, 255, 255, 255));"));

        retranslateUi(CheckReceiptDialog);

        QMetaObject::connectSlotsByName(CheckReceiptDialog);
    } // setupUi

    void retranslateUi(QDialog *CheckReceiptDialog)
    {
        CheckReceiptDialog->setWindowTitle(QApplication::translate("CheckReceiptDialog", "CheckReceiptDialog", 0));
        pBtnHomepage->setText(QString());
        pBtnNext->setText(QString());
        labelReceipt->setText(QApplication::translate("CheckReceiptDialog", "\345\217\221\347\245\250\345\217\267\357\274\232", 0));
        labelTax->setText(QApplication::translate("CheckReceiptDialog", "\350\275\246\350\210\271\347\250\216\345\217\267\357\274\232", 0));
        labelTitle->setText(QApplication::translate("CheckReceiptDialog", "\350\277\234\347\250\213\346\231\272\350\203\275\350\275\246\346\243\200\347\263\273\347\273\237", 0));
    } // retranslateUi

};

namespace Ui {
    class CheckReceiptDialog: public Ui_CheckReceiptDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKRECEIPTDIALOG_H
