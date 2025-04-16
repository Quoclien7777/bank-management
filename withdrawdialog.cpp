#include "withdrawdialog.h"
#include "ui_withdrawdialog.h"
#include "checking.h"
#include <QMessageBox>

WithdrawDialog::WithdrawDialog(BankManagement* bank, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WithdrawDialog),
    bank(bank)
{
    ui->setupUi(this);
}

WithdrawDialog::~WithdrawDialog()
{
    delete ui;
}

void WithdrawDialog::on_pushButtonWithdraw_clicked()
{
    QString accNum = ui->lineEditAccountNumber->text().trimmed();
    double amount = ui->lineEditAmount->text().toDouble();

    if (accNum.isEmpty() || amount <= 0) {
        QMessageBox::warning(this, "Lỗi", "Vui lòng nhập đầy đủ và hợp lệ.");
        return;
    }

    Account* acc = bank->findAccountByNumber(accNum);

    if (!acc) {
        QMessageBox::warning(this, "Không tìm thấy", "Không có tài khoản với số này.");
        return;
    }

    double currentBalance = acc->getBalance();

    if (acc->getType() == "Checking") {
        Checking* checkAcc = dynamic_cast<Checking*>(acc);
        if (amount > currentBalance + checkAcc->getOverdraftFee()) {
            QMessageBox::warning(this, "Lỗi", "Vượt quá hạn mức cho phép!");
            return;
        }
    } else {
        if (amount > currentBalance) {
            QMessageBox::warning(this, "Lỗi", "Số dư không đủ!");
            return;
        }
    }

    acc->setBalance(currentBalance - amount);
    QMessageBox::information(this, "Thành công",
                             QString("Đã rút %1 từ tài khoản %2").arg(amount).arg(accNum));
    this->accept();
}
