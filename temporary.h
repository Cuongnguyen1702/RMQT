#ifndef TEMPORARY_H
#define TEMPORARY_H

#include "person.h"

class Temporary : public Person
{
protected:
    QString tempAddr;
    QString familyID;
    QString origAddr;
    QDate startDate;
    QDate endDate;
public:
    Temporary();
    ~Temporary();

    QString getTempAddr();
    QString getFamilyID();
    QString getOrigAddr();
    QDate getStartDate();
    QDate getEndDate();

    void setTempAddr(const QString& taddr);
    void setFamilyID(const QString& fid);
    void setOrigAddr(const QString& oaddr);
    void setStartDate(const QDate& sdate);
    void setEndDate(const QDate& edate);
};

#endif // TEMPORARY_H
