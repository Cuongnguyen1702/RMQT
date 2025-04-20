#include "temporary.h"

Temporary::Temporary() {}
Temporary::~Temporary(){}

QString Temporary::getTempAddr(){
    return tempAddr;
}

QString Temporary::getFamilyID(){
    return familyID;
}

QString Temporary::getOrigAddr(){
    return origAddr;
}

QDate Temporary::getStartDate(){
    return startDate;
}

QDate Temporary::getEndDate(){
    return endDate;
}

void Temporary::setResidenceType(){
    ResidenceType = "Tạm trú";
}
void Temporary::setTempAddr(const QString& taddr){
    tempAddr = taddr;
}
void Temporary::setFamilyID(const QString& fid){
    familyID = fid;
}
void Temporary::setOrigAddr(const QString& oaddr){
    origAddr = oaddr;
}
void Temporary::setStartDate(const QDate& sdate){
    startDate = sdate;
}
void Temporary::setEndDate(const QDate& edate){
    endDate = edate;
}
