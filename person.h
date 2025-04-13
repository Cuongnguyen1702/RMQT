#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <QDate>

class Person
{
protected:
    QString ID;
    QString Name;
    QString Address;
    QDate Birthdate;
    QString LiveStatus;
    QString MaritalStatus;
    QString Relationship;
    QString Religion;
    QString ResidenceType;

public:
    /*Person(QString id, QString name, QString address, QDate* birthdate, QString livestatus, QString maritalstatus,
           QString relationship, QString religion, QString restype);*/
    Person();
    virtual ~Person();
    virtual void addPerson();
    virtual void deletePerson();
    virtual void editPerson();

    virtual QString getID();
    virtual QString getName();
    virtual QString getAddress();
    virtual QDate getBirthdate();
    virtual QString getLiveStatus();
    virtual QString getMaritalStatus();
    virtual QString getRelationship();
    virtual QString getReligion();
    virtual QString getResidenceType();

    virtual void setID(const QString& id);
    virtual void setName(const QString& name);
    virtual void setAddress(const QString& address);
    virtual void setBirthdate(const QDate& birthdate);
    virtual void setLiveStatus(const QString& livestatus);
    virtual void setMaritalStatus(const QString& maritalstatus);
    virtual void setRelationship(const QString& relationship);
    virtual void setReligion(const QString& religion);
    virtual void setResidenceType(const QString& restype);
};

#endif // PERSON_H
