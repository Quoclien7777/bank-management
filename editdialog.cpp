#include "editdialog.h"
#include "ui_editdialog.h"
#include <QMessageBox>

EditDialog::EditDialog(BankManagement* bank, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditDialog),
    bank(bank)
{
    ui->setupUi(this);
    this->setWindowTitle("Chỉnh sửa tài khoản");
}

EditDialog::~EditDialog()
{
    delete ui;
}

void EditDialog::on_pushButtonFind_clicked()
{
    QString accNum = ui->lineEditAccountNumber->text().trimmed();
    if (accNum.isEmpty()) {
        QMessageBox::warning(this, "Lỗi", "Vui lòng nhập số tài khoản.");
        return;
    }

    currentAccount = bank->findAccountByNumber(accNum);

    if (!currentAccount) {
        QMessageBox::warning(this, "Không tìm thấy", "Không có tài khoản này.");
        return;
    }

    // Hiển thị thông tin tên
    ui->lineEditName->setText(currentAccount->getName());
}

void EditDialog::on_pushButtonSaveChanges_clicked()
{
    if (!currentAccount) {
        QMessageBox::warning(this, "Lỗi", "Vui lòng tìm tài khoản trước.");
        return;
    }

    QString newName = ui->lineEditName->text().trimmed();

    if (newName.isEmpty()) {
        QMessageBox::warning(this, "Lỗi", "Tên không được để trống.");
        return;
    }

    currentAccount->setName(newName);

    QMessageBox::information(this, "Thành công", "Đã cập nhật tên tài khoản.");
    accept();
}
