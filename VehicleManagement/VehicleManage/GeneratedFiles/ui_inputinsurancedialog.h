/********************************************************************************
** Form generated from reading UI file 'inputinsurancedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUTINSURANCEDIALOG_H
#define UI_INPUTINSURANCEDIALOG_H

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

class Ui_InputInsuranceDialog
{
public:
    QPushButton *pBtnDone;
    QLineEdit *lineEditInsurance;
    QLabel *labelInsurance;
    QPushButton *pBtnHomepage;

    void setupUi(QDialog *InputInsuranceDialog)
    {
        if (InputInsuranceDialog->objectName().isEmpty())
            InputInsuranceDialog->setObjectName(QStringLiteral("InputInsuranceDialog"));
        InputInsuranceDialog->resize(1920, 1080);
        pBtnDone = new QPushButton(InputInsuranceDialog);
        pBtnDone->setObjectName(QStringLiteral("pBtnDone"));
        pBtnDone->setGeometry(QRect(1290, 850, 300, 150));
        QFont font;
        font.setPointSize(22);
        pBtnDone->setFont(font);
        pBtnDone->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/nextoff.png);"));
        lineEditInsurance = new QLineEdit(InputInsuranceDialog);
        lineEditInsurance->setObjectName(QStringLiteral("lineEditInsurance"));
        lineEditInsurance->setGeometry(QRect(690, 460, 540, 86));
        QFont font1;
        font1.setFamily(QStringLiteral("Times New Roman"));
        font1.setPointSize(36);
        lineEditInsurance->setFont(font1);
        lineEditInsurance->setStyleSheet(QStringLiteral("border:2px groove gray;border-radius:10px;padding:2px 4px"));
        labelInsurance = new QLabel(InputInsuranceDialog);
        labelInsurance->setObjectName(QStringLiteral("labelInsurance"));
        labelInsurance->setGeometry(QRect(490, 480, 141, 60));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font2.setPointSize(36);
        labelInsurance->setFont(font2);
        pBtnHomepage = new QPushButton(InputInsuranceDialog);
        pBtnHomepage->setObjectName(QStringLiteral("pBtnHomepage"));
        pBtnHomepage->setGeometry(QRect(330, 850, 300, 150));
        QFont font3;
        font3.setFamily(QStringLiteral("Algerian"));
        font3.setPointSize(22);
        pBtnHomepage->setFont(font3);
        pBtnHomepage->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/cancelon.png);"));

        retranslateUi(InputInsuranceDialog);

        QMetaObject::connectSlotsByName(InputInsuranceDialog);
    } // setupUi

    void retranslateUi(QDialog *InputInsuranceDialog)
    {
        InputInsuranceDialog->setWindowTitle(QApplication::translate("InputInsuranceDialog", "InputInsuranceDialog", 0));
        pBtnDone->setText(QString());
        labelInsurance->setText(QApplication::translate("InputInsuranceDialog", "\347\250\216\345\217\267\357\274\232", 0));
        pBtnHomepage->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class InputInsuranceDialog: public Ui_InputInsuranceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUTINSURANCEDIALOG_H
