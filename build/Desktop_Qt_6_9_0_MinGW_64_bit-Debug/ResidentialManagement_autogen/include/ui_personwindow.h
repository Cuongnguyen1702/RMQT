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
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_PersonWindow
{
public:
    QDialogButtonBox *buttonBox;
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
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_3;
    QTextEdit *textEdit_4;
    QTextEdit *textEdit_5;
    QTextEdit *textEdit_6;
    QTextEdit *textEdit_7;
    QDateEdit *dateEdit;
    QComboBox *comboBox;

    void setupUi(QDialog *PersonWindow)
    {
        if (PersonWindow->objectName().isEmpty())
            PersonWindow->setObjectName("PersonWindow");
        PersonWindow->resize(661, 552);
        buttonBox = new QDialogButtonBox(PersonWindow);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(250, 500, 341, 21));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
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
        textEdit_2 = new QTextEdit(PersonWindow);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(120, 40, 231, 21));
        textEdit_3 = new QTextEdit(PersonWindow);
        textEdit_3->setObjectName("textEdit_3");
        textEdit_3->setGeometry(QRect(120, 70, 231, 21));
        textEdit_4 = new QTextEdit(PersonWindow);
        textEdit_4->setObjectName("textEdit_4");
        textEdit_4->setGeometry(QRect(120, 130, 231, 21));
        textEdit_5 = new QTextEdit(PersonWindow);
        textEdit_5->setObjectName("textEdit_5");
        textEdit_5->setGeometry(QRect(120, 160, 231, 21));
        textEdit_6 = new QTextEdit(PersonWindow);
        textEdit_6->setObjectName("textEdit_6");
        textEdit_6->setGeometry(QRect(160, 190, 231, 21));
        textEdit_7 = new QTextEdit(PersonWindow);
        textEdit_7->setObjectName("textEdit_7");
        textEdit_7->setGeometry(QRect(100, 220, 231, 21));
        dateEdit = new QDateEdit(PersonWindow);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setGeometry(QRect(120, 100, 110, 29));
        comboBox = new QComboBox(PersonWindow);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(110, 250, 111, 28));

        retranslateUi(PersonWindow);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, PersonWindow, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, PersonWindow, qOverload<>(&QDialog::reject));

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
        comboBox->setItemText(0, QCoreApplication::translate("PersonWindow", "Th\306\260\341\273\235ng tr\303\272", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("PersonWindow", "T\341\272\241m tr\303\272", nullptr));

    } // retranslateUi

};

namespace Ui {
    class PersonWindow: public Ui_PersonWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSONWINDOW_H
