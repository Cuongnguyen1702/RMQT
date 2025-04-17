#include "familywindow.h"
#include "ui_familywindow.h"
#include "personwindow.h"
#include <QRandomGenerator>
#include <QVBoxLayout>
#include <QMessageBox>
#include <QMenu>

FamilyWindow::FamilyWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::FamilyWindow)
{
    ui->setupUi(this);
    setFixedSize(800,600);
    FamilyMemList();
    ui->FamMemTableWidg->setContextMenuPolicy(Qt::CustomContextMenu);
    connect(ui->FamMemTableWidg, &QTableWidget::customContextMenuRequested,
            this, &FamilyWindow::showContextMenu);
    connect(ui->FindFamButton, &QPushButton::clicked, this, &FamilyWindow::FamilyMemList);
}

FamilyWindow::~FamilyWindow()
{
    delete ui;
}

void FamilyWindow::deleteFromCSV(const QString &id)
{
    QString filePath = QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation) + "/FamiliesInTown.csv";
    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) return;

    QTextStream in(&file);
    in.setEncoding(QStringConverter::Utf8);
    QStringList lines;
    QString header = in.readLine();  // Save header
    lines.append(header);

    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList cols = line.split(";");
        if (cols.size() > 0 && cols[0] != id) {
            lines.append(line); // Only keep lines not matching the ID
        }
    }
    file.close();

    if (file.open(QIODevice::WriteOnly | QIODevice::Truncate | QIODevice::Text)) {
        QTextStream out(&file);
        out.setEncoding(QStringConverter::Utf8);
        out << "\xEF\xBB\xBF";
        for (const QString &line : lines)
            out << line << "\n";
        file.close();
        qDebug() << "Deleted ID:" << id;
    }
}

void FamilyWindow::showContextMenu(const QPoint &pos)
{
    QModelIndex index = ui->FamMemTableWidg->indexAt(pos);
    if (!index.isValid()) return;

    QMenu contextMenu;
    QAction *deleteAction = contextMenu.addAction("Xoá người này");
    QAction *selectedAction = contextMenu.exec(ui->FamMemTableWidg->viewport()->mapToGlobal(pos));

    if (selectedAction == deleteAction) {
        int row = index.row();
        QString idToDelete = ui->FamMemTableWidg->item(row, 1)->text(); // ID is in column 1

        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "Xoá", "Bạn muốn xoá người này?",
                                      QMessageBox::Yes | QMessageBox::No);

        if (reply == QMessageBox::Yes) {
            deleteFromCSV(idToDelete);
            ui->FamMemTableWidg->removeRow(row); // Remove from table
        }
    }
}
void FamilyWindow::FamilyMemList()
{
    QTableWidget *table = ui->FamMemTableWidg;
    table->setColumnCount(17);
    table->setRowCount(0);

    this->setWindowTitle("DANH SÁCH THÀNH VIÊN CÙNG MỘT HỘ GIA ĐÌNH");

    QStringList hlabels;
    hlabels << "Họ và tên" << "Số CCCD" << "Ngày sinh" << "Nơi ở hiện tại"
            << "Địa chỉ thường trú" << "Tình trạng hôn nhân" << "Tôn giáo" << "CCCD chủ hộ" << "Quan hệ với chủ hộ" << "Chủ hộ"
            << "Tình trạng" << "Loại cư trú"
            << "Ngày đăng kí" << "Địa chỉ tạm trú" << "Địa chỉ quê quán" << "Ngày bắt đầu tạm trú" << "Ngày hết hạn tạm trú";
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

    QString targetFamilyID = ui->IDtextEdit->text().trimmed();

    int row = 0;
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList columns = line.split(";");

        if (columns.size() < 17)
            continue; // Skip malformed rows

        QString familyID = columns[10];

        if (familyID == targetFamilyID) {
            table->insertRow(row);
            table->setItem(row, 0, new QTableWidgetItem(columns[1])); // Name
            table->setItem(row, 1, new QTableWidgetItem(columns[0])); // ID
            table->setItem(row, 2, new QTableWidgetItem(columns[3])); // Birthdate
            table->setItem(row, 3, new QTableWidgetItem(columns[2])); // Current Address
            table->setItem(row, 4, new QTableWidgetItem(columns[9])); // Permanent Address
            table->setItem(row, 5, new QTableWidgetItem(columns[5])); // Marital Status
            table->setItem(row, 6, new QTableWidgetItem(columns[6])); // Religion
            table->setItem(row, 7, new QTableWidgetItem(familyID));   // FamilyID
            table->setItem(row, 8, new QTableWidgetItem(columns[11])); //Relationship
            table->setItem(row, 9, new QTableWidgetItem(columns[8])); //Is Head of Family
            table->setItem(row, 10, new QTableWidgetItem(columns[4]));//Residence type
            table->setItem(row, 11, new QTableWidgetItem(columns[7]));//Start date
            table->setItem(row, 12, new QTableWidgetItem(columns[12])); //Date Registered
            table->setItem(row, 13, new QTableWidgetItem(columns[13]));//Temporary Address
            table->setItem(row, 14, new QTableWidgetItem(columns[14]));//Place of Origin
            table->setItem(row, 15, new QTableWidgetItem(columns[15]));//Start date
            table->setItem(row, 16, new QTableWidgetItem(columns[16]));//End date
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

    table->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    table->resizeColumnsToContents();
    table->setEditTriggers(QAbstractItemView::NoEditTriggers);
    table->setMaximumHeight(250);
    table->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
}

void FamilyWindow::on_FamilyMemButton_clicked(){
    PersonWindow *pwnd = new PersonWindow();
    pwnd->show();
}

void FamilyWindow::on_AddFamilyButton_clicked()
{
    this->close();
}

