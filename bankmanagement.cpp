#include "bankmanagement.h"
#include <QFile>
#include <QTextStream>
#include <checking.h>
#include <saving.h>
void BankManagement::addAccount(Account *acc)
{
    accounts.push_back(acc);
}

const std::vector<Account *> &BankManagement::getAccounts() const
{
    return accounts;
}

BankManagement::~BankManagement()
{
    for (auto acc : accounts)
        delete acc;
}

bool BankManagement::removeAccount(const QString &accountNumber)
{
    for (auto it = accounts.begin(); it != accounts.end(); ++it) {
        if ((*it)->getAccountNumber() == accountNumber) {
            delete *it; // xoá đối tượng khỏi heap
            accounts.erase(it);
            return true;
        }
    }
    return false;
}

bool BankManagement::saveToCSV(const QString &filePath)
{
    QFile file(filePath);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        return false;
    }

    QTextStream out(&file);
    out << "Name,Account Number,Balance,Type,Extra Info\n";

    for (const auto &acc : accounts) {
        QString type = acc->getType();
        QString extra;

        if (type == "Saving") {
            Saving *s = dynamic_cast<Saving *>(acc);
            extra = QString::number(s->getInterestRate());
        } else if (type == "Checking") {
            Checking *c = dynamic_cast<Checking *>(acc);
            extra = QString::number(c->getOverdraftFee());
        }

        out << acc->getName() << "," << acc->getAccountNumber() << "," << acc->getBalance() << ","
            << type << "," << extra << "\n";
    }

    file.close();
    return true;
}

Account *BankManagement::findAccountByNumber(const QString &number)
{
    for (Account *acc : accounts) {
        if (acc->getAccountNumber() == number) {
            return acc;
        }
    }
    return nullptr;
}
