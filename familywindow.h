#ifndef FAMILYWINDOW_H
#define FAMILYWINDOW_H

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

    void on_IDOwnerEdit_textChanged();

private:
    Ui::FamilyWindow *ui;
};

#endif // FAMILYWINDOW_H
