/********************************************************************************
** Form generated from reading UI file 'readdrivinglisencedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_READDRIVINGLISENCEDIALOG_H
#define UI_READDRIVINGLISENCEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_ReadDrivinglisenceDialog
{
public:
    QPushButton *pBtnHomepage;
    QPushButton *pBtnNext;
    QLabel *labelLoading;
    QTextBrowser *textBrowser;
    QLabel *label;

    void setupUi(QDialog *ReadDrivinglisenceDialog)
    {
        if (ReadDrivinglisenceDialog->objectName().isEmpty())
            ReadDrivinglisenceDialog->setObjectName(QStringLiteral("ReadDrivinglisenceDialog"));
        ReadDrivinglisenceDialog->resize(1920, 1080);
        ReadDrivinglisenceDialog->setStyleSheet(QStringLiteral("#ReadDrivinglisenceDialog{border-image: url(:/Resources/Images/background.png);}"));
        pBtnHomepage = new QPushButton(ReadDrivinglisenceDialog);
        pBtnHomepage->setObjectName(QStringLiteral("pBtnHomepage"));
        pBtnHomepage->setGeometry(QRect(330, 850, 300, 150));
        QFont font;
        font.setFamily(QStringLiteral("Algerian"));
        font.setPointSize(22);
        pBtnHomepage->setFont(font);
        pBtnHomepage->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/cancelon.png);"));
        pBtnNext = new QPushButton(ReadDrivinglisenceDialog);
        pBtnNext->setObjectName(QStringLiteral("pBtnNext"));
        pBtnNext->setGeometry(QRect(1290, 850, 300, 150));
        QFont font1;
        font1.setPointSize(22);
        pBtnNext->setFont(font1);
        pBtnNext->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/nexton.png);"));
        labelLoading = new QLabel(ReadDrivinglisenceDialog);
        labelLoading->setObjectName(QStringLiteral("labelLoading"));
        labelLoading->setGeometry(QRect(1160, 460, 124, 124));
        labelLoading->setStyleSheet(QStringLiteral("border-image: url(:/Resources/Images/loading.gif);"));
        textBrowser = new QTextBrowser(ReadDrivinglisenceDialog);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(620, 260, 1200, 540));
        textBrowser->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 2px;\n"
"background-color: qlineargradient(spread:pad, x1:0.3125, y1:0, x2:0.784, y2:1, stop:0 rgba(211, 217, 255, 255), stop:1 rgba(255, 255, 255, 255));"));
        label = new QLabel(ReadDrivinglisenceDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 310, 400, 400));

        retranslateUi(ReadDrivinglisenceDialog);

        QMetaObject::connectSlotsByName(ReadDrivinglisenceDialog);
    } // setupUi

    void retranslateUi(QDialog *ReadDrivinglisenceDialog)
    {
        ReadDrivinglisenceDialog->setWindowTitle(QApplication::translate("ReadDrivinglisenceDialog", "ReadDrivinglisenceDialog", 0));
        pBtnHomepage->setText(QString());
        pBtnNext->setText(QString());
        labelLoading->setText(QString());
        textBrowser->setHtml(QApplication::translate("ReadDrivinglisenceDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ReadDrivinglisenceDialog: public Ui_ReadDrivinglisenceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_READDRIVINGLISENCEDIALOG_H
