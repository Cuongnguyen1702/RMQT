#include "family.h"

Family::Family() {}
Family::~Family() {}
//Get
QString Family::getOwnerID(){
    if(ownerID->getIsHeadOfFamily()==true)
        return ownerID->getID();
    else
        return "";
}
QString Family::getFamAddress(){
    return famAddress;
}
//Set
void Family::setOwnerID(QString& id){
    ownerID->setID(id);
}
void Family::setFamAddress(QString& addr){
    famAddress = addr;
}
