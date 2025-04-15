#ifndef TOWN_H
#define TOWN_H
#include <QVector>
#include "family.h"

class Town
{
protected:
    QVector<Family*> families;
    int familyCount;
public:
    Town();
    ~Town();
    virtual int getFamilyCount() const;
};

#endif // TOWN_H
