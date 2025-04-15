#ifndef FAMILY_H
#define FAMILY_H
#include "person.h"

class Family
{
protected:
    Person* ownerID;
    QString famAddress;
public:
    Family();
    ~Family();
    QString getOwnerID();
    QString getFamAddress();
    void setOwnerID(QString& id);
    void setFamAddress(QString& addr);
};

#endif // FAMILY_H
