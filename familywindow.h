#ifndef FAMILYWINDOW_H
#define FAMILYWINDOW_H

#include <QMainWindow>

namespace Ui {
class FamilyWindow;
}

class FamilyWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit FamilyWindow(QWidget *parent = nullptr);
    ~FamilyWindow();

private slots:
    void showContextMenu(const QPoint &pos);
    void deleteFromCSV(const QString& id);
    void on_FamilyMemButton_clicked();

    void on_AddFamilyButton_clicked();

private:
    Ui::FamilyWindow *ui;
    void FamilyMemList();
};

#endif // FAMILYWINDOW_H
