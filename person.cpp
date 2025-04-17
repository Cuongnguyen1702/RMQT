#include "person.h"
#include <QDate>
//Constructor
/*Person::Person(QString id, QString name, QString address, QDate* birthdate, QString livestatus, QString maritalstatus,
                QString relationship, QString religion, QString restype) {
    ID = "";
    Name = "";
    Address = "";
    Birthdate = birthdate->currentDate();
    LiveStatus = "";
    MaritalStatus = "";
    Relationship = "";
    Religion = "";
    ResidenceType = "";
}*/
Person::Person(){}
Person::~Person(){}
void Person::addPerson(){}
void Person::deletePerson(){}
void Person::editPerson(){}
//Get
QString Person::getID() const{
    return ID;
}

QString Person::getName() const {
    return Name;
}

QString Person::getGender() const {
    return Gender;
}

QString Person::getAddress() const{
    return Address;
}

QDate Person::getBirthdate() const{
    return Birthdate;
}

QString Person::getLiveStatus() const{
    return LiveStatus;
}

QString Person::getMaritalStatus() const{
    return MaritalStatus;
}

QString Person::getReligion() const{
    return Religion;
}
QString Person::getResidenceType() const{
    return ResidenceType;
}
bool Person::getIsHeadOfFamily() const{
    return isHeadOfFamily;
}
//Set
void Person::setID(const QString& id){
    ID = id;
}

void Person::setName(const QString& name){
    Name = name;
}

void Person::setGender(const QString& gender){
    Gender = gender;
}

void Person::setAddress(const QString& address){
    Address = address;
}

void Person::setBirthdate(const QDate& birthdate){
    Birthdate = birthdate;
}

void Person::setLiveStatus(const QString& livestatus){
    LiveStatus = livestatus;
}

void Person::setMaritalStatus(const QString& maritalstatus){
    MaritalStatus = maritalstatus;
}

void Person::setReligion(const QString& religion){
    Religion = religion;
}
void Person::setResidenceType(const QString& restype){
    ResidenceType = restype;
}
void Person::setIsHeadOfFamily(const bool& head){
    isHeadOfFamily = head;
}
