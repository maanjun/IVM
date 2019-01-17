/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QToolButton *pBtnVehicle;
    QToolButton *pBtnDrive;
    QGraphicsView *graphicsView;
    QGraphicsView *graphicsView_2;
    QGraphicsView *graphicsView_3;
    QGraphicsView *graphicsView_4;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1920, 1080);
        MainWindow->setStyleSheet(QStringLiteral("background-image: url(:/Resources/Images/background.png);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pBtnVehicle = new QToolButton(centralWidget);
        pBtnVehicle->setObjectName(QStringLiteral("pBtnVehicle"));
        pBtnVehicle->setGeometry(QRect(360, 360, 420, 380));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(48);
        font.setBold(false);
        font.setWeight(50);
        pBtnVehicle->setFont(font);
        pBtnVehicle->setStyleSheet(QLatin1String("border-radius:10px;padding:2px 4px;\n"
"background-image: url(:/Resources/Images/btnBackBtn.png);text-align:button;"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/Images/btnCar.png"), QSize(), QIcon::Normal, QIcon::Off);
        pBtnVehicle->setIcon(icon);
        pBtnVehicle->setIconSize(QSize(423, 387));
        pBtnVehicle->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        pBtnDrive = new QToolButton(centralWidget);
        pBtnDrive->setObjectName(QStringLiteral("pBtnDrive"));
        pBtnDrive->setGeometry(QRect(1140, 360, 420, 380));
        pBtnDrive->setFont(font);
        pBtnDrive->setStyleSheet(QLatin1String("border-radius:10px;padding:2px 4px;\n"
"background-image: url(:/Resources/Images/btnBackBtn.png);text-align:button;"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/Images/btnMan.png"), QSize(), QIcon::Normal, QIcon::Off);
        pBtnDrive->setIcon(icon1);
        pBtnDrive->setIconSize(QSize(423, 387));
        pBtnDrive->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(620, 870, 511, 101));
        graphicsView->setStyleSheet(QStringLiteral("background-image: url(:/Resources/Images/Hint11.png);border:0px;"));
        graphicsView_2 = new QGraphicsView(centralWidget);
        graphicsView_2->setObjectName(QStringLiteral("graphicsView_2"));
        graphicsView_2->setGeometry(QRect(10, 10, 111, 111));
        graphicsView_2->setStyleSheet(QStringLiteral("background-image: url(:/Resources/Images/btnPolice.png);border:0px;"));
        graphicsView_2->setViewportUpdateMode(QGraphicsView::FullViewportUpdate);
        graphicsView_3 = new QGraphicsView(centralWidget);
        graphicsView_3->setObjectName(QStringLiteral("graphicsView_3"));
        graphicsView_3->setGeometry(QRect(180, 30, 1041, 81));
        graphicsView_3->setStyleSheet(QStringLiteral("background-image: url(:/Resources/Images/Hint2.png);border:0px;"));
        graphicsView_4 = new QGraphicsView(centralWidget);
        graphicsView_4->setObjectName(QStringLiteral("graphicsView_4"));
        graphicsView_4->setGeometry(QRect(50, 890, 71, 71));
        graphicsView_4->setStyleSheet(QStringLiteral("background-image: url(:/Resources/Images/btnLogo.png);border:0px;"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 870, 381, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(36);
        label->setFont(font1);
        label->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);background:transparent;"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(140, 930, 451, 51));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(26);
        label_2->setFont(font2);
        label_2->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);background:transparent;"));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        pBtnVehicle->setText(QApplication::translate("MainWindow", "\350\275\246\347\256\241\344\270\232\345\212\241", 0));
        pBtnDrive->setText(QApplication::translate("MainWindow", "\351\251\276\347\256\241\344\270\232\345\212\241", 0));
        label->setText(QApplication::translate("MainWindow", "0571 - 89731946 ", 0));
        label_2->setText(QApplication::translate("MainWindow", "\344\270\255\347\277\224\347\247\221\346\212\200(\346\235\255\345\267\236\346\217\220\344\276\233)\346\212\200\346\234\257\346\234\215\345\212\241", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
