#ifndef CHECKING_H
#define CHECKING_H

#include "account.h"

class Checking : public Account {
private:
    double overdraftFee;

public:
    Checking(QString name, QString accountNumber, double balance, double overdraftFee);
    QString getType() const override;
    QString getInfo() const override;
    QString getAccountNumber() const override;
    QString getName() const override;
    double getBalance() const override;
    double getOverdraftFee() const;
    void setBalance(double newBalance) override;

};

#endif // CHECKING_H
