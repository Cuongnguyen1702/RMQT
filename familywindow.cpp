#include "familywindow.h"
#include "ui_familywindow.h"
#include "personwindow.h"

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

void FamilyWindow::on_pushButton_clicked()
{
    PersonWindow *perwnd = new PersonWindow();
    perwnd->show();
}

