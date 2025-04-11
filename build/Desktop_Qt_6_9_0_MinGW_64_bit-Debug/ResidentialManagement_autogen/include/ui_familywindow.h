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
    QTextEdit *textEdit;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *FamilyWindow)
    {
        if (FamilyWindow->objectName().isEmpty())
            FamilyWindow->setObjectName("FamilyWindow");
        FamilyWindow->resize(509, 420);
        textEdit = new QTextEdit(FamilyWindow);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(100, 30, 241, 31));
        label = new QLabel(FamilyWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 30, 63, 20));
        label->setTextFormat(Qt::TextFormat::PlainText);
        label->setTextInteractionFlags(Qt::TextInteractionFlag::NoTextInteraction);
        pushButton = new QPushButton(FamilyWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(140, 340, 231, 41));

        retranslateUi(FamilyWindow);

        QMetaObject::connectSlotsByName(FamilyWindow);
    } // setupUi

    void retranslateUi(QDialog *FamilyWindow)
    {
        FamilyWindow->setWindowTitle(QCoreApplication::translate("FamilyWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("FamilyWindow", "\304\220\341\273\213a ch\341\273\211", nullptr));
        pushButton->setText(QCoreApplication::translate("FamilyWindow", "Th\303\252m ng\306\260\341\273\235i trong gia \304\221\303\254nh", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FamilyWindow: public Ui_FamilyWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FAMILYWINDOW_H
