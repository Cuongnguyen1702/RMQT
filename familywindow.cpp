#include "familywindow.h"
#include "ui_familywindow.h"

FamilyWindow::FamilyWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::FamilyWindow)
{
    ui->setupUi(this);
}

FamilyWindow::~FamilyWindow()
{
    delete ui;
}
