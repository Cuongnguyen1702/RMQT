#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "familywindow.h"
#include "town.h"
#include <QStandardItemModel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    FamilyList();
    ui->FamilyListText->setStyleSheet("font-weight: bold; font-size: 16px");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::FamilyList(){
    Town *townInfo = new Town();
    //ui->FamilyTableWidget->setRowCount(townInfo->getFamilyCount());
    ui->FamilyTableWidget->setRowCount(20);
    ui->FamilyTableWidget->setColumnCount(3);

    QStringList hlabels;
    hlabels << "CCCD chủ hộ" << "Họ và tên" << "Địa chỉ";
    ui->FamilyTableWidget->setHorizontalHeaderLabels(hlabels);




    QStringList names = {
        "Nguyễn Văn An", "Trần Thị Bình", "Lê Hoàng Cường", "Phạm Thị Dung",
        "Hoàng Văn Đạt", "Vũ Thị Mai", "Đỗ Ngọc Minh", "Bùi Thị Hương",
        "Đặng Văn Phúc", "Ngô Thị Lan", "Trương Văn Sơn", "Lý Thị Hà",
        "Nguyễn Đình Tùng", "Phan Thị Thu", "Hồ Văn Nhật", "Chu Thị Ngọc",
        "Mai Văn Hải", "Đinh Thị Linh", "Võ Văn Tuấn", "Lưu Thị Kim"
    };

    QStringList ids = {
        "001", "002", "003", "004", "005", "006", "007", "008", "009", "010",
        "011", "012", "013", "014", "015", "016", "017", "018", "019", "020"
    };


    QStringList addresses = {
        "12/15 Nguyễn Văn Linh, Tân Phong, Q7, TP.HCM",
        "24/15 Nguyễn Văn Linh, Tân Phong, Q7, TP.HCM",
        "36/15 Nguyễn Văn Linh, Tân Phong, Q7, TP.HCM",
        "45/15 Nguyễn Văn Linh, Tân Phong, Q7, TP.HCM",
        "57/15 Nguyễn Văn Linh, Tân Phong, Q7, TP.HCM",
        "68/15 Nguyễn Văn Linh, Tân Phong, Q7, TP.HCM",
        "72/15 Nguyễn Văn Linh, Tân Phong, Q7, TP.HCM",
        "83/15 Nguyễn Văn Linh, Tân Phong, Q7, TP.HCM",
        "94/15 Nguyễn Văn Linh, Tân Phong, Q7, TP.HCM",
        "105/15 Nguyễn Văn Linh, Tân Phong, Q7, TP.HCM",
        "112/15 Nguyễn Văn Linh, Tân Phong, Q7, TP.HCM",
        "124/15 Nguyễn Văn Linh, Tân Phong, Q7, TP.HCM",
        "136/15 Nguyễn Văn Linh, Tân Phong, Q7, TP.HCM",
        "145/15 Nguyễn Văn Linh, Tân Phong, Q7, TP.HCM",
        "157/15 Nguyễn Văn Linh, Tân Phong, Q7, TP.HCM",
        "168/15 Nguyễn Văn Linh, Tân Phong, Q7, TP.HCM",
        "172/15 Nguyễn Văn Linh, Tân Phong, Q7, TP.HCM",
        "183/15 Nguyễn Văn Linh, Tân Phong, Q7, TP.HCM",
        "194/15 Nguyễn Văn Linh, Tân Phong, Q7, TP.HCM",
        "205/15 Nguyễn Văn Linh, Tân Phong, Q7, TP.HCM"
    };

    // insert Data
    for (int i = 0; i < ui->FamilyTableWidget->rowCount(); i++) {
        ui->FamilyTableWidget->setItem(i, 0, new QTableWidgetItem(ids[i]));
        ui->FamilyTableWidget->setItem(i, 1, new QTableWidgetItem(names[i]));
        ui->FamilyTableWidget->setItem(i, 2, new QTableWidgetItem(addresses[i]));
    }


    ui->FamilyTableWidget->setStyleSheet(
        "QTableWidget {"
        "   font-size: 12pt;"
        "   selection-background-color: #3498db;"
        "}"
        "QHeaderView::section {"
        "   background-color: #2980b9;"
        "   color: white;"
        "   padding: 5px;"
        "   font-weight: bold;"
        "}"
        );

    ui->FamilyTableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Interactive);
    ui->FamilyTableWidget->resizeColumnsToContents();
    ui->FamilyTableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);


}

void MainWindow::on_AddFamily_clicked()
{
    FamilyWindow *famw = new FamilyWindow();
    famw->show();
}
