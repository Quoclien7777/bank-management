#include "saving.h"

Saving::Saving(QString name, QString accountNumber, double balance, double interestRate)
    : Account(name, accountNumber, balance)
    , interestRate(interestRate)
{}

QString Saving::getType() const
{
    return "Saving";
}

QString Saving::getInfo() const
{
    return QString("Saving | %1 | %2 | %3 | Interest Rate: %4%")
        .arg(name)
        .arg(accountNumber)
        .arg(balance)
        .arg(interestRate);
}

QString Saving::getAccountNumber() const
{
    return accountNumber;
}

double Saving::getInterestRate() const
{
    return interestRate;
}

QString Saving::getName() const
{
    return name;
}

double Saving::getBalance() const
{
    return balance;
}
void Saving::setBalance(double newBalance)
{
    balance = newBalance;
}
void Saving::setName(const QString& newName) {
    name = newName;
}
