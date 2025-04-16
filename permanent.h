#ifndef PERMANENT_H
#define PERMANENT_H

#include "person.h"

class Permanent : public Person
{
protected:
    QString permaAddr;
    QString familyID;
    QString relationshipToHead;
    QDate dateRegistered;
public:
    Permanent();
    ~Permanent();

    QString getPermaAddr();
    QString getFamilyID();
    QString getRelationshipToHead();
    QDate getDateRegistered();

    void setPermaAddr(const QString& paddr);
    void setFamilyID(const QString& fid);
    void setRelationshipToHead(const QString& rth);
    void setDateRegistered(const QDate& dreg);
};

#endif // PERMANENT_H
