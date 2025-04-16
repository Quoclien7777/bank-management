#include "checking.h"

Checking::Checking(QString name, QString accountNumber, double balance, double overdraftFee)
    : Account(name, accountNumber, balance)
    , overdraftFee(overdraftFee)
{}

QString Checking::getType() const
{
    return "Checking";
}

QString Checking::getInfo() const
{
    return QString("Checking | %1 | %2 | %3 | Overdraft Fee: $%4")
        .arg(name)
        .arg(accountNumber)
        .arg(balance)
        .arg(overdraftFee);
}

QString Checking::getAccountNumber() const
{
    return accountNumber;
}

double Checking::getOverdraftFee() const
{
    return overdraftFee;
}

QString Checking::getName() const
{
    return name;
}

double Checking::getBalance() const
{
    return balance;
}
void Checking::setBalance(double newBalance)
{
    balance = newBalance;
}
