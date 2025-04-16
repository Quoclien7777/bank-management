#include "addaccountdialog.h"
#include "ui_addaccountdialog.h"
#include "saving.h"
#include "checking.h"
#include <QDebug>
#include <bankmanagement.h>
AddAccountDialog::AddAccountDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddAccountDialog)
{
    ui->setupUi(this);
    ui->comboBoxType->addItem("Saving");
    ui->comboBoxType->addItem("Checking");
}

AddAccountDialog::~AddAccountDialog()
{
    delete ui;
}

void AddAccountDialog::on_buttonBox_accepted()
{

}

void AddAccountDialog::on_pushButton_clicked()
{
    QString name = ui->lineEditName->text();
    QString number = ui->lineEditNumber->text();
    double balance = ui->lineEditBalance->text().toDouble();
    QString type = ui->comboBoxType->currentText();
    double extra = ui->lineEditExtra->text().toDouble();

    Account* acc = nullptr;

    if (type == "Saving") {
        acc = new Saving(name, number, balance, extra);
    } else if (type == "Checking") {
        acc = new Checking(name, number, balance, extra);
    }

    if (acc) {
        emit accountCreated(acc); // gửi tín hiệu về MainWindow

    }

    accept(); // đóng dialog
}

