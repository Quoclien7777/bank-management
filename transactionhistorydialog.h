#ifndef TRANSACTIONHISTORYDIALOG_H
#define TRANSACTIONHISTORYDIALOG_H

#include <QDialog>
#include "bankmanagement.h"

namespace Ui {
class TransactionHistoryDialog;
}

class TransactionHistoryDialog : public QDialog
{
    Q_OBJECT

public:
    explicit TransactionHistoryDialog(BankManagement* bank, QWidget *parent = nullptr);
    ~TransactionHistoryDialog();

private slots:
    void on_pushButtonSearch_clicked();

    void on_pushButtonLoadFiltered_clicked();

    void on_pushButtonSaveFiltered_clicked();

private:
    Ui::TransactionHistoryDialog *ui;
    BankManagement* bank;
};

#endif // HISTORYDIALOG_H
