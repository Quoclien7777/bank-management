#ifndef DEPOSITDIALOG_H
#define DEPOSITDIALOG_H

#include <QDialog>
#include "bankmanagement.h"

namespace Ui {
class DepositDialog;
}

class DepositDialog : public QDialog
{
    Q_OBJECT

public:
    explicit DepositDialog(BankManagement *bank, QWidget *parent = nullptr);
    ~DepositDialog();

private slots:
    void on_pushButtonDeposit_clicked();

private:
    Ui::DepositDialog *ui;
    BankManagement *bank;
};

#endif // DEPOSITDIALOG_H
