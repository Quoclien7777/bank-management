#include "showaccountdialog.h"
#include "ui_showaccountdialog.h"
#include <QDebug>

ShowAccountDialog::ShowAccountDialog(BankManagement* bank, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ShowAccountDialog)
    , bankRef(bank)
{
    ui->setupUi(this);

    QString output;
    const std::vector<Account*>& accounts = bankRef->getAccounts();

    if (accounts.empty()) {
        output = "Không có tài khoản nào trong hệ thống.";
    } else {
        for (size_t i = 0; i < accounts.size(); ++i) {
            output += QString("Tài khoản %1:\n%2\n\n")
                          .arg(i + 1)
                          .arg(accounts[i]->getInfo());
        }
    }

    ui->textEditAccounts->setText(output);
}

ShowAccountDialog::~ShowAccountDialog()
{
    delete ui;
}
