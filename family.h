#ifndef FAMILY_H
#define FAMILY_H
#include "person.h"
#include <QVector>

class Family
{
protected:
    Person* ownerID;
    QString famAddress;
    QVector<Person*> members;
public:
    Family();
    ~Family();
    Person* getOwner();
    QString getOwnerID();
    QString getFamAddress();
    void setOwnerID(QString& id);
    void setFamAddress(QString& addr);
    void addMember(Person* person);
    const QVector<Person*>& getMembers() const;
};

#endif // FAMILY_H
