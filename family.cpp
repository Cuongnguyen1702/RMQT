#include "family.h"

Family::Family() : ownerID(new Person()) {}
Family::~Family() {
    delete ownerID;
    qDeleteAll(members);
}
//Get
Person* Family::getOwner() {
    return ownerID;
}

QString Family::getOwnerID() {
    return ownerID ? ownerID->getID() : QString();
}
QString Family::getFamAddress(){
    return famAddress;
}
//Set
void Family::setOwnerID(QString& id){
    if (!ownerID) {
        ownerID = new Person();
    }
    ownerID->setID(id);
    ownerID->setIsHeadOfFamily(true);
}
void Family::setFamAddress(QString& addr){
    famAddress = addr;
}
void Family::addMember(Person* person) {
    members.append(person);
}

const QVector<Person*>& Family::getMembers() const {
    return members;
}
