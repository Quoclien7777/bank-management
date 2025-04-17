#ifndef BANKMANAGEMENT_H
#define BANKMANAGEMENT_H

#include "account.h"
#include <vector>
#include "transaction.h"
class BankManagement
{
public:
    void addAccount(Account *acc);
    bool removeAccount(const QString &accountNumber);
    bool saveToCSV(const QString &filePath);
    void addTransaction(const QString& from, const QString& to, double amount);
    Account *findAccountByNumber(const QString &number);

    std::vector<Transaction>& getTransactions();
    std::vector<Account *> &getAccounts();
    ~BankManagement();

private:
    std::vector<Account *> accounts;
    std::vector<Transaction> transactions;
};

#endif // BANKMANAGEMENT_H
