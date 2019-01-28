/********************************************************************************
** Form generated from reading UI file 'facerecognicedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FACERECOGNICEDIALOG_H
#define UI_FACERECOGNICEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FaceRecogniceDialog
{
public:
    QPushButton *pBtnHomepage;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QFrame *frame;
    QLabel *label;
    QLabel *lb_mask;
    QLabel *lb_capture_frame;
    QLabel *lb_tips;
    QLabel *lb_message;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pBtnNext;

    void setupUi(QDialog *FaceRecogniceDialog)
    {
        if (FaceRecogniceDialog->objectName().isEmpty())
            FaceRecogniceDialog->setObjectName(QStringLiteral("FaceRecogniceDialog"));
        FaceRecogniceDialog->resize(1920, 1080);
        FaceRecogniceDialog->setStyleSheet(QStringLiteral("#FaceRecogniceDialog{border-image: url(:/Resources/Images/background.png);}"));
        pBtnHomepage = new QPushButton(FaceRecogniceDialog);
        pBtnHomepage->setObjectName(QStringLiteral("pBtnHomepage"));
        pBtnHomepage->setGeometry(QRect(330, 850, 300, 150));
        QFont font;
        font.setFamily(QStringLiteral("Algerian"));
        font.setPointSize(22);
        pBtnHomepage->setFont(font);
        pBtnHomepage->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/cancelon.png);"));
        layoutWidget = new QWidget(FaceRecogniceDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(380, 190, 994, 602));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        frame = new QFrame(layoutWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMinimumSize(QSize(900, 600));
        frame->setMaximumSize(QSize(700, 550));
        frame->setStyleSheet(QLatin1String("QFrame#frame{\n"
"border-radius:8px;\n"
"background-color:rgba(231,243,255,100);\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 900, 50));
        label->setStyleSheet(QLatin1String("color: red;\n"
"font: bold 20px \"Microsoft YaHei\";"));
        label->setAlignment(Qt::AlignCenter);
        lb_mask = new QLabel(frame);
        lb_mask->setObjectName(QStringLiteral("lb_mask"));
        lb_mask->setGeometry(QRect(160, 60, 480, 360));
        lb_mask->setMinimumSize(QSize(480, 360));
        lb_mask->setPixmap(QPixmap(QString::fromUtf8(":/1/Resources/Images/outline1.png")));
        lb_mask->setScaledContents(true);
        lb_capture_frame = new QLabel(frame);
        lb_capture_frame->setObjectName(QStringLiteral("lb_capture_frame"));
        lb_capture_frame->setGeometry(QRect(210, 70, 480, 360));
        lb_capture_frame->setMinimumSize(QSize(480, 360));
        lb_capture_frame->setStyleSheet(QStringLiteral("border-image: url(:/Resources/Images/outline.png);"));
        lb_tips = new QLabel(frame);
        lb_tips->setObjectName(QStringLiteral("lb_tips"));
        lb_tips->setGeometry(QRect(0, 450, 900, 30));
        lb_tips->setStyleSheet(QLatin1String("color: red;\n"
"font: bold 16px \"Microsoft YaHei\";"));
        lb_tips->setAlignment(Qt::AlignCenter);
        lb_message = new QLabel(frame);
        lb_message->setObjectName(QStringLiteral("lb_message"));
        lb_message->setGeometry(QRect(0, 520, 900, 31));
        lb_message->setStyleSheet(QLatin1String("color: red;\n"
"font: bold 18px \"Microsoft YaHei\";"));
        lb_message->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(frame);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pBtnNext = new QPushButton(FaceRecogniceDialog);
        pBtnNext->setObjectName(QStringLiteral("pBtnNext"));
        pBtnNext->setGeometry(QRect(1290, 850, 300, 150));
        QFont font1;
        font1.setPointSize(22);
        pBtnNext->setFont(font1);
        pBtnNext->setStyleSheet(QLatin1String("border:2px groove gray;border-radius:10px;padding:2px 4px;\n"
"border-image: url(:/Resources/Images/nexton.png);"));

        retranslateUi(FaceRecogniceDialog);

        QMetaObject::connectSlotsByName(FaceRecogniceDialog);
    } // setupUi

    void retranslateUi(QDialog *FaceRecogniceDialog)
    {
        FaceRecogniceDialog->setWindowTitle(QApplication::translate("FaceRecogniceDialog", "FaceRecogniceDialog", 0));
        pBtnHomepage->setText(QString());
        label->setText(QApplication::translate("FaceRecogniceDialog", "\346\255\243\345\234\250\350\277\233\350\241\214\344\272\272\350\204\270\350\257\206\345\210\253", 0));
        lb_mask->setText(QString());
        lb_capture_frame->setText(QString());
        lb_tips->setText(QApplication::translate("FaceRecogniceDialog", "\350\257\267\347\234\250\347\234\274", 0));
        lb_message->setText(QApplication::translate("FaceRecogniceDialog", "( \346\263\250\346\204\217\357\274\232\350\257\267\346\212\254\345\244\264\347\234\213\351\225\234\345\244\264\357\274\214\346\213\215\347\205\247\351\234\200\346\230\276\347\244\272\345\205\250\345\244\264\345\203\217 )", 0));
        pBtnNext->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FaceRecogniceDialog: public Ui_FaceRecogniceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FACERECOGNICEDIALOG_H
