/********************************************************************************
** Form generated from reading UI file 'drivingmanage.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRIVINGMANAGE_H
#define UI_DRIVINGMANAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DrivingManage
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QGraphicsView *graphicsView_2;
    QGraphicsView *graphicsView_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pBtnGohome;
    QGraphicsView *graphicsView;
    QGraphicsView *graphicsView_4;
    QGraphicsView *graphicsView_5;

    void setupUi(QMainWindow *DrivingManage)
    {
        if (DrivingManage->objectName().isEmpty())
            DrivingManage->setObjectName(QStringLiteral("DrivingManage"));
        DrivingManage->resize(1984, 1080);
        DrivingManage->setStyleSheet(QStringLiteral("background-image: url(:/Resources/Images/background.png);"));
        centralWidget = new QWidget(DrivingManage);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(869, 530, 251, 91));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(20);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QLatin1String("border:0px groove gray;border-radius:10px;\n"
"background-image: url(:/Resources/Images/btn.png);\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/Images/\351\251\276\347\205\247\350\265\204\346\240\274\347\224\263 \350\257\267 .png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(71, 92));
        pushButton->setFlat(true);
        graphicsView_2 = new QGraphicsView(centralWidget);
        graphicsView_2->setObjectName(QStringLiteral("graphicsView_2"));
        graphicsView_2->setGeometry(QRect(40, 0, 111, 111));
        graphicsView_2->setStyleSheet(QStringLiteral("background-image: url(:/Resources/Images/btnPolice.png);border:0px;"));
        graphicsView_2->setViewportUpdateMode(QGraphicsView::FullViewportUpdate);
        graphicsView_3 = new QGraphicsView(centralWidget);
        graphicsView_3->setObjectName(QStringLiteral("graphicsView_3"));
        graphicsView_3->setGeometry(QRect(210, 20, 1041, 81));
        graphicsView_3->setStyleSheet(QStringLiteral("background-image: url(:/Resources/Images/Hint2.png);border:0px;"));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(1270, 780, 251, 91));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QLatin1String("border:0px groove gray;border-radius:10px;\n"
"background-image: url(:/Resources/Images/btn.png);\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/Images/\351\251\276\351\251\266\344\272\272\350\200\203\350\257\225.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(71, 92));
        pushButton_2->setFlat(true);
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(458, 780, 251, 91));
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QLatin1String("border:0px groove gray;border-radius:10px;\n"
"background-image: url(:/Resources/Images/btn.png);\n"
""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resources/Images/\351\251\276\351\251\266\350\257\201\345\271\264\345\256\241.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon2);
        pushButton_3->setIconSize(QSize(71, 92));
        pushButton_3->setFlat(true);
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(869, 780, 251, 91));
        pushButton_4->setFont(font);
        pushButton_4->setStyleSheet(QLatin1String("border-radius:10px;\n"
"background-image: url(:/Resources/Images/btn.png);\n"
""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Resources/Images/\346\263\250\351\224\200\347\255\211\344\270\232\345\212\241.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon3);
        pushButton_4->setIconSize(QSize(71, 92));
        pushButton_4->setFlat(true);
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(1270, 529, 251, 91));
        pushButton_5->setFont(font);
        pushButton_5->setStyleSheet(QLatin1String("border:0px groove gray;border-radius:10px;\n"
"background-image: url(:/Resources/Images/btn.png);\n"
""));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Resources/Images/\346\215\242\350\257\201.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon4);
        pushButton_5->setIconSize(QSize(71, 92));
        pushButton_5->setFlat(true);
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(458, 530, 251, 91));
        pushButton_6->setFont(font);
        pushButton_6->setStyleSheet(QLatin1String("border:0px groove gray;border-radius:10px;\n"
"background-image: url(:/Resources/Images/btn.png);\n"
""));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Resources/Images/\351\222\261 .png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon5);
        pushButton_6->setIconSize(QSize(71, 92));
        pushButton_6->setFlat(true);
        pBtnGohome = new QPushButton(centralWidget);
        pBtnGohome->setObjectName(QStringLiteral("pBtnGohome"));
        pBtnGohome->setGeometry(QRect(1380, 20, 241, 91));
        pBtnGohome->setFont(font);
        pBtnGohome->setStyleSheet(QLatin1String("border:0px groove gray;border-radius:10px;\n"
"background-image: url(:/Resources/Images/btn.png);\n"
""));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Resources/Images/\344\270\273\351\241\265.png"), QSize(), QIcon::Normal, QIcon::Off);
        pBtnGohome->setIcon(icon6);
        pBtnGohome->setIconSize(QSize(71, 92));
        pBtnGohome->setFlat(true);
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(650, 240, 301, 71));
        graphicsView->setStyleSheet(QString::fromUtf8("background-image: url(:/Resources/Images/\351\251\276\347\256\241\344\270\232\345\212\241.png);border:0px;"));
        graphicsView_4 = new QGraphicsView(centralWidget);
        graphicsView_4->setObjectName(QStringLiteral("graphicsView_4"));
        graphicsView_4->setGeometry(QRect(340, 260, 301, 31));
        graphicsView_4->setStyleSheet(QString::fromUtf8("border:0px;\n"
"background-image: url(:/Resources/Images/\347\237\251\345\275\242 1\357\274\210\345\267\246\357\274\211.png);"));
        graphicsView_5 = new QGraphicsView(centralWidget);
        graphicsView_5->setObjectName(QStringLiteral("graphicsView_5"));
        graphicsView_5->setGeometry(QRect(970, 160, 481, 171));
        graphicsView_5->setStyleSheet(QString::fromUtf8("border:0px;\n"
"background-image: url(:/Resources/Images/\347\237\251\345\275\242 1 \357\274\210\345\217\263\357\274\211.png);"));
        DrivingManage->setCentralWidget(centralWidget);

        retranslateUi(DrivingManage);

        QMetaObject::connectSlotsByName(DrivingManage);
    } // setupUi

    void retranslateUi(QMainWindow *DrivingManage)
    {
        DrivingManage->setWindowTitle(QApplication::translate("DrivingManage", "DrivingManage", 0));
        pushButton->setText(QApplication::translate("DrivingManage", "\351\251\276\347\205\247\347\224\263\350\257\267", 0));
        pushButton_2->setText(QApplication::translate("DrivingManage", "\351\251\276\347\205\247\350\200\203\350\257\225", 0));
        pushButton_3->setText(QApplication::translate("DrivingManage", "\351\251\276\347\205\247\345\271\264\345\256\241", 0));
        pushButton_4->setText(QApplication::translate("DrivingManage", "\346\263\250\351\224\200    ", 0));
        pushButton_5->setText(QApplication::translate("DrivingManage", "\346\215\242\350\257\201    ", 0));
        pushButton_6->setText(QApplication::translate("DrivingManage", "\350\277\235\347\253\240\345\244\204\347\220\206", 0));
        pBtnGohome->setText(QApplication::translate("DrivingManage", "\344\270\273\351\241\265", 0));
    } // retranslateUi

};

namespace Ui {
    class DrivingManage: public Ui_DrivingManage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRIVINGMANAGE_H
