#include "mainwindow.h"
#include <QDebug>
#include <QFile>
#include <QFileDialog>
#include <QMessageBox>
#include "addaccountdialog.h"
#include "depositdialog.h"
#include "removeaccountdialog.h"
#include "showaccountdialog.h"
#include "transferdialog.h"
#include "ui_mainwindow.h"
#include "withdrawdialog.h"
#include <checking.h>
#include <saving.h>
#include <sortdialog.h>
#include <transactionhistorydialog.h>
#include <editdialog.h>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Màn hình chính");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_addAccount_clicked()
{
    AddAccountDialog *dialog = new AddAccountDialog(this);
    connect(dialog, &AddAccountDialog::accountCreated, this, &MainWindow::onAccountCreated);
    dialog->exec(); // chạy dialog
}

void MainWindow::onAccountCreated(Account *acc)
{
    bank.addAccount(acc);
    qDebug() << "Đã thêm tài khoản:" << acc->getInfo();
}

void MainWindow::on_showAccounts_clicked()
{
    qDebug() << "===== Danh sách tài khoản =====";
    for (auto acc : bank.getAccounts()) {
        qDebug() << acc->getInfo();
    }

    ShowAccountDialog *dialog = new ShowAccountDialog(&bank, this);
    dialog->exec();
}

void MainWindow::on_removeAccount_clicked()
{
    RemoveAccountDialog *dialog = new RemoveAccountDialog(&bank, this);
    dialog->exec();
}

void MainWindow::on_saveToCSV_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this,
                                  "Xác nhận",
                                  "Bạn có chắc chắn muốn lưu danh sách tài khoản vào CSV?",
                                  QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {
        QString filePath = QFileDialog::getSaveFileName(this,
                                                        "Chọn nơi lưu file",
                                                        "",
                                                        "CSV Files (*.csv)");
        if (!filePath.isEmpty()) {
            bool success = bank.saveToCSV(filePath);
            if (success) {
                QMessageBox::information(this, "Thành công", "Đã lưu vào file CSV.");
            } else {
                QMessageBox::warning(this, "Lỗi", "Không thể lưu file CSV.");
            }
        }
    }
}

void MainWindow::on_LoadFromCSV_clicked()
{
    QString filePath = QFileDialog::getOpenFileName(this, "Chọn file CSV", "", "CSV Files (*.csv)");
    if (filePath.isEmpty())
        return;

    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "Lỗi", "Không thể mở file!");
        return;
    }

    QTextStream in(&file);
    int lineCount = 0;
    bool hasError = false;

    in.readLine(); // bỏ dòng tiêu đề

    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList parts = line.split(',');

        if (parts.size() < 5) {
            hasError = true;
            continue;
        }

        QString name = parts[0].trimmed();
        QString number = parts[1].trimmed();
        double balance = parts[2].toDouble();
        QString type = parts[3].trimmed();
        double extra = parts[4].toDouble();

        Account *acc = nullptr;

        if (type == "Saving") {
            acc = new Saving(name, number, balance, extra);
        } else if (type == "Checking") {
            acc = new Checking(name, number, balance, extra);
        }

        if (acc) {
            bank.addAccount(acc); // thêm vào vector trong BankManagement
            ++lineCount;
        } else {
            hasError = true;
        }
    }
}

void MainWindow::on_DepositButton_clicked()
{
    DepositDialog dlg(&bank, this);
    dlg.exec();
}

void MainWindow::on_pushButtonWithdraw_clicked()
{
    WithdrawDialog dialog(&bank, this);
    dialog.exec();
}

void MainWindow::on_pushButtonTransfer_clicked()
{
    TransferDialog dialog(&bank, this);
    dialog.exec();
}




void MainWindow::on_pushButtonSort_clicked()
{
    SortDialog dialog(&bank, this);
    dialog.exec();
}


void MainWindow::on_pushButton_clicked()
{
    TransactionHistoryDialog dialog(&bank, this);
    dialog.exec();
}


void MainWindow::on_pushButtonEditAccount_clicked()
{
    EditDialog dialog(&bank, this);
    dialog.exec();
}

