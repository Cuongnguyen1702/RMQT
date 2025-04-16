/********************************************************************************
** Form generated from reading UI file 'familywindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FAMILYWINDOW_H
#define UI_FAMILYWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FamilyWindow
{
public:
    QWidget *centralwidget;
    QTableWidget *FamMemTableWidg;
    QPushButton *AddFamilyButton;
    QPushButton *FamilyMemButton;
    QLabel *IDLabel;
    QPushButton *FindFamButton;
    QLineEdit *IDtextEdit;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *FamilyWindow)
    {
        if (FamilyWindow->objectName().isEmpty())
            FamilyWindow->setObjectName("FamilyWindow");
        FamilyWindow->resize(800, 600);
        centralwidget = new QWidget(FamilyWindow);
        centralwidget->setObjectName("centralwidget");
        FamMemTableWidg = new QTableWidget(centralwidget);
        FamMemTableWidg->setObjectName("FamMemTableWidg");
        FamMemTableWidg->setGeometry(QRect(15, 120, 771, 301));
        AddFamilyButton = new QPushButton(centralwidget);
        AddFamilyButton->setObjectName("AddFamilyButton");
        AddFamilyButton->setGeometry(QRect(230, 450, 101, 51));
        FamilyMemButton = new QPushButton(centralwidget);
        FamilyMemButton->setObjectName("FamilyMemButton");
        FamilyMemButton->setGeometry(QRect(400, 450, 181, 51));
        IDLabel = new QLabel(centralwidget);
        IDLabel->setObjectName("IDLabel");
        IDLabel->setGeometry(QRect(10, 30, 91, 20));
        FindFamButton = new QPushButton(centralwidget);
        FindFamButton->setObjectName("FindFamButton");
        FindFamButton->setGeometry(QRect(350, 20, 121, 29));
        IDtextEdit = new QLineEdit(centralwidget);
        IDtextEdit->setObjectName("IDtextEdit");
        IDtextEdit->setGeometry(QRect(110, 30, 113, 21));
        FamilyWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(FamilyWindow);
        statusbar->setObjectName("statusbar");
        FamilyWindow->setStatusBar(statusbar);

        retranslateUi(FamilyWindow);

        QMetaObject::connectSlotsByName(FamilyWindow);
    } // setupUi

    void retranslateUi(QMainWindow *FamilyWindow)
    {
        FamilyWindow->setWindowTitle(QCoreApplication::translate("FamilyWindow", "MainWindow", nullptr));
        AddFamilyButton->setText(QCoreApplication::translate("FamilyWindow", "\304\220\303\263ng", nullptr));
        FamilyMemButton->setText(QCoreApplication::translate("FamilyWindow", "Th\303\252m th\303\240nh vi\303\252n gia \304\221\303\254nh", nullptr));
        IDLabel->setText(QCoreApplication::translate("FamilyWindow", "CCCD ch\341\273\247 h\341\273\231", nullptr));
        FindFamButton->setText(QCoreApplication::translate("FamilyWindow", "T\303\254m h\341\273\231 gia \304\221\303\254nh", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FamilyWindow: public Ui_FamilyWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FAMILYWINDOW_H
