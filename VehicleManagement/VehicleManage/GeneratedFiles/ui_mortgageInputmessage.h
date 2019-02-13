/********************************************************************************
** Form generated from reading UI file 'mortgageInputmessage.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MORTGAGEINPUTMESSAGE_H
#define UI_MORTGAGEINPUTMESSAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "basedialog.h"

QT_BEGIN_NAMESPACE

class Ui_mortgageInputmessage
{
public:
    QPushButton *pBtnDone;
    QPushButton *pBtnHomepage;
    QLabel *label;
    QLabel *label_4;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_3;
    QLabel *label_2;
    QLabel *label_5;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_2;

    void setupUi(BaseDialog *mortgageInputmessage)
    {
        if (mortgageInputmessage->objectName().isEmpty())
            mortgageInputmessage->setObjectName(QStringLiteral("mortgageInputmessage"));
        mortgageInputmessage->resize(1900, 1072);
        pBtnDone = new QPushButton(mortgageInputmessage);
        pBtnDone->setObjectName(QStringLiteral("pBtnDone"));
        pBtnDone->setGeometry(QRect(1290, 850, 300, 150));
        QFont font;
        font.setPointSize(22);
        pBtnDone->setFont(font);
        pBtnDone->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/img/Resources/Images/confirmon.png);"));
        pBtnHomepage = new QPushButton(mortgageInputmessage);
        pBtnHomepage->setObjectName(QStringLiteral("pBtnHomepage"));
        pBtnHomepage->setGeometry(QRect(330, 850, 300, 150));
        QFont font1;
        font1.setFamily(QStringLiteral("Algerian"));
        font1.setPointSize(22);
        pBtnHomepage->setFont(font1);
        pBtnHomepage->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/img/Resources/Images/cancelon.png);"));
        label = new QLabel(mortgageInputmessage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(1210, 250, 451, 411));
        label->setPixmap(QPixmap(QString::fromUtf8(":/img/Resources/Images/printguide.png")));
        label_4 = new QLabel(mortgageInputmessage);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(380, 680, 1111, 81));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(36);
        label_4->setFont(font2);
        label_4->setStyleSheet(QStringLiteral("color: rgb(255, 85, 0);"));
        layoutWidget = new QWidget(mortgageInputmessage);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(290, 290, 731, 331));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(26);
        gridLayout->setVerticalSpacing(16);
        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setMinimumSize(QSize(320, 71));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(28);
        lineEdit_3->setFont(font3);

        gridLayout->addWidget(lineEdit_3, 2, 1, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font4.setPointSize(24);
        label_2->setFont(font4);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font4);

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMinimumSize(QSize(320, 71));
        lineEdit->setFont(font3);

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font4);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setMinimumSize(QSize(320, 71));
        lineEdit_2->setFont(font3);

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 1);


        retranslateUi(mortgageInputmessage);

        QMetaObject::connectSlotsByName(mortgageInputmessage);
    } // setupUi

    void retranslateUi(BaseDialog *mortgageInputmessage)
    {
        mortgageInputmessage->setWindowTitle(QApplication::translate("mortgageInputmessage", "mortgageInputmessage", 0));
        pBtnDone->setText(QString());
        pBtnHomepage->setText(QString());
        label->setText(QString());
        label_4->setText(QApplication::translate("mortgageInputmessage", "* \350\257\267\350\276\223\345\205\245\345\217\221\347\245\250\345\217\267\343\200\201\344\277\235\351\231\251\345\217\267\343\200\201\345\271\266\345\260\206\344\277\241\346\201\257\346\214\211\346\217\220\347\244\272\346\213\215\347\205\247\347\225\231\345\272\225", 0));
        lineEdit_3->setText(QApplication::translate("mortgageInputmessage", "210000", 0));
        label_2->setText(QApplication::translate("mortgageInputmessage", "\345\217\221\347\245\250\345\217\267", 0));
        label_5->setText(QApplication::translate("mortgageInputmessage", "\351\207\221\351\242\235", 0));
        lineEdit->setText(QApplication::translate("mortgageInputmessage", "P201901001023002", 0));
        label_3->setText(QApplication::translate("mortgageInputmessage", "\344\277\235\351\231\251\345\217\267", 0));
        lineEdit_2->setText(QApplication::translate("mortgageInputmessage", "BX2009001200A", 0));
    } // retranslateUi

};

namespace Ui {
    class mortgageInputmessage: public Ui_mortgageInputmessage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MORTGAGEINPUTMESSAGE_H
