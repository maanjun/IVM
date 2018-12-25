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
    QPushButton *pBtnNext;
    QPushButton *pBtnHomepage;
    QPushButton *pushButton_3;
    QLineEdit *lineEditReceipt;
    QLabel *label;
    QLabel *label_2;
    QLabel *labelReceipt;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QLabel *labelTax;
    QLineEdit *lineEditTax;

    void setupUi(QDialog *CheckReceiptDialog)
    {
        if (CheckReceiptDialog->objectName().isEmpty())
            CheckReceiptDialog->setObjectName(QStringLiteral("CheckReceiptDialog"));
        CheckReceiptDialog->resize(1024, 768);
        pBtnNext = new QPushButton(CheckReceiptDialog);
        pBtnNext->setObjectName(QStringLiteral("pBtnNext"));
        pBtnNext->setGeometry(QRect(590, 612, 200, 100));
        QFont font;
        font.setPointSize(22);
        pBtnNext->setFont(font);
        pBtnNext->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/nextoff.png);"));
        pBtnHomepage = new QPushButton(CheckReceiptDialog);
        pBtnHomepage->setObjectName(QStringLiteral("pBtnHomepage"));
        pBtnHomepage->setGeometry(QRect(190, 612, 200, 100));
        QFont font1;
        font1.setFamily(QStringLiteral("Algerian"));
        font1.setPointSize(22);
        pBtnHomepage->setFont(font1);
        pBtnHomepage->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/homepageon.png);"));
        pushButton_3 = new QPushButton(CheckReceiptDialog);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(510, 230, 233, 50));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font2.setPointSize(20);
        pushButton_3->setFont(font2);
        pushButton_3->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(65, 147, 252);"));
        lineEditReceipt = new QLineEdit(CheckReceiptDialog);
        lineEditReceipt->setObjectName(QStringLiteral("lineEditReceipt"));
        lineEditReceipt->setGeometry(QRect(230, 340, 360, 60));
        QFont font3;
        font3.setFamily(QStringLiteral("Times New Roman"));
        font3.setPointSize(18);
        lineEditReceipt->setFont(font3);
        lineEditReceipt->setStyleSheet(QStringLiteral("border:2px groove gray;border-radius:10px;padding:2px 4px"));
        label = new QLabel(CheckReceiptDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(690, 300, 251, 221));
        label->setStyleSheet(QStringLiteral("border-image: url(:/Resources/Images/printguide.png);"));
        label_2 = new QLabel(CheckReceiptDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(690, 530, 261, 51));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font4.setPointSize(24);
        label_2->setFont(font4);
        labelReceipt = new QLabel(CheckReceiptDialog);
        labelReceipt->setObjectName(QStringLiteral("labelReceipt"));
        labelReceipt->setGeometry(QRect(70, 340, 150, 60));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font5.setPointSize(22);
        labelReceipt->setFont(font5);
        pushButton_2 = new QPushButton(CheckReceiptDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(275, 230, 233, 50));
        pushButton_2->setFont(font2);
        pushButton_2->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(166, 205, 251);"));
        pushButton = new QPushButton(CheckReceiptDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(40, 230, 233, 50));
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(166, 205, 251);"));
        pushButton_4 = new QPushButton(CheckReceiptDialog);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(745, 230, 229, 50));
        pushButton_4->setFont(font2);
        pushButton_4->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(166, 205, 251);"));
        labelTax = new QLabel(CheckReceiptDialog);
        labelTax->setObjectName(QStringLiteral("labelTax"));
        labelTax->setGeometry(QRect(70, 470, 150, 60));
        labelTax->setFont(font5);
        lineEditTax = new QLineEdit(CheckReceiptDialog);
        lineEditTax->setObjectName(QStringLiteral("lineEditTax"));
        lineEditTax->setGeometry(QRect(230, 470, 360, 60));
        lineEditTax->setFont(font3);
        lineEditTax->setStyleSheet(QStringLiteral("border:2px groove gray;border-radius:10px;padding:2px 4px"));

        retranslateUi(CheckReceiptDialog);

        QMetaObject::connectSlotsByName(CheckReceiptDialog);
    } // setupUi

    void retranslateUi(QDialog *CheckReceiptDialog)
    {
        CheckReceiptDialog->setWindowTitle(QApplication::translate("CheckReceiptDialog", "CheckReceiptDialog", 0));
        pBtnNext->setText(QString());
        pBtnHomepage->setText(QString());
        pushButton_3->setText(QApplication::translate("CheckReceiptDialog", "\350\276\223\345\205\245\347\250\216\350\264\271\345\217\267", 0));
        label->setText(QString());
        label_2->setText(QApplication::translate("CheckReceiptDialog", "\350\257\267\346\214\211\346\217\220\347\244\272\345\244\215\345\215\260\347\225\231\345\272\225", 0));
        labelReceipt->setText(QApplication::translate("CheckReceiptDialog", "\345\217\221\347\245\250\345\217\267\357\274\232", 0));
        pushButton_2->setText(QApplication::translate("CheckReceiptDialog", "\346\211\253\346\217\217\350\275\246\350\276\206\344\277\241\346\201\257", 0));
        pushButton->setText(QApplication::translate("CheckReceiptDialog", "\346\211\253\346\217\217\350\272\253\344\273\275\350\257\201", 0));
        pushButton_4->setText(QApplication::translate("CheckReceiptDialog", "\345\256\214\346\210\220", 0));
        labelTax->setText(QApplication::translate("CheckReceiptDialog", "\350\275\246\350\210\271\347\250\216\345\217\267\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class CheckReceiptDialog: public Ui_CheckReceiptDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKRECEIPTDIALOG_H
