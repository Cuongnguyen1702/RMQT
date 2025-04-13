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
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_FamilyWindow
{
public:
    QTextEdit *AddressEdit;
    QLabel *label;
    QPushButton *AddFamilyMemberButton;
    QLabel *label_2;
    QTextEdit *IDOwnerEdit;
    QPushButton *AddFamilyButton;

    void setupUi(QDialog *FamilyWindow)
    {
        if (FamilyWindow->objectName().isEmpty())
            FamilyWindow->setObjectName("FamilyWindow");
        FamilyWindow->resize(509, 420);
        AddressEdit = new QTextEdit(FamilyWindow);
        AddressEdit->setObjectName("AddressEdit");
        AddressEdit->setGeometry(QRect(90, 80, 241, 31));
        label = new QLabel(FamilyWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 80, 63, 20));
        label->setTextFormat(Qt::TextFormat::PlainText);
        label->setTextInteractionFlags(Qt::TextInteractionFlag::NoTextInteraction);
        AddFamilyMemberButton = new QPushButton(FamilyWindow);
        AddFamilyMemberButton->setObjectName("AddFamilyMemberButton");
        AddFamilyMemberButton->setGeometry(QRect(260, 340, 231, 41));
        label_2 = new QLabel(FamilyWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 40, 71, 20));
        IDOwnerEdit = new QTextEdit(FamilyWindow);
        IDOwnerEdit->setObjectName("IDOwnerEdit");
        IDOwnerEdit->setGeometry(QRect(90, 40, 241, 31));
        AddFamilyButton = new QPushButton(FamilyWindow);
        AddFamilyButton->setObjectName("AddFamilyButton");
        AddFamilyButton->setGeometry(QRect(20, 340, 221, 41));

        retranslateUi(FamilyWindow);

        QMetaObject::connectSlotsByName(FamilyWindow);
    } // setupUi

    void retranslateUi(QDialog *FamilyWindow)
    {
        FamilyWindow->setWindowTitle(QCoreApplication::translate("FamilyWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("FamilyWindow", "\304\220\341\273\213a ch\341\273\211", nullptr));
        AddFamilyMemberButton->setText(QCoreApplication::translate("FamilyWindow", "Th\303\252m ng\306\260\341\273\235i trong gia \304\221\303\254nh", nullptr));
        label_2->setText(QCoreApplication::translate("FamilyWindow", "ID ch\341\273\247 h\341\273\231", nullptr));
        AddFamilyButton->setText(QCoreApplication::translate("FamilyWindow", "Th\303\252m h\341\273\231 gia \304\221\303\254nh v\303\240o khu ph\341\273\221", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FamilyWindow: public Ui_FamilyWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FAMILYWINDOW_H
