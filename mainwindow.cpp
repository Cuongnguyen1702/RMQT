#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "familywindow.h"
#include <QMessageBox>
#include <QMenu>
#include <QStandardItemModel>
#include <QStandardPaths>
#include <QFile>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    FamilyList();
    ui->FamilyListText->setStyleSheet("font-weight: bold; font-size: 16px");
    ui->FamilyTableWidget->setContextMenuPolicy(Qt::CustomContextMenu);
    connect(ui->FamilyTableWidget, &QTableWidget::customContextMenuRequested,
            this, &MainWindow::showContextMenu);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::deleteFamilyByID(const QString &familyID)
{
    QString filePath = QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation) + "/FamiliesInTown.csv";
    QFile file(filePath);
    QStringList lines;

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) return;

    QTextStream in(&file);
    in.setEncoding(QStringConverter::Utf8);
    QString header = in.readLine();
    lines.append(header); // Keep header

    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList cols = line.split(";");
        if (cols.size() >= 12 && cols[11] != familyID) {
            lines.append(line); // Keep only those with different FamilyID
        }
    }
    file.close();

    if (file.open(QIODevice::WriteOnly | QIODevice::Truncate | QIODevice::Text)) {
        QTextStream out(&file);
        out.setEncoding(QStringConverter::Utf8);
        out << "\xEF\xBB\xBF"; // UTF-8 BOM
        for (const QString &line : lines)
            out << line << "\n";
        file.close();
        qDebug() << "Deleted family with ID:" << familyID;
    }
}
void MainWindow::showContextMenu(const QPoint &pos)
{
    QModelIndex index = ui->FamilyTableWidget->indexAt(pos);
    if (!index.isValid()) return;

    int row = index.row();
    QString id = ui->FamilyTableWidget->item(row, 0)->text(); // CCCD of head

    // Open the CSV to find the corresponding FamilyID
    QString familyID;
    QString filePath = QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation) + "/FamiliesInTown.csv";
    QFile file(filePath);
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        in.setEncoding(QStringConverter::Utf8);
        in.readLine(); // Skip header
        while (!in.atEnd()) {
            QString line = in.readLine();
            QStringList columns = line.split(";");
            if (columns.size() >= 12 && columns[0] == id && columns[9].trimmed() == "1") {
                familyID = columns[11];
                break;
            }
        }
        file.close();
    }

    if (familyID.isEmpty()) {
        QMessageBox::warning(this, "Lỗi", "Không tìm thấy CCCD chủ hộ để xoá");
        return;
    }

    QMenu menu;
    QAction *deleteAction = menu.addAction("Xoá gia đình này");
    QAction *selectedAction = menu.exec(ui->FamilyTableWidget->viewport()->mapToGlobal(pos));

    if (selectedAction == deleteAction) {
        QMessageBox::StandardButton confirm = QMessageBox::question(this, "Xác nhận xoá",
                                                                    "Bạn có muốn xoá gia đình này(bao gồm tất cả thành viên)?",
                                                                    QMessageBox::Yes | QMessageBox::No);

        if (confirm == QMessageBox::Yes) {
            deleteFamilyByID(familyID);
            FamilyList(); // Refresh table
        }
    }
}
void MainWindow::FamilyList(){
    QTableWidget *table = ui->FamilyTableWidget;
    table->setColumnCount(3);
    table->setRowCount(0);

    this->setWindowTitle("QUẢN LÝ HỘ DÂN TRONG KHU PHỐ");

    QStringList hlabels;
    hlabels << "CCCD chủ hộ" << "Họ và tên" << "Nơi ở hiện tại";
    table->setHorizontalHeaderLabels(hlabels);

    //Read CSV

    QString filePath = QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation) + "/FamiliesInTown.csv";
    QFile file(filePath);

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Unable to open CSV file!";
        return;
    }

    QTextStream in(&file);
    in.setEncoding(QStringConverter::Utf8);
    QString headerLine = in.readLine(); // Skip header

    int row = 0;
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList columns = line.split(";");

        if (columns.size() < 18)
            continue; // Skip malformed rows

        if(columns[9].trimmed() == "1"){
            table->insertRow(row);
            table->setItem(row, 0, new QTableWidgetItem(columns[9])); // ID of head
            table->setItem(row, 1, new QTableWidgetItem(columns[1])); // Name
            table->setItem(row, 2, new QTableWidgetItem(columns[3])); // Address

            row++;
        }

    }

    file.close();

    // Styling
    table->setStyleSheet(
        "QTableWidget { font-size: 11pt; }"
        "QHeaderView::section { background-color: #2980b9; color: white; padding: 8px; font-weight: bold; }"
        "QTableWidget::item { padding: 5px; }"
        );

    table->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    table->resizeColumnsToContents();
    table->setEditTriggers(QAbstractItemView::NoEditTriggers);
    table->setMaximumHeight(250);
    table->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

}

void MainWindow::on_AddFamily_clicked()
{
    FamilyWindow *famw = new FamilyWindow();
    famw->show();
}
