#include "personwindow.h"
#include "ui_personwindow.h"
#include "temporary.h"
#include "permanent.h"
#include <QVector>
#include <QList>
#include <QStringList>
#include <QDir>
#include <QDebug>
#include <QStandardPaths>

PersonWindow::PersonWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::PersonWindow)
{
    ui->setupUi(this);
}

PersonWindow::~PersonWindow()
{
    delete ui;
}

void PersonWindow::loadExistingPersons()
{
    //Read CSV file to check to prevent duplicate someone
    QString filePath = QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation) + "/FamiliesInTown.csv";
    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    QTextStream in(&file);
    in.setEncoding(QStringConverter::Utf8);
    in.readLine(); // Skip header

    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList columns = line.split(";");

        if (columns.size() < 18)
            continue;

        QString id = columns[0];
        bool isHead = (columns[9] == "1");

        // Avoid duplicates
        auto existed = std::find_if(personList.begin(), personList.end(), [&](const Person* p){
            return p->getID() == id;
        });

        if (existed != personList.end())
            continue;

        QString residenceType = columns[8];
        if (residenceType == "Thường trú") {
            Permanent* p = new Permanent();
            p->setID(columns[0]);
            p->setName(columns[1]);
            p->setGender(columns[2]);
            p->setAddress(columns[3]);
            p->setBirthdate(QDate::fromString(columns[4], "MM-dd-yyyy"));
            p->setLiveStatus(columns[5]);
            p->setMaritalStatus(columns[6]);
            p->setReligion(columns[7]);
            p->setResidenceType();
            p->setIsHeadOfFamily(isHead);
            p->setPermaAddr(columns[10]);
            p->setFamilyID(columns[11]);
            p->setRelationshipToHead(columns[12]);
            p->setDateRegistered(QDate::fromString(columns[13], "MM-dd-yyyy"));

            permanentList.push_back(p);
            personList.push_back(p);
        }
        else if (residenceType == "Tạm trú") {
            Temporary* t = new Temporary();
            t->setID(columns[0]);
            t->setName(columns[1]);
            t->setGender(columns[2]);
            t->setAddress(columns[3]);
            t->setBirthdate(QDate::fromString(columns[4], "MM-dd-yyyy"));
            t->setLiveStatus(columns[5]);
            t->setMaritalStatus(columns[6]);
            t->setReligion(columns[7]);
            t->setResidenceType();
            t->setIsHeadOfFamily(isHead);
            t->setPermaAddr(columns[10]);
            t->setTempAddr(columns[14]);
            t->setOrigAddr(columns[15]);
            t->setStartDate(QDate::fromString(columns[16], "MM-dd-yyyy"));
            t->setEndDate(QDate::fromString(columns[17], "MM-dd-yyyy"));
            t->setFamilyID(columns[11]);

            temporaryList.push_back(t);
            personList.push_back(t);
        }
    }

    file.close();
}

