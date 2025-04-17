#include "sortdialog.h"
#include "ui_sortdialog.h"
#include "bankmanagement.h"
#include <QMessageBox>
#include <algorithm>

SortDialog::SortDialog(BankManagement* bank, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SortDialog),
    bank(bank)
{
    ui->setupUi(this);
    this->setWindowTitle("Sắp xếp");

    ui->comboBoxCriteria->addItem("Account Number");
    ui->comboBoxCriteria->addItem("Name");
    ui->comboBoxCriteria->addItem("Balance");
    ui->comboBoxOrder->addItem("Ascending");
    ui->comboBoxOrder->addItem("Descending");
}

SortDialog::~SortDialog()
{
    delete ui;
}

void SortDialog::on_pushButtonSort_clicked()
{
    QString criteria = ui->comboBoxCriteria->currentText();
    QString order = ui->comboBoxOrder->currentText();

    bool ascending = (order == "Ascending");

    std::vector<Account*> &accList = bank->getAccounts(); // lấy accounts ra

    if (criteria == "Name") {
        std::sort(accList.begin(), accList.end(),
                  [ascending](Account* a, Account* b) {
                      if (ascending)
                          return a->getName().toLower() < b->getName().toLower();
                      else
                          return a->getName().toLower() > b->getName().toLower();
                  });
    } else if (criteria == "Balance") {
        std::sort(accList.begin(), accList.end(),
                  [ascending](Account* a, Account* b) {
                      if (ascending)
                          return a->getBalance() < b->getBalance();
                      else
                          return a->getBalance() > b->getBalance();
                  });
    } else if (criteria == "Account Number") {
        std::sort(accList.begin(), accList.end(),
                  [ascending](Account* a, Account* b) {
                      if (ascending)
                          return a->getAccountNumber() < b->getAccountNumber();
                      else
                          return a->getAccountNumber() > b->getAccountNumber();
                  });
    }


    QMessageBox::information(this, "Thông báo", "Đã sắp xếp thành công!");
    accept();
}
