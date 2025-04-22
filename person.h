#ifndef PERSON_H
#define PERSON_H
#include <QDate>

class Person
{
protected:
    QString ID;
    QString Name;
    QString Gender;
    QString Address;
    QString permaAddr;
    QDate Birthdate;
    QString LiveStatus;
    QString MaritalStatus;
    QString Religion;
    QString ResidenceType;
    bool isHeadOfFamily;

public:

    Person();
    virtual ~Person();
    virtual void addPerson();
    virtual void deletePerson();
    virtual void editPerson();

    virtual QString getID() const;
    virtual QString getName() const;
    virtual QString getGender() const;
    virtual QString getAddress() const;
    virtual QString getPermaAddr() const;
    virtual QDate getBirthdate() const;
    virtual QString getLiveStatus() const;
    virtual QString getMaritalStatus() const;
    virtual QString getReligion() const;
    virtual QString getResidenceType() const;
    virtual bool getIsHeadOfFamily() const;

    virtual void setID(const QString& id);
    virtual void setName(const QString& name);
    virtual void setGender(const QString& gender);
    virtual void setAddress(const QString& address);
    virtual void setPermaAddr(const QString& paddr);
    virtual void setBirthdate(const QDate& birthdate);
    virtual void setLiveStatus(const QString& livestatus);
    virtual void setMaritalStatus(const QString& maritalstatus);
    virtual void setReligion(const QString& religion);
    virtual void setResidenceType() = 0;
    virtual void setIsHeadOfFamily(const bool& head);
};

#endif // PERSON_H
