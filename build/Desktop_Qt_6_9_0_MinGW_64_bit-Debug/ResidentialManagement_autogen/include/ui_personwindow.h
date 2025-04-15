/********************************************************************************
** Form generated from reading UI file 'personwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERSONWINDOW_H
#define UI_PERSONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_PersonWindow
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QTextEdit *IDtextEdit;
    QTextEdit *NametextEdit;
    QTextEdit *AddresstextEdit;
    QTextEdit *AlivetextEdit;
    QTextEdit *MaritaltextEdit;
    QTextEdit *RelationshiptextEdit;
    QTextEdit *ReligiontextEdit;
    QDateEdit *BirthdateEdit;
    QComboBox *ResidencecomboBox;
    QCheckBox *OwnercheckBox;
    QLabel *label_10;
    QPushButton *SaveButton;
    QPushButton *CancelButton;

    void setupUi(QDialog *PersonWindow)
    {
        if (PersonWindow->objectName().isEmpty())
            PersonWindow->setObjectName("PersonWindow");
        PersonWindow->resize(661, 552);
        label = new QLabel(PersonWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 10, 63, 20));
        label_2 = new QLabel(PersonWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 40, 63, 20));
        label_3 = new QLabel(PersonWindow);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 70, 63, 20));
        label_4 = new QLabel(PersonWindow);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 100, 71, 20));
        label_5 = new QLabel(PersonWindow);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 130, 71, 20));
        label_6 = new QLabel(PersonWindow);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 160, 71, 20));
        label_7 = new QLabel(PersonWindow);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(20, 190, 131, 20));
        label_8 = new QLabel(PersonWindow);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(20, 220, 63, 20));
        label_9 = new QLabel(PersonWindow);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(20, 250, 81, 20));
        IDtextEdit = new QTextEdit(PersonWindow);
        IDtextEdit->setObjectName("IDtextEdit");
        IDtextEdit->setGeometry(QRect(120, 10, 231, 21));
        NametextEdit = new QTextEdit(PersonWindow);
        NametextEdit->setObjectName("NametextEdit");
        NametextEdit->setGeometry(QRect(120, 40, 231, 21));
        AddresstextEdit = new QTextEdit(PersonWindow);
        AddresstextEdit->setObjectName("AddresstextEdit");
        AddresstextEdit->setGeometry(QRect(120, 70, 231, 21));
        AlivetextEdit = new QTextEdit(PersonWindow);
        AlivetextEdit->setObjectName("AlivetextEdit");
        AlivetextEdit->setGeometry(QRect(120, 130, 231, 21));
        MaritaltextEdit = new QTextEdit(PersonWindow);
        MaritaltextEdit->setObjectName("MaritaltextEdit");
        MaritaltextEdit->setGeometry(QRect(120, 160, 231, 21));
        RelationshiptextEdit = new QTextEdit(PersonWindow);
        RelationshiptextEdit->setObjectName("RelationshiptextEdit");
        RelationshiptextEdit->setGeometry(QRect(160, 190, 231, 21));
        ReligiontextEdit = new QTextEdit(PersonWindow);
        ReligiontextEdit->setObjectName("ReligiontextEdit");
        ReligiontextEdit->setGeometry(QRect(100, 220, 231, 21));
        BirthdateEdit = new QDateEdit(PersonWindow);
        BirthdateEdit->setObjectName("BirthdateEdit");
        BirthdateEdit->setGeometry(QRect(120, 100, 110, 29));
        ResidencecomboBox = new QComboBox(PersonWindow);
        ResidencecomboBox->addItem(QString());
        ResidencecomboBox->addItem(QString());
        ResidencecomboBox->setObjectName("ResidencecomboBox");
        ResidencecomboBox->setGeometry(QRect(110, 250, 111, 28));
        OwnercheckBox = new QCheckBox(PersonWindow);
        OwnercheckBox->setObjectName("OwnercheckBox");
        OwnercheckBox->setGeometry(QRect(110, 290, 93, 26));
        label_10 = new QLabel(PersonWindow);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(20, 290, 63, 20));
        SaveButton = new QPushButton(PersonWindow);
        SaveButton->setObjectName("SaveButton");
        SaveButton->setGeometry(QRect(180, 450, 83, 29));
        CancelButton = new QPushButton(PersonWindow);
        CancelButton->setObjectName("CancelButton");
        CancelButton->setGeometry(QRect(370, 450, 83, 29));

        retranslateUi(PersonWindow);

        QMetaObject::connectSlotsByName(PersonWindow);
    } // setupUi

    void retranslateUi(QDialog *PersonWindow)
    {
        PersonWindow->setWindowTitle(QCoreApplication::translate("PersonWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("PersonWindow", "ID", nullptr));
        label_2->setText(QCoreApplication::translate("PersonWindow", "H\341\273\215 t\303\252n", nullptr));
        label_3->setText(QCoreApplication::translate("PersonWindow", "\304\220\341\273\213a ch\341\273\211", nullptr));
        label_4->setText(QCoreApplication::translate("PersonWindow", "Ng\303\240y sinh", nullptr));
        label_5->setText(QCoreApplication::translate("PersonWindow", "T\303\254nh tr\341\272\241ng", nullptr));
        label_6->setText(QCoreApplication::translate("PersonWindow", "H\303\264n nh\303\242n", nullptr));
        label_7->setText(QCoreApplication::translate("PersonWindow", "Quan h\341\273\207 v\341\273\233i ch\341\273\247 h\341\273\231", nullptr));
        label_8->setText(QCoreApplication::translate("PersonWindow", "T\303\264n gi\303\241o", nullptr));
        label_9->setText(QCoreApplication::translate("PersonWindow", "Lo\341\272\241i c\306\260 tr\303\272", nullptr));
        ResidencecomboBox->setItemText(0, QCoreApplication::translate("PersonWindow", "Th\306\260\341\273\235ng tr\303\272", nullptr));
        ResidencecomboBox->setItemText(1, QCoreApplication::translate("PersonWindow", "T\341\272\241m tr\303\272", nullptr));

        OwnercheckBox->setText(QString());
        label_10->setText(QCoreApplication::translate("PersonWindow", "Ch\341\273\247 h\341\273\231", nullptr));
        SaveButton->setText(QCoreApplication::translate("PersonWindow", "L\306\260u", nullptr));
        CancelButton->setText(QCoreApplication::translate("PersonWindow", "Hu\341\273\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PersonWindow: public Ui_PersonWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSONWINDOW_H
