#ifndef TOWN_H
#define TOWN_H
#include <string>

class Town
{
protected:
    std::string nameTown;
    int familyNum;
public:
    Town();
    ~Town();
    virtual void showInfo();
    virtual void addFamily();
    virtual std::string getName() const;
    virtual void setName(const std::string& name);
    virtual int getFamilyNum() const;
};

#endif // TOWN_H
