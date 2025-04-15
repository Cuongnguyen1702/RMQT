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
QString Person::getID(){
    return ID;
}

QString Person::getIDofOwner(){
    return IDofOwner;
}


QString Person::getName(){
    return Name;
}

QString Person::getAddress(){
    return Address;
}

QDate Person::getBirthdate(){
    return Birthdate;
}

QString Person::getLiveStatus(){
    return LiveStatus;
}

QString Person::getMaritalStatus(){
    return MaritalStatus;
}

QString Person::getRelationship(){
    return Relationship;
}

QString Person::getReligion(){
    return Religion;
}
QString Person::getResidenceType(){
    return ResidenceType;
}
bool Person::getIsHeadOfFamily(){
    return isHeadOfFamily;
}
//Set
void Person::setID(const QString& id){
    ID = id;
}

void Person::setIDofOwner(const QString& ido){
    IDofOwner = ido;
}

void Person::setName(const QString& name){
    Name = name;
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

void Person::setRelationship(const QString& relationship){
    Relationship = relationship;
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
