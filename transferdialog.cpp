#include "transferdialog.h"
#include <QMessageBox>
#include "checking.h"
#include "ui_transferdialog.h"

TransferDialog::TransferDialog(BankManagement *bank, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::TransferDialog)
    , bank(bank)
{
    ui->setupUi(this);
    this->setWindowTitle("Chuyển khoản");
}

TransferDialog::~TransferDialog()
{
    delete ui;
}

void TransferDialog::on_pushButtonTransfer_clicked()
{
    QString fromAccNum = ui->lineEditFrom->text().trimmed();
    QString toAccNum = ui->lineEditTo->text().trimmed();
    double amount = ui->lineEditAmount->text().toDouble();

    if (fromAccNum.isEmpty() || toAccNum.isEmpty() || amount <= 0) {
        QMessageBox::warning(this, "Lỗi", "Vui lòng nhập đầy đủ và hợp lệ.");
        return;
    }

    Account *fromAcc = bank->findAccountByNumber(fromAccNum);
    Account *toAcc = bank->findAccountByNumber(toAccNum);

    if (!fromAcc || !toAcc) {
        QMessageBox::warning(this, "Không tìm thấy", "Một trong hai tài khoản không tồn tại.");
        return;
    }

    double totalDeduct = amount;
    if (fromAcc->getType() == "Checking") {
        Checking *checkAcc = dynamic_cast<Checking *>(fromAcc);
        totalDeduct += checkAcc->getOverdraftFee();
    }

    if (fromAcc->getBalance() < totalDeduct) {
        QMessageBox::warning(this, "Lỗi", "Tài khoản gửi không đủ số dư.");
        return;
    }

    fromAcc->setBalance(fromAcc->getBalance() - totalDeduct);
    toAcc->setBalance(toAcc->getBalance() + amount);
    bank->addTransaction(fromAcc->getAccountNumber(), toAcc->getAccountNumber(), amount);
    QMessageBox::information(this,
                             "Thành công",
                             QString("Đã chuyển %1 từ %2 sang %3")
                                 .arg(amount)
                                 .arg(fromAccNum)
                                 .arg(toAccNum));

    accept();
}
