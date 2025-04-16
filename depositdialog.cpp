#include "depositdialog.h"
#include <QDebug>
#include <QMessageBox>
#include <QString>
#include "ui_depositdialog.h"
DepositDialog::DepositDialog(BankManagement *bank, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DepositDialog)
    , bank(bank)
{
    ui->setupUi(this);
    this->setWindowTitle("Nạp tiền");
}

DepositDialog::~DepositDialog()
{
    delete ui;
}

void DepositDialog::on_pushButtonDeposit_clicked()
{
    QString accNum = ui->lineEditAccountNumber->text().trimmed();
    double amount = ui->lineEditAmount->text().toDouble();

    if (accNum.isEmpty() || amount <= 0) {
        QMessageBox::warning(this, "Lỗi", "Vui lòng nhập đầy đủ và hợp lệ.");
        return;
    }

    Account *acc = bank->findAccountByNumber(accNum); // cần thêm hàm này

    if (!acc) {
        QMessageBox::warning(this, "Không tìm thấy", "Không có tài khoản với số này.");
        return;
    }

    double newBalance = acc->getBalance() + amount;
    qDebug() << typeid(acc->getBalance()).name();
    acc->setBalance(newBalance); // cần thêm setBalance() trong lớp Account

    QMessageBox::information(this,
                             "Thành công",
                             QString("Đã nạp %1 vào tài khoản %2").arg(amount).arg(accNum));
    this->accept();
}
