#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <QDate>

class Person
{
protected:
    std::string ID;
    std::string Name;
    std::string Address;
    QDate Birthdate;
    std::string LiveStatus;
    std::string MaritalStatus;
    std::string Relationship;
    std::string Religion;

public:
    Person();
    virtual ~Person();
    virtual void addPerson();
    virtual void deletePerson();
    virtual void editPerson();

    virtual std::string getID();
    virtual std::string getName();
    virtual std::string getAddress();
    virtual QDate getBirthdate();
    virtual std::string getLiveStatus();
    virtual std::string getMaritalStatus();
    virtual std::string getRelationship();
    virtual std::string getReligion();

    virtual void setID(const std::string& id);
    virtual void setName(const std::string& name);
    virtual void setAddress(const std::string& address);
    virtual void setBirthdate(const QDate& birthdate);
    virtual void setLiveStatus(const std::string& livestatus);
    virtual void setMaritalStatus(const std::string& maritalstatus);
    virtual void setRelationship(const std::string& relationship);
    virtual void setReligion(const std::string& religion);
};

#endif // PERSON_H
