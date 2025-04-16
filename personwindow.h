#ifndef PERSONWINDOW_H
#define PERSONWINDOW_H
#include "person.h"
#include "permanent.h"
#include "temporary.h"
#include <QDialog>
#include <QtCore>

namespace Ui {
class PersonWindow;
}

class PersonWindow : public QDialog
{
    Q_OBJECT

public:
    explicit PersonWindow(QWidget *parent = nullptr);
    ~PersonWindow();

private slots:
    void on_SaveButton_clicked();

    void on_CancelButton_clicked();

private:
    Ui::PersonWindow *ui;
    QVector<Person*> personList;
    QVector<Permanent*> permanentList;
    QVector<Temporary*> temporaryList;
    void MemInfo();
    void loadExistingPersons();
};

#endif // PERSONWINDOW_H
