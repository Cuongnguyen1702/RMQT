#include "personwindow.h"
#include "ui_personwindow.h"
#include "person.h"
#include <QMessageBox>

PersonWindow::PersonWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::PersonWindow)
    , ownerID("")
{
    ui->setupUi(this);
}

PersonWindow::PersonWindow(const QString& ownerID, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::PersonWindow)
    , ownerID(ownerID)
{
    ui->setupUi(this);
}

PersonWindow::~PersonWindow()
{
    delete ui;
}

void PersonWindow::getPersonInfo(Person* person)
{
    person->setID(ui->IDtextEdit->toPlainText());
    person->setName(ui->NametextEdit->toPlainText());
    person->setIDofOwner(ownerID);
    person->setAddress(ui->AddresstextEdit->toPlainText());
    person->setBirthdate(ui->BirthdateEdit->date());
    person->setResidenceType(ui->ResidencecomboBox->currentIndex() == 0 ? "Thường trú" : "Tạm trú");
    person->setLiveStatus(ui->AlivetextEdit->toPlainText());
    person->setMaritalStatus(ui->MaritaltextEdit->toPlainText());
    person->setRelationship(ui->RelationshiptextEdit->toPlainText());
    person->setReligion(ui->ReligiontextEdit->toPlainText());
    person->setIsHeadOfFamily(ui->OwnercheckBox->isChecked());
}

void PersonWindow::on_SaveButton_clicked()
{
    QString id = ui->IDtextEdit->toPlainText().trimmed();
    QString name = ui->NametextEdit->toPlainText().trimmed();

    if(id.isEmpty() || name.isEmpty()) {
        QMessageBox::warning(this, "Lỗi", "Vui lòng nhập đầy đủ ID và tên");
        return;
    }

    Person* person = new Person();
    try {
        getPersonInfo(person);
        emit personAdded(person);
        accept();
    } catch(...) {
        delete person;
        QMessageBox::critical(this, "Lỗi", "Có lỗi xảy ra khi tạo thông tin");
    }
}
