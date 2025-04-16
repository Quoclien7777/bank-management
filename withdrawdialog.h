#ifndef WITHDRAWDIALOG_H
#define WITHDRAWDIALOG_H

#include <QDialog>
#include "bankmanagement.h"

namespace Ui {
class WithdrawDialog;
}

class WithdrawDialog : public QDialog
{
    Q_OBJECT

public:
    explicit WithdrawDialog(BankManagement *bank, QWidget *parent = nullptr);
    ~WithdrawDialog();

private slots:
    void on_pushButtonWithdraw_clicked();

private:
    Ui::WithdrawDialog *ui;
    BankManagement *bank;
};

#endif // WITHDRAWDIALOG_H
