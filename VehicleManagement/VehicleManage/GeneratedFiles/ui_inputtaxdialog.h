/********************************************************************************
** Form generated from reading UI file 'inputtaxdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUTTAXDIALOG_H
#define UI_INPUTTAXDIALOG_H

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

class Ui_InputTaxDialog
{
public:
    QPushButton *pBtnDone;
    QLineEdit *lineEditTax;
    QLabel *labelTax;
    QPushButton *pBtnHomepage;

    void setupUi(QDialog *InputTaxDialog)
    {
        if (InputTaxDialog->objectName().isEmpty())
            InputTaxDialog->setObjectName(QStringLiteral("InputTaxDialog"));
        InputTaxDialog->resize(1920, 1080);
        pBtnDone = new QPushButton(InputTaxDialog);
        pBtnDone->setObjectName(QStringLiteral("pBtnDone"));
        pBtnDone->setGeometry(QRect(1290, 850, 300, 150));
        QFont font;
        font.setPointSize(22);
        pBtnDone->setFont(font);
        pBtnDone->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/nexton.png);"));
        lineEditTax = new QLineEdit(InputTaxDialog);
        lineEditTax->setObjectName(QStringLiteral("lineEditTax"));
        lineEditTax->setGeometry(QRect(690, 460, 540, 86));
        QFont font1;
        font1.setFamily(QStringLiteral("Times New Roman"));
        font1.setPointSize(36);
        lineEditTax->setFont(font1);
        lineEditTax->setStyleSheet(QStringLiteral("border:2px groove gray;border-radius:10px;padding:2px 4px"));
        labelTax = new QLabel(InputTaxDialog);
        labelTax->setObjectName(QStringLiteral("labelTax"));
        labelTax->setGeometry(QRect(490, 480, 141, 60));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font2.setPointSize(36);
        labelTax->setFont(font2);
        pBtnHomepage = new QPushButton(InputTaxDialog);
        pBtnHomepage->setObjectName(QStringLiteral("pBtnHomepage"));
        pBtnHomepage->setGeometry(QRect(330, 850, 300, 150));
        QFont font3;
        font3.setFamily(QStringLiteral("Algerian"));
        font3.setPointSize(22);
        pBtnHomepage->setFont(font3);
        pBtnHomepage->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/cancelon.png);"));

        retranslateUi(InputTaxDialog);

        QMetaObject::connectSlotsByName(InputTaxDialog);
    } // setupUi

    void retranslateUi(QDialog *InputTaxDialog)
    {
        InputTaxDialog->setWindowTitle(QApplication::translate("InputTaxDialog", "InputTaxDialog", 0));
        pBtnDone->setText(QString());
        labelTax->setText(QApplication::translate("InputTaxDialog", "\347\250\216\345\217\267\357\274\232", 0));
        pBtnHomepage->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class InputTaxDialog: public Ui_InputTaxDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUTTAXDIALOG_H
