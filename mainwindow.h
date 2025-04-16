#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void showContextMenu(const QPoint &pos);
    void deleteFamilyByID(const QString &familyID);
    void on_AddFamily_clicked();

private:
    Ui::MainWindow *ui;
    void FamilyList();
};
#endif // MAINWINDOW_H
