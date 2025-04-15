#ifndef PERSONWINDOW_H
#define PERSONWINDOW_H
#include "person.h"
#include <QDialog>

namespace Ui {
class PersonWindow;
}

class PersonWindow : public QDialog
{
    Q_OBJECT

public:
    explicit PersonWindow(QWidget *parent = nullptr);
    explicit PersonWindow(const QString& ownerID, QWidget *parent = nullptr);
    ~PersonWindow();

signals:
    void personAdded(Person* person);

private slots:

    void on_SaveButton_clicked();

private:
    Ui::PersonWindow *ui;
    QString ownerID;
    void getPersonInfo(Person* person);
};

#endif // PERSONWINDOW_H
