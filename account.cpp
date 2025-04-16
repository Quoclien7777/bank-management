#include "account.h"
#include <QString>
Account::Account(QString name, QString accountNumber, double balance)
    : name(name)
    , accountNumber(accountNumber)
    , balance(balance)
{}

Account::~Account() {}
