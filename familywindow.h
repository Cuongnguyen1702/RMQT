#ifndef FAMILYWINDOW_H
#define FAMILYWINDOW_H
#include "family.h"
#include <QDialog>

namespace Ui {
class FamilyWindow;
}

class FamilyWindow : public QDialog
{
    Q_OBJECT

public:
    explicit FamilyWindow(QWidget *parent = nullptr);
    ~FamilyWindow();

private slots:
    void on_AddFamilyMemberButton_clicked();

    void on_AddFamilyButton_clicked();

    void onPersonAdded(Person* person);

private:
    Ui::FamilyWindow *ui;
    Family family;
};

#endif // FAMILYWINDOW_H
