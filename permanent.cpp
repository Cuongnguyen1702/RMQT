#include "permanent.h"

Permanent::Permanent() {}
Permanent::~Permanent() {}

QString Permanent::getFamilyID(){
    return familyID;
}

QString Permanent::getRelationshipToHead(){
    return relationshipToHead;
}

QDate Permanent::getDateRegistered(){
    return dateRegistered;
}

void Permanent::setResidenceType(){
    ResidenceType = "Thường trú";
}

void Permanent::setFamilyID(const QString& fid){
    familyID = fid;
}

void Permanent::setRelationshipToHead(const QString& rth){
    relationshipToHead = rth;
}

void Permanent::setDateRegistered(const QDate& dreg){
    dateRegistered = dreg;
}
