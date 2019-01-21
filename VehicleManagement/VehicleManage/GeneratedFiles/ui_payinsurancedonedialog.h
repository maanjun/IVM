/********************************************************************************
** Form generated from reading UI file 'payinsurancedonedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAYINSURANCEDONEDIALOG_H
#define UI_PAYINSURANCEDONEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_PayinsuranceDoneDialog
{
public:
    QPushButton *pBtnDone;
    QPushButton *pBtnHomepage;
    QLabel *label;

    void setupUi(QDialog *PayinsuranceDoneDialog)
    {
        if (PayinsuranceDoneDialog->objectName().isEmpty())
            PayinsuranceDoneDialog->setObjectName(QStringLiteral("PayinsuranceDoneDialog"));
        PayinsuranceDoneDialog->resize(1920, 1080);
        PayinsuranceDoneDialog->setStyleSheet(QStringLiteral(""));
        pBtnDone = new QPushButton(PayinsuranceDoneDialog);
        pBtnDone->setObjectName(QStringLiteral("pBtnDone"));
        pBtnDone->setGeometry(QRect(1290, 850, 300, 150));
        QFont font;
        font.setPointSize(22);
        pBtnDone->setFont(font);
        pBtnDone->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/finishon.png);"));
        pBtnHomepage = new QPushButton(PayinsuranceDoneDialog);
        pBtnHomepage->setObjectName(QStringLiteral("pBtnHomepage"));
        pBtnHomepage->setGeometry(QRect(330, 850, 300, 150));
        QFont font1;
        font1.setFamily(QStringLiteral("Algerian"));
        font1.setPointSize(22);
        pBtnHomepage->setFont(font1);
        pBtnHomepage->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/cancelon.png);"));
        label = new QLabel(PayinsuranceDoneDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(450, 400, 1241, 171));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font2.setPointSize(24);
        label->setFont(font2);

        retranslateUi(PayinsuranceDoneDialog);

        QMetaObject::connectSlotsByName(PayinsuranceDoneDialog);
    } // setupUi

    void retranslateUi(QDialog *PayinsuranceDoneDialog)
    {
        PayinsuranceDoneDialog->setWindowTitle(QApplication::translate("PayinsuranceDoneDialog", "PayinsuranceDoneDialog", 0));
        pBtnDone->setText(QString());
        pBtnHomepage->setText(QString());
        label->setText(QApplication::translate("PayinsuranceDoneDialog", "\346\202\250\345\267\262\345\256\214\346\210\220\347\224\263\346\212\245\357\274\214\346\265\201\346\260\264\345\217\267\344\270\272\357\274\232456789654567896\357\274\214\350\257\267\347\255\211\345\276\205\345\220\216\347\273\255\345\244\204\347\220\206...", 0));
    } // retranslateUi

};

namespace Ui {
    class PayinsuranceDoneDialog: public Ui_PayinsuranceDoneDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAYINSURANCEDONEDIALOG_H
