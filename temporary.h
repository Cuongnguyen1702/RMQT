#ifndef TEMPORARY_H
#define TEMPORARY_H

#include "person.h"

class Temporary : public Person
{
protected:
    QString familyID;
    QString tempAddr;
    QString origAddr;
    QDate startDate;
    QDate endDate;
public:
    Temporary();
    ~Temporary();

    QString getFamilyID();
    QString getTempAddr();
    QString getOrigAddr();
    QDate getStartDate();
    QDate getEndDate();

    void setResidenceType();
    void setFamilyID(const QString& fid);
    void setTempAddr(const QString& taddr);
    void setOrigAddr(const QString& oaddr);
    void setStartDate(const QDate& sdate);
    void setEndDate(const QDate& edate);
};

#endif // TEMPORARY_H
