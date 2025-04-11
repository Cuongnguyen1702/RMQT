#include "person.h"

Person::Person() {}
Person::~Person(){}
void Person::addPerson(){}
void Person::deletePerson(){}
void Person::editPerson(){}
//Get
std::string Person::getID(){
    return ID;
}

std::string Person::getName(){
    return Name;
}

std::string Person::getAddress(){
    return Address;
}

QDate Person::getBirthdate(){
    return Birthdate;
}

std::string Person::getLiveStatus(){
    return LiveStatus;
}

std::string Person::getMaritalStatus(){
    return MaritalStatus;
}

std::string Person::getRelationship(){
    return Relationship;
}

std::string Person::getReligion(){
    return Religion;
}
std::string Person::getResidenceType(){
    return ResidenceType;
}
//Set
void Person::setID(const std::string& id){
    ID = id;
}

void Person::setName(const std::string& name){
    Name = name;
}

void Person::setAddress(const std::string& address){
    Address = address;
}

void Person::setBirthdate(const QDate& birthdate){
    Birthdate = birthdate;
}

void Person::setLiveStatus(const std::string& livestatus){
    LiveStatus = livestatus;
}

void Person::setMaritalStatus(const std::string& maritalstatus){
    MaritalStatus = maritalstatus;
}

void Person::setRelationship(const std::string& relationship){
    Relationship = relationship;
}

void Person::setReligion(const std::string& religion){
    Religion = religion;
}
void Person::setResidenceType(const std::string& restype){
    ResidenceType = restype;
}
