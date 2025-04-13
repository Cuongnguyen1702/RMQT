#include "familywindow.h"
#include "ui_familywindow.h"
#include "personwindow.h"
#include <QMessageBox>

FamilyWindow::FamilyWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::FamilyWindow)
{
    ui->setupUi(this);
}

FamilyWindow::~FamilyWindow()
{
    delete ui;
}

void FamilyWindow::on_AddFamilyButton_clicked()
{
    QString ownerID = ui->IDOwnerEdit->toPlainText();
    QMessageBox::information(nullptr, "ID chủ hộ", ownerID);
}

void FamilyWindow::on_IDOwnerEdit_textChanged()
{

}


void FamilyWindow::on_AddFamilyMemberButton_clicked()
{
    PersonWindow *perwnd = new PersonWindow();
    perwnd->show();
}

