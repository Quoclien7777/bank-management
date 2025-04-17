#include "transactionhistorydialog.h"
#include "ui_transactionhistorydialog.h"
#include <QMessageBox>
#include <QFileDialog>
#include <QFile>

TransactionHistoryDialog::TransactionHistoryDialog(BankManagement* bank, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TransactionHistoryDialog),
    bank(bank)
{
    ui->setupUi(this);
    this->setWindowTitle("Lịch sử giao dịch");
}

TransactionHistoryDialog::~TransactionHistoryDialog()
{
    delete ui;
}

void TransactionHistoryDialog::on_pushButtonSearch_clicked()
{
    QString accountNum = ui->lineEditAccountNumber->text().trimmed();
    QString result;

    if (accountNum.isEmpty()) {
        ui->textEditHistory->setText("Vui lòng nhập số tài khoản.");
        return;
    }

    const auto& transactions = bank->getTransactions();
    for (const Transaction& trans : transactions) {
        if (trans.fromAccount == accountNum || trans.toAccount == accountNum) {
            result += QString("[%1] %2 --> %3 : %4\n")
            .arg(trans.time)
                .arg(trans.fromAccount)
                .arg(trans.toAccount)
                .arg(trans.amount);
        }
    }

    if (result.isEmpty()) {
        result = "Không có lịch sử giao dịch cho tài khoản này.";
    }

    ui->textEditHistory->setText(result);
}

void TransactionHistoryDialog::on_pushButtonLoadFiltered_clicked()
{
    QString accountNum = ui->lineEditAccountNumber->text().trimmed();
    if (accountNum.isEmpty()) {
        QMessageBox::warning(this, "Lỗi", "Vui lòng nhập số tài khoản trước.");
        return;
    }

    QString filePath = QFileDialog::getOpenFileName(this, "Chọn file CSV", "", "CSV Files (*.csv)");
    if (filePath.isEmpty()) return;

    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "Lỗi", "Không thể mở file.");
        return;
    }

    QTextStream in(&file);
    QString result;

    in.readLine(); // Bỏ dòng tiêu đề

    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList parts = line.split(',');

        if (parts.size() >= 4) {
            QString fromAcc = parts[1].trimmed();
            QString toAcc = parts[2].trimmed();

            if (fromAcc == accountNum || toAcc == accountNum) {
                result += line + "\n";
            }
        }
    }

    file.close();

    if (result.isEmpty()) {
        result = "Không tìm thấy giao dịch nào cho tài khoản này.";
    }

    ui->textEditHistory->setText(result);
}


void TransactionHistoryDialog::on_pushButtonSaveFiltered_clicked()
{
    QString accountNum = ui->lineEditAccountNumber->text().trimmed();
    if (accountNum.isEmpty()) {
        QMessageBox::warning(this, "Lỗi", "Vui lòng nhập số tài khoản trước.");
        return;
    }

    QString filePath = QFileDialog::getSaveFileName(this, "Lưu lịch sử tài khoản", "", "CSV Files (*.csv)");
    if (filePath.isEmpty()) return;

    QFile file(filePath);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "Lỗi", "Không thể mở file.");
        return;
    }

    QTextStream out(&file);
    out << "Thời gian, Tài khoản gửi, Tài khoản nhận, Số tiền\n";

    const auto& transactions = bank->getTransactions();
    bool found = false;

    for (const Transaction& trans : transactions) {
        if (trans.fromAccount == accountNum || trans.toAccount == accountNum) {
            found = true;
            out << trans.time << ","
                << trans.fromAccount << ","
                << trans.toAccount << ","
                << trans.amount << "\n";
        }
    }

    file.close();

    if (found) {
        QMessageBox::information(this, "Thành công", "Đã lưu lịch sử tài khoản vào CSV.");
    } else {
        QMessageBox::warning(this, "Không tìm thấy", "Không có giao dịch nào cho tài khoản này.");
    }
}

