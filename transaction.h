#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <QString>

class Transaction
{
public:
    QString fromAccount;
    QString toAccount;
    double amount;
    QString time;

    Transaction(const QString& from, const QString& to, double amt, const QString& t)
        : fromAccount(from), toAccount(to), amount(amt), time(t) {}
};

#endif // TRANSACTION_H
