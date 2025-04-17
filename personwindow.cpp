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
        bool isHead = (columns[8] == "1");

        // Avoid duplicates
        auto existed = std::find_if(personList.begin(), personList.end(), [&](const Person* p){
            return p->getID() == id;
        });

        if (existed != personList.end())
            continue;

        QString residenceType = columns[7];
        if (residenceType == "Thường trú") {
            Permanent* p = new Permanent();
            p->setID(columns[0]);
            p->setName(columns[1]);
            p->setAddress(columns[2]);
            p->setBirthdate(QDate::fromString(columns[3], "MM-dd-yyyy"));
            p->setLiveStatus(columns[4]);
            p->setMaritalStatus(columns[5]);
            p->setReligion(columns[6]);
            p->setResidenceType(residenceType);
            p->setIsHeadOfFamily(isHead);
            p->setPermaAddr(columns[9]);
            p->setFamilyID(columns[10]);
            p->setRelationshipToHead(columns[11]);
            p->setDateRegistered(QDate::fromString(columns[12], "MM-dd-yyyy"));

            permanentList.push_back(p);
            personList.push_back(p);

            delete p;
        }
        else if (residenceType == "Tạm trú") {
            Temporary* t = new Temporary();
            t->setID(columns[0]);
            t->setName(columns[1]);
            t->setAddress(columns[2]);
            t->setBirthdate(QDate::fromString(columns[3], "MM-dd-yyyy"));
            t->setLiveStatus(columns[4]);
            t->setMaritalStatus(columns[5]);
            t->setReligion(columns[6]);
            t->setResidenceType(residenceType);
            t->setIsHeadOfFamily(isHead);
            t->setTempAddr(columns[13]);
            t->setOrigAddr(columns[14]);
            t->setStartDate(QDate::fromString(columns[15], "MM-dd-yyyy"));
            t->setEndDate(QDate::fromString(columns[16], "MM-dd-yyyy"));
            t->setFamilyID(columns[10]);

            temporaryList.push_back(t);
            personList.push_back(t);

            delete t;
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
            permas->setAddress(ui->AddresstextEdit->toPlainText());
            permas->setBirthdate(ui->BirthdateEdit->date());
            permas->setLiveStatus(ui->AlivetextEdit->toPlainText());
            permas->setMaritalStatus(ui->MaritaltextEdit->toPlainText());
            permas->setReligion(ui->ReligiontextEdit->toPlainText());
            permas->setResidenceType("Thường trú");
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
            temps->setAddress(ui->AddresstextEdit->toPlainText());
            temps->setBirthdate(ui->BirthdateEdit->date());
            temps->setLiveStatus(ui->AlivetextEdit->toPlainText());
            temps->setMaritalStatus(ui->MaritaltextEdit->toPlainText());
            temps->setReligion(ui->ReligiontextEdit->toPlainText());
            temps->setResidenceType("Tạm trú");
            temps->setIsHeadOfFamily(ui->OwnerCheckBox->isChecked());
            temps->setTempAddr(ui->AddresstextEdit->toPlainText());
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
            stream << "ID;Name;Address;Birthdate;LiveStatus;MaritalStatus;Religion;ResidenceType;IsHeadOfFamily;";
            stream << "PermaAddr;FamilyID;RelationshipToHead;DateRegistered;";
            stream << "TempAddr;OrigAddr;StartDate;EndDate\n";
        }

        for (Person* person : personList) {
            stream << person->getID() << ";"
                   << person->getName() << ";"
                   << person->getAddress() << ";"
                   << person->getBirthdate().toString("MM-dd-yyyy") << ";"
                   << person->getLiveStatus() << ";"
                   << person->getMaritalStatus() << ";"
                   << person->getReligion() << ";"
                   << person->getResidenceType() << ";"
                   << (person->getIsHeadOfFamily() ? 1 : 0) << ";";

            if (Permanent* p = dynamic_cast<Permanent*>(person)) {
                stream << p->getPermaAddr() << ";"
                       << p->getFamilyID() << ";"
                       << p->getRelationshipToHead() << ";"
                       << p->getDateRegistered().toString("MM-dd-yyyy") << ";"
                       << ";;;\n";
            } else if (Temporary* t = dynamic_cast<Temporary*>(person)) {
                stream << ";";
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
