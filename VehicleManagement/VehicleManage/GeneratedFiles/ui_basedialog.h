/********************************************************************************
** Form generated from reading UI file 'basedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BASEDIALOG_H
#define UI_BASEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_BaseDialog
{
public:
    QLCDNumber *lcdNumber;
    QGraphicsView *graphicsView_2;
    QGraphicsView *graphicsView_3;
    QLabel *labelWarning;

    void setupUi(QDialog *BaseDialog)
    {
        if (BaseDialog->objectName().isEmpty())
            BaseDialog->setObjectName(QStringLiteral("BaseDialog"));
        BaseDialog->resize(1920, 1080);
        BaseDialog->setStyleSheet(QStringLiteral("#BaseDialog{border-image: url(:/Resources/Images/background.png);}"));
        lcdNumber = new QLCDNumber(BaseDialog);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(10, 940, 131, 131));
        QFont font;
        font.setFamily(QStringLiteral("Times New Roman"));
        font.setPointSize(48);
        lcdNumber->setFont(font);
        lcdNumber->setStyleSheet(QStringLiteral("color: rgb(74, 162, 255);"));
        lcdNumber->setDigitCount(2);
        lcdNumber->setSegmentStyle(QLCDNumber::Filled);
        lcdNumber->setProperty("value", QVariant(60));
        lcdNumber->setProperty("intValue", QVariant(60));
        graphicsView_2 = new QGraphicsView(BaseDialog);
        graphicsView_2->setObjectName(QStringLiteral("graphicsView_2"));
        graphicsView_2->setGeometry(QRect(70, 10, 111, 111));
        graphicsView_2->setStyleSheet(QStringLiteral("background-image: url(:/Resources/Images/btnPolice.png);border:0px;"));
        graphicsView_2->setViewportUpdateMode(QGraphicsView::FullViewportUpdate);
        graphicsView_3 = new QGraphicsView(BaseDialog);
        graphicsView_3->setObjectName(QStringLiteral("graphicsView_3"));
        graphicsView_3->setGeometry(QRect(240, 30, 1041, 81));
        graphicsView_3->setStyleSheet(QStringLiteral("background-image: url(:/Resources/Images/Hint2.png);border:0px;"));
        labelWarning = new QLabel(BaseDialog);
        labelWarning->setObjectName(QStringLiteral("labelWarning"));
        labelWarning->setGeometry(QRect(160, 1030, 1600, 40));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(16);
        labelWarning->setFont(font1);
        labelWarning->setStyleSheet(QStringLiteral(""));

        retranslateUi(BaseDialog);

        QMetaObject::connectSlotsByName(BaseDialog);
    } // setupUi

    void retranslateUi(QDialog *BaseDialog)
    {
        BaseDialog->setWindowTitle(QApplication::translate("BaseDialog", "BaseDialog", 0));
        labelWarning->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class BaseDialog: public Ui_BaseDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BASEDIALOG_H
