#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <QString>

class Account {
public:
    QString name;
    QString accountNumber;
    double balance;

    Account(QString name, QString accountNumber, double balance);
    virtual QString getType() const = 0;
    virtual QString getInfo() const = 0;
    virtual QString getAccountNumber() const =0;
    virtual QString getName() const =0;
    virtual double getBalance() const =0;
    virtual void setBalance(double newBalance) = 0;
    virtual ~Account();
};

#endif // ACCOUNT_H
