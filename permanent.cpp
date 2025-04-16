#include "permanent.h"

Permanent::Permanent() {}
Permanent::~Permanent() {}

QString Permanent::getPermaAddr(){
    return permaAddr;
}

QString Permanent::getFamilyID(){
    return familyID;
}

QString Permanent::getRelationshipToHead(){
    return relationshipToHead;
}

QDate Permanent::getDateRegistered(){
    return dateRegistered;
}

void Permanent::setPermaAddr(const QString& paddr){
    permaAddr = paddr;
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