void PersonWindow::MemInfo(){
    loadExistingPersons();//Check existed person to prevent duplicate ID

    QString id = ui->IDtextEdit->toPlainText();

    if(ui->ResidencecomboBox->currentIndex() == 0){  // Permanent
        // Check for existing person with this ID
        auto existedID = std::find_if(permanentList.begin(), permanentList.end(), [&](const Permanent* perma){
            return perma->getID() == id;
        });

        if(existedID == permanentList.end()){  // Only add if not already in the list
            Permanent *permas = new Permanent();
            permas->setID(id);
            permas->setName(ui->NametextEdit->toPlainText());
            permas->setGender(ui->GendercomboBox->currentIndex() == 0? "Nam" : "Nữ");
            permas->setAddress(ui->AddresstextEdit->toPlainText());
            permas->setBirthdate(ui->BirthdateEdit->date());
            permas->setLiveStatus(ui->LiveStatuscomboBox->currentIndex() == 0 ? "Còn sống" : (ui->LiveStatuscomboBox->currentIndex() == 1 ? "Đã chết" : "Mất tích"));
            permas->setMaritalStatus(ui->MartitalcomboBox->currentIndex() == 0?"Độc thân" : "Đã kết hôn");
            permas->setReligion(ui->ReligiontextEdit->toPlainText());
            permas->setResidenceType();
            permas->setIsHeadOfFamily(ui->OwnerCheckBox->isChecked());
            permas->setPermaAddr(ui->AddresstextEdit->toPlainText());
            permas->setFamilyID(permas->getIsHeadOfFamily() ? id : ui->FamIDtextEdit->toPlainText());
            permas->setRelationshipToHead(ui->RelationshiptextEdit->toPlainText());
            permas->setDateRegistered(ui->StartDateEdit->date());

            permanentList.push_back(permas);
            personList.push_back(permas);
        }

    } else {  // Temporary
        auto existedID = std::find_if(temporaryList.begin(), temporaryList.end(), [&](const Temporary* tempo){
            return tempo->getID() == id;
        });

        if(existedID == temporaryList.end()){
            Temporary *temps = new Temporary();
            temps->setID(id);
            temps->setName(ui->NametextEdit->toPlainText());
            temps->setGender(ui->GendercomboBox->currentIndex() == 0? "Nam" : "Nữ");
            temps->setAddress(ui->AddresstextEdit->toPlainText());
            temps->setBirthdate(ui->BirthdateEdit->date());
            temps->setLiveStatus(ui->LiveStatuscomboBox->currentIndex() == 0 ? "Còn sống" : (ui->LiveStatuscomboBox->currentIndex() == 1 ? "Đã chết" : "Mất tích"));
            temps->setMaritalStatus(ui->MartitalcomboBox->currentIndex() == 0?"Độc thân" : "Đã kết hôn");
            temps->setReligion(ui->ReligiontextEdit->toPlainText());
            temps->setResidenceType();
            temps->setIsHeadOfFamily(ui->OwnerCheckBox->isChecked());
            temps->setTempAddr(ui->AddresstextEdit->toPlainText());
            temps->setPermaAddr(ui->PermaAddrtextEdit->toPlainText());
            temps->setFamilyID(temps->getIsHeadOfFamily() ? id : ui->FamIDtextEdit->toPlainText());
            temps->setOrigAddr(ui->PermaAddrtextEdit->toPlainText());
            temps->setStartDate(ui->StartDateEdit->date());
            temps->setEndDate(ui->EndDateEdit->date());

            temporaryList.push_back(temps);
            personList.push_back(temps);
        }
    }

    qDebug() << "New ID added: " << id;
}

void PersonWindow::on_SaveButton_clicked()
{
    MemInfo();
    //Write CSV
    QString filePath = QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation) + "/FamiliesInTown.csv";
    QFile CSVFile(filePath);
    bool writeHeader = !QFile::exists(filePath);

    if (CSVFile.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text)) {
        // Write UTF-8 BOM if file is new
        if (writeHeader)
            CSVFile.write("\xEF\xBB\xBF");

        QTextStream stream(&CSVFile);
        stream.setEncoding(QStringConverter::Utf8);

        if (writeHeader) {
            stream << "ID;Name;Gender;Address;Birthdate;LiveStatus;MaritalStatus;Religion;ResidenceType;IsHeadOfFamily;";
            stream << "PermaAddr;FamilyID;RelationshipToHead;DateRegistered;";
            stream << "TempAddr;OrigAddr;StartDate;EndDate\n";
        }

        for (Person* person : personList) {
            stream << person->getID() << ";"
                   << person->getName() << ";"
                   << person->getGender() << ";"
                   << person->getAddress() << ";"
                   << person->getBirthdate().toString("MM-dd-yyyy") << ";"
                   << person->getLiveStatus() << ";"
                   << person->getMaritalStatus() << ";"
                   << person->getReligion() << ";"
                   << person->getResidenceType() << ";"
                   << (person->getIsHeadOfFamily() ? 1 : 0) << ";"
                   << person->getPermaAddr() << ";";

            if (Permanent* p = dynamic_cast<Permanent*>(person)) {
                stream << p->getFamilyID() << ";"
                       << p->getRelationshipToHead() << ";"
                       << p->getDateRegistered().toString("MM-dd-yyyy") << ";"
                       << ";;;\n";
            } else if (Temporary* t = dynamic_cast<Temporary*>(person)) {
                stream << t->getFamilyID() << ";";
                stream << ";;"; // Empty permanent fields
                stream << t->getTempAddr() << ";"
                       << t->getOrigAddr() << ";"
                       << t->getStartDate().toString("MM-dd-yyyy") << ";"
                       << t->getEndDate().toString("MM-dd-yyyy") << "\n";
            } else {
                stream << ";;;;;;;\n";
            }
        }

        CSVFile.close();
        qDebug() << "Saved CSV to: " << filePath;
    } else {
        qDebug() << "Failed to open file.";
    }
    this->close();
}

void PersonWindow::on_CancelButton_clicked()
{
    this->close();
}
