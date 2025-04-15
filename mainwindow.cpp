#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "familywindow.h"
#include <QStandardItemModel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->FamilyListText->setStyleSheet("font-weight: bold; font-size: 16px");

    QStandardItemModel *columns = new QStandardItemModel();
    ui->FamilyTableView->setModel(columns);
    ui->FamilyTableView->horizontalHeader()->setStretchLastSection(true);
    columns->setColumnCount(3);
    columns->setHorizontalHeaderLabels({"ID chủ hộ", "Tên chủ hộ", "Địa chỉ"});
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_AddFamily_clicked()
{
    FamilyWindow *famw = new FamilyWindow();
    famw->show();
}
