#ifndef PERSON_H
#define PERSON_H
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
    QString Religion;
    QString ResidenceType;
    bool isHeadOfFamily;

public:
    /*Person(QString id, QString name, QString address, QDate* birthdate, QString livestatus, QString maritalstatus,
           QString relationship, QString religion, QString restype);*/
    Person();
    virtual ~Person();
    virtual void addPerson();
    virtual void deletePerson();
    virtual void editPerson();

    virtual QString getID() const;
    virtual QString getName() const;
    virtual QString getAddress() const;
    virtual QDate getBirthdate() const;
    virtual QString getLiveStatus() const;
    virtual QString getMaritalStatus() const;
    virtual QString getReligion() const;
    virtual QString getResidenceType() const;
    virtual bool getIsHeadOfFamily() const;

    virtual void setID(const QString& id);
    virtual void setName(const QString& name);
    virtual void setAddress(const QString& address);
    virtual void setBirthdate(const QDate& birthdate);
    virtual void setLiveStatus(const QString& livestatus);
    virtual void setMaritalStatus(const QString& maritalstatus);
    virtual void setReligion(const QString& religion);
    virtual void setResidenceType(const QString& restype);
    virtual void setIsHeadOfFamily(const bool& head);
};

#endif // PERSON_H
