#include "removeaccountdialog.h"
#include "ui_removeaccountdialog.h"

RemoveAccountDialog::RemoveAccountDialog(BankManagement* bank, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RemoveAccountDialog)
    , bankRef(bank)
{
    ui->setupUi(this);
}

RemoveAccountDialog::~RemoveAccountDialog()
{
    delete ui;
}

void RemoveAccountDialog::on_buttonBox_accepted()
{
    QString accNum = ui->lineEditAccountNum->text();
    bool removed = bankRef->removeAccount(accNum);

    if (removed) {
        ui->labelResult->setText("Đã xoá tài khoản thành công!");
    } else {
        ui->labelResult->setText("Không tìm thấy tài khoản cần xoá.");
    }
}
