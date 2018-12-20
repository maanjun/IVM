/********************************************************************************
** Form generated from reading UI file 'inputdonedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUTDONEDIALOG_H
#define UI_INPUTDONEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_InputDoneDialog
{
public:
    QPushButton *pBtnHomepage;
    QPushButton *pBtnDone;

    void setupUi(QDialog *InputDoneDialog)
    {
        if (InputDoneDialog->objectName().isEmpty())
            InputDoneDialog->setObjectName(QStringLiteral("InputDoneDialog"));
        InputDoneDialog->resize(1024, 768);
        pBtnHomepage = new QPushButton(InputDoneDialog);
        pBtnHomepage->setObjectName(QStringLiteral("pBtnHomepage"));
        pBtnHomepage->setGeometry(QRect(190, 570, 200, 100));
        QFont font;
        font.setFamily(QStringLiteral("Algerian"));
        font.setPointSize(22);
        pBtnHomepage->setFont(font);
        pBtnHomepage->setStyleSheet(QStringLiteral("border:2px groove gray;border-radius:10px;padding:2px 4px;"));
        pBtnDone = new QPushButton(InputDoneDialog);
        pBtnDone->setObjectName(QStringLiteral("pBtnDone"));
        pBtnDone->setGeometry(QRect(590, 570, 200, 100));
        QFont font1;
        font1.setPointSize(22);
        pBtnDone->setFont(font1);
        pBtnDone->setStyleSheet(QStringLiteral("border:2px groove gray;border-radius:10px;padding:2px 4px;"));

        retranslateUi(InputDoneDialog);

        QMetaObject::connectSlotsByName(InputDoneDialog);
    } // setupUi

    void retranslateUi(QDialog *InputDoneDialog)
    {
        InputDoneDialog->setWindowTitle(QApplication::translate("InputDoneDialog", "InputDoneDialog", 0));
        pBtnHomepage->setText(QString());
        pBtnDone->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class InputDoneDialog: public Ui_InputDoneDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUTDONEDIALOG_H
