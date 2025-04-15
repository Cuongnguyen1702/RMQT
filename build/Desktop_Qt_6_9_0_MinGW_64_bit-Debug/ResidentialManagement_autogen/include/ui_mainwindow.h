/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *AddFamily;
    QLabel *FamilyListText;
    QTableWidget *FamilyTableWidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        AddFamily = new QPushButton(centralwidget);
        AddFamily->setObjectName("AddFamily");
        AddFamily->setGeometry(QRect(290, 480, 221, 81));
        AddFamily->setAutoDefault(false);
        AddFamily->setFlat(false);
        FamilyListText = new QLabel(centralwidget);
        FamilyListText->setObjectName("FamilyListText");
        FamilyListText->setGeometry(QRect(240, 10, 400, 20));
        FamilyListText->setMinimumSize(QSize(0, 0));
        FamilyListText->setTextFormat(Qt::TextFormat::AutoText);
        FamilyListText->setScaledContents(true);
        FamilyListText->setAlignment(Qt::AlignmentFlag::AlignJustify|Qt::AlignmentFlag::AlignVCenter);
        FamilyListText->setWordWrap(false);
        FamilyListText->setMargin(1);
        FamilyTableWidget = new QTableWidget(centralwidget);
        FamilyTableWidget->setObjectName("FamilyTableWidget");
        FamilyTableWidget->setGeometry(QRect(15, 61, 771, 361));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        AddFamily->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Qu\341\272\243n L\303\275 D\303\242n C\306\260 Khu Ph\341\273\221", nullptr));
        AddFamily->setText(QCoreApplication::translate("MainWindow", "Th\303\252m h\341\273\231 gia \304\221\303\254nh", nullptr));
        FamilyListText->setText(QCoreApplication::translate("MainWindow", "DANH S\303\201CH H\341\273\230 GIA \304\220\303\214NH TRONG KHU PH\341\273\220", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
