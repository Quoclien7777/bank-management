#ifndef TRANSFERDIALOG_H
#define TRANSFERDIALOG_H

#include <QDialog>
#include "bankmanagement.h"

namespace Ui {
class TransferDialog;
}

class TransferDialog : public QDialog
{
    Q_OBJECT

public:
    explicit TransferDialog(BankManagement *bank, QWidget *parent = nullptr);
    ~TransferDialog();

private slots:
    void on_pushButtonTransfer_clicked();

private:
    Ui::TransferDialog *ui;
    BankManagement *bank;
};

#endif // TRANSFERDIALOG_H
