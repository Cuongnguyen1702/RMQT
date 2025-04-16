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
    QLabel *IDlabel;
    QLabel *Namelabel;
    QLabel *CurrAddrlabel;
    QLabel *Birthdatelabel;
    QLabel *Religionlabel;
    QLabel *Alivelabel;
    QLabel *Maritallabel;
    QLabel *Relationshiplabel;
    QLabel *IsOwnerlabel;
    QLabel *Residencelabel;
    QLabel *PermaAddrlabel;
    QLabel *TempAddrlabel;
    QCheckBox *OwnerCheckBox;
    QComboBox *ResidencecomboBox;
    QTextEdit *IDtextEdit;
    QTextEdit *NametextEdit;
    QTextEdit *AddresstextEdit;
    QTextEdit *PermaAddrtextEdit;
    QTextEdit *TempAddrtextEdit;
    QTextEdit *ReligiontextEdit;
    QTextEdit *AlivetextEdit;
    QTextEdit *MaritaltextEdit;
    QTextEdit *RelationshiptextEdit;
    QDateEdit *BirthdateEdit;
    QPushButton *SaveButton;
    QPushButton *CancelButton;
    QLabel *StartDatelabel;
    QLabel *EndDatelabel;
    QDateEdit *StartDateEdit;
    QDateEdit *EndDateEdit;
    QLabel *FamIDlabel;
    QTextEdit *FamIDtextEdit;

    void setupUi(QDialog *PersonWindow)
    {
        if (PersonWindow->objectName().isEmpty())
            PersonWindow->setObjectName("PersonWindow");
        PersonWindow->resize(800, 600);
        IDlabel = new QLabel(PersonWindow);
        IDlabel->setObjectName("IDlabel");
        IDlabel->setGeometry(QRect(20, 20, 63, 20));
        Namelabel = new QLabel(PersonWindow);
        Namelabel->setObjectName("Namelabel");
        Namelabel->setGeometry(QRect(20, 50, 63, 20));
        CurrAddrlabel = new QLabel(PersonWindow);
        CurrAddrlabel->setObjectName("CurrAddrlabel");
        CurrAddrlabel->setGeometry(QRect(20, 80, 91, 20));
        Birthdatelabel = new QLabel(PersonWindow);
        Birthdatelabel->setObjectName("Birthdatelabel");
        Birthdatelabel->setGeometry(QRect(20, 170, 71, 20));
        Religionlabel = new QLabel(PersonWindow);
        Religionlabel->setObjectName("Religionlabel");
        Religionlabel->setGeometry(QRect(20, 200, 71, 20));
        Alivelabel = new QLabel(PersonWindow);
        Alivelabel->setObjectName("Alivelabel");
        Alivelabel->setGeometry(QRect(20, 230, 71, 20));
        Maritallabel = new QLabel(PersonWindow);
        Maritallabel->setObjectName("Maritallabel");
        Maritallabel->setGeometry(QRect(20, 260, 71, 20));
        Relationshiplabel = new QLabel(PersonWindow);
        Relationshiplabel->setObjectName("Relationshiplabel");
        Relationshiplabel->setGeometry(QRect(20, 290, 131, 20));
        IsOwnerlabel = new QLabel(PersonWindow);
        IsOwnerlabel->setObjectName("IsOwnerlabel");
        IsOwnerlabel->setGeometry(QRect(20, 360, 63, 20));
        Residencelabel = new QLabel(PersonWindow);
        Residencelabel->setObjectName("Residencelabel");
        Residencelabel->setGeometry(QRect(20, 320, 81, 20));
        PermaAddrlabel = new QLabel(PersonWindow);
        PermaAddrlabel->setObjectName("PermaAddrlabel");
        PermaAddrlabel->setGeometry(QRect(20, 110, 131, 20));
        TempAddrlabel = new QLabel(PersonWindow);
        TempAddrlabel->setObjectName("TempAddrlabel");
        TempAddrlabel->setGeometry(QRect(20, 140, 111, 20));
        OwnerCheckBox = new QCheckBox(PersonWindow);
        OwnerCheckBox->setObjectName("OwnerCheckBox");
        OwnerCheckBox->setGeometry(QRect(170, 360, 93, 26));
        ResidencecomboBox = new QComboBox(PersonWindow);
        ResidencecomboBox->addItem(QString());
        ResidencecomboBox->addItem(QString());
        ResidencecomboBox->setObjectName("ResidencecomboBox");
        ResidencecomboBox->setGeometry(QRect(170, 320, 111, 28));
        IDtextEdit = new QTextEdit(PersonWindow);
        IDtextEdit->setObjectName("IDtextEdit");
        IDtextEdit->setGeometry(QRect(150, 20, 281, 21));
        NametextEdit = new QTextEdit(PersonWindow);
        NametextEdit->setObjectName("NametextEdit");
        NametextEdit->setGeometry(QRect(150, 50, 281, 21));
        AddresstextEdit = new QTextEdit(PersonWindow);
        AddresstextEdit->setObjectName("AddresstextEdit");
        AddresstextEdit->setGeometry(QRect(150, 80, 281, 21));
        PermaAddrtextEdit = new QTextEdit(PersonWindow);
        PermaAddrtextEdit->setObjectName("PermaAddrtextEdit");
        PermaAddrtextEdit->setGeometry(QRect(150, 110, 281, 21));
        TempAddrtextEdit = new QTextEdit(PersonWindow);
        TempAddrtextEdit->setObjectName("TempAddrtextEdit");
        TempAddrtextEdit->setGeometry(QRect(150, 140, 281, 21));
        ReligiontextEdit = new QTextEdit(PersonWindow);
        ReligiontextEdit->setObjectName("ReligiontextEdit");
        ReligiontextEdit->setGeometry(QRect(150, 200, 281, 21));
        AlivetextEdit = new QTextEdit(PersonWindow);
        AlivetextEdit->setObjectName("AlivetextEdit");
        AlivetextEdit->setGeometry(QRect(150, 230, 281, 21));
        MaritaltextEdit = new QTextEdit(PersonWindow);
        MaritaltextEdit->setObjectName("MaritaltextEdit");
        MaritaltextEdit->setGeometry(QRect(150, 260, 281, 21));
        RelationshiptextEdit = new QTextEdit(PersonWindow);
        RelationshiptextEdit->setObjectName("RelationshiptextEdit");
        RelationshiptextEdit->setGeometry(QRect(160, 290, 281, 21));
        BirthdateEdit = new QDateEdit(PersonWindow);
        BirthdateEdit->setObjectName("BirthdateEdit");
        BirthdateEdit->setGeometry(QRect(160, 170, 110, 29));
        SaveButton = new QPushButton(PersonWindow);
        SaveButton->setObjectName("SaveButton");
        SaveButton->setGeometry(QRect(210, 470, 131, 91));
        CancelButton = new QPushButton(PersonWindow);
        CancelButton->setObjectName("CancelButton");
        CancelButton->setGeometry(QRect(372, 468, 121, 91));
        StartDatelabel = new QLabel(PersonWindow);
        StartDatelabel->setObjectName("StartDatelabel");
        StartDatelabel->setGeometry(QRect(20, 390, 131, 20));
        EndDatelabel = new QLabel(PersonWindow);
        EndDatelabel->setObjectName("EndDatelabel");
        EndDatelabel->setGeometry(QRect(20, 420, 141, 20));
        StartDateEdit = new QDateEdit(PersonWindow);
        StartDateEdit->setObjectName("StartDateEdit");
        StartDateEdit->setGeometry(QRect(170, 390, 110, 29));
        EndDateEdit = new QDateEdit(PersonWindow);
        EndDateEdit->setObjectName("EndDateEdit");
        EndDateEdit->setGeometry(QRect(170, 420, 110, 29));
        FamIDlabel = new QLabel(PersonWindow);
        FamIDlabel->setObjectName("FamIDlabel");
        FamIDlabel->setGeometry(QRect(340, 320, 101, 20));
        FamIDtextEdit = new QTextEdit(PersonWindow);
        FamIDtextEdit->setObjectName("FamIDtextEdit");
        FamIDtextEdit->setGeometry(QRect(450, 320, 221, 21));

        retranslateUi(PersonWindow);

        QMetaObject::connectSlotsByName(PersonWindow);
    } // setupUi

    void retranslateUi(QDialog *PersonWindow)
    {
        PersonWindow->setWindowTitle(QCoreApplication::translate("PersonWindow", "Dialog", nullptr));
        IDlabel->setText(QCoreApplication::translate("PersonWindow", "CCCD", nullptr));
        Namelabel->setText(QCoreApplication::translate("PersonWindow", "H\341\273\215 t\303\252n", nullptr));
        CurrAddrlabel->setText(QCoreApplication::translate("PersonWindow", "N\306\241i \341\273\237 hi\341\273\207n t\341\272\241i", nullptr));
        Birthdatelabel->setText(QCoreApplication::translate("PersonWindow", "Ng\303\240y sinh", nullptr));
        Religionlabel->setText(QCoreApplication::translate("PersonWindow", "T\303\264n gi\303\241o", nullptr));
        Alivelabel->setText(QCoreApplication::translate("PersonWindow", "T\303\254nh tr\341\272\241ng", nullptr));
        Maritallabel->setText(QCoreApplication::translate("PersonWindow", "H\303\264n nh\303\242n", nullptr));
        Relationshiplabel->setText(QCoreApplication::translate("PersonWindow", "Quan h\341\273\207 v\341\273\233i ch\341\273\247 h\341\273\231", nullptr));
        IsOwnerlabel->setText(QCoreApplication::translate("PersonWindow", "Ch\341\273\247 h\341\273\231", nullptr));
        Residencelabel->setText(QCoreApplication::translate("PersonWindow", "Lo\341\272\241i c\306\260 tr\303\272", nullptr));
        PermaAddrlabel->setText(QCoreApplication::translate("PersonWindow", "\304\220\341\273\213a ch\341\273\211 th\306\260\341\273\235ng tr\303\272", nullptr));
        TempAddrlabel->setText(QCoreApplication::translate("PersonWindow", "\304\220\341\273\213a ch\341\273\211 t\341\272\241m tr\303\272", nullptr));
        OwnerCheckBox->setText(QString());
        ResidencecomboBox->setItemText(0, QCoreApplication::translate("PersonWindow", "Th\306\260\341\273\235ng tr\303\272", nullptr));
        ResidencecomboBox->setItemText(1, QCoreApplication::translate("PersonWindow", "T\341\272\241m tr\303\272", nullptr));

        SaveButton->setText(QCoreApplication::translate("PersonWindow", "L\306\260u", nullptr));
        CancelButton->setText(QCoreApplication::translate("PersonWindow", "Hu\341\273\267", nullptr));
        StartDatelabel->setText(QCoreApplication::translate("PersonWindow", "Ng\303\240y \304\221\304\203ng k\303\255 c\306\260 tr\303\272", nullptr));
        EndDatelabel->setText(QCoreApplication::translate("PersonWindow", "Ng\303\240y h\341\272\277t h\341\272\241n c\306\260 tr\303\272", nullptr));
        FamIDlabel->setText(QCoreApplication::translate("PersonWindow", "CCCD ch\341\273\247 h\341\273\231", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PersonWindow: public Ui_PersonWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSONWINDOW_H
