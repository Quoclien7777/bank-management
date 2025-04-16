#ifndef BANKMANAGEMENT_H
#define BANKMANAGEMENT_H

#include "account.h"
#include <vector>

class BankManagement
{
public:
    void addAccount(Account *acc);
    bool removeAccount(const QString &accountNumber);
    bool saveToCSV(const QString &filePath);
    Account *findAccountByNumber(const QString &number);

    const std::vector<Account *> &getAccounts() const;
    ~BankManagement();

private:
    std::vector<Account *> accounts;
};

#endif // BANKMANAGEMENT_H
