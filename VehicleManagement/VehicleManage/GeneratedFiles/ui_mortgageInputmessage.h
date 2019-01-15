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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include "basedialog.h"

QT_BEGIN_NAMESPACE

class Ui_mortgageInputmessage
{
public:
    QPushButton *pBtnDone;
    QPushButton *pBtnHomepage;
    QPushButton *pBtnGohome;
    QLabel *label;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(BaseDialog *mortgageInputmessage)
    {
        if (mortgageInputmessage->objectName().isEmpty())
            mortgageInputmessage->setObjectName(QStringLiteral("mortgageInputmessage"));
        mortgageInputmessage->resize(1900, 1080);
        pBtnDone = new QPushButton(mortgageInputmessage);
        pBtnDone->setObjectName(QStringLiteral("pBtnDone"));
        pBtnDone->setGeometry(QRect(1430, 840, 300, 150));
        QFont font;
        font.setPointSize(22);
        pBtnDone->setFont(font);
        pBtnDone->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/img/Resources/Images/confirmon.png);"));
        pBtnHomepage = new QPushButton(mortgageInputmessage);
        pBtnHomepage->setObjectName(QStringLiteral("pBtnHomepage"));
        pBtnHomepage->setGeometry(QRect(470, 840, 300, 150));
        QFont font1;
        font1.setFamily(QStringLiteral("Algerian"));
        font1.setPointSize(22);
        pBtnHomepage->setFont(font1);
        pBtnHomepage->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/img/Resources/Images/cancelon.png);"));
        pBtnGohome = new QPushButton(mortgageInputmessage);
        pBtnGohome->setObjectName(QStringLiteral("pBtnGohome"));
        pBtnGohome->setGeometry(QRect(1510, 100, 251, 91));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font2.setPointSize(20);
        pBtnGohome->setFont(font2);
        pBtnGohome->setStyleSheet(QLatin1String("border:0px groove gray;border-radius:10px;\n"
"background-image: url(:/Resources/Images/btn.png);\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/Images/\344\270\273\351\241\265.png"), QSize(), QIcon::Normal, QIcon::Off);
        pBtnGohome->setIcon(icon);
        pBtnGohome->setIconSize(QSize(71, 92));
        pBtnGohome->setFlat(true);
        label = new QLabel(mortgageInputmessage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(1210, 370, 451, 411));
        label->setPixmap(QPixmap(QString::fromUtf8(":/img/Resources/Images/printguide.png")));
        lineEdit = new QLineEdit(mortgageInputmessage);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(680, 420, 320, 71));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(28);
        lineEdit->setFont(font3);
        lineEdit_2 = new QLineEdit(mortgageInputmessage);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(680, 530, 320, 71));
        lineEdit_2->setFont(font3);
        label_2 = new QLabel(mortgageInputmessage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(520, 440, 131, 41));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font4.setPointSize(20);
        label_2->setFont(font4);
        label_3 = new QLabel(mortgageInputmessage);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(520, 560, 131, 31));
        label_3->setFont(font4);
        label_4 = new QLabel(mortgageInputmessage);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(660, 250, 1111, 81));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font5.setPointSize(36);
        label_4->setFont(font5);

        retranslateUi(mortgageInputmessage);

        QMetaObject::connectSlotsByName(mortgageInputmessage);
    } // setupUi

    void retranslateUi(BaseDialog *mortgageInputmessage)
    {
        mortgageInputmessage->setWindowTitle(QApplication::translate("mortgageInputmessage", "mortgageInputmessage", 0));
        pBtnDone->setText(QString());
        pBtnHomepage->setText(QString());
        pBtnGohome->setText(QApplication::translate("mortgageInputmessage", "\344\270\273\351\241\265", 0));
        label->setText(QString());
        lineEdit->setText(QString());
        lineEdit_2->setText(QString());
        label_2->setText(QApplication::translate("mortgageInputmessage", "\345\217\221\347\245\250\345\217\267", 0));
        label_3->setText(QApplication::translate("mortgageInputmessage", "\344\277\235\351\231\251\345\217\267", 0));
        label_4->setText(QApplication::translate("mortgageInputmessage", "\350\257\267\350\276\223\345\205\245\345\217\221\347\245\250\345\217\267\343\200\201\344\277\235\351\231\251\345\217\267\343\200\201\345\271\266\345\260\206\344\277\241\346\201\257\346\214\211\346\217\220\347\244\272\346\213\215\347\205\247\347\225\231\345\272\225", 0));
    } // retranslateUi

};

namespace Ui {
    class mortgageInputmessage: public Ui_mortgageInputmessage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MORTGAGEINPUTMESSAGE_H
