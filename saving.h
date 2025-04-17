#ifndef SAVING_H
#define SAVING_H

#include "account.h"

class Saving : public Account
{
private:
    double interestRate;

public:
    Saving(QString name, QString accountNumber, double balance, double interestRate);
    QString getType() const override;
    QString getInfo() const override;
    QString getAccountNumber() const override;
    QString getName() const override;
    double getBalance() const override;
    double getInterestRate() const;
    void setBalance(double newBalance) override;
    void setName(const QString& newName) override;
};

#endif // SAVING_H
