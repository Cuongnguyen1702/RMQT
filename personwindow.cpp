#include "personwindow.h"
#include "ui_personwindow.h"
#include "person.h"

PersonWindow::PersonWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::PersonWindow)
{
    ui->setupUi(this);
}

PersonWindow::~PersonWindow()
{
    delete ui;
}

void PersonWindow::on_textEdit_textChanged()
{
    Person *person = new Person;
    person->setID(ui->IDtextEdit->toPlainText());
}
