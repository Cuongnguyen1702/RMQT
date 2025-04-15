#include "familywindow.h"
#include "ui_familywindow.h"
#include "personwindow.h"
#include "person.h"
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
    QString ownerID = ui->IDOwnerEdit->toPlainText().trimmed();
    if(ownerID.isEmpty()) {
        QMessageBox::warning(this, "Lỗi", "Vui lòng nhập ID chủ hộ");
        return;
    }

    family.setOwnerID(ownerID);
    family.getOwner()->setIsHeadOfFamily(true);
    QMessageBox::information(this, "Thành công", "Đã thiết lập chủ hộ: " + ownerID);
}

void FamilyWindow::on_AddFamilyMemberButton_clicked()
{
    QString ownerID = ui->IDOwnerEdit->toPlainText();
    PersonWindow *perwnd = new PersonWindow(ownerID, this);
    connect(perwnd, &PersonWindow::personAdded, this, &FamilyWindow::onPersonAdded);
    perwnd->exec();
}

void FamilyWindow::onPersonAdded(Person* person)
{
    if(person->getID().isEmpty() || person->getName().isEmpty()){
        QMessageBox::warning(this, "Lỗi", "Vui lòng nhập đầy đủ thông tin thành viên");
        delete person;
        return;
    }
    family.addMember(person);
    QMessageBox::information(this, "Thành công", "Đã thêm thành viên: " + person->getName() + "\nVào gia đình có chủ hộ: " + family.getOwnerID());
}
