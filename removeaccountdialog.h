#ifndef REMOVEACCOUNTDIALOG_H
#define REMOVEACCOUNTDIALOG_H

#include <QDialog>
#include "bankmanagement.h"

namespace Ui {
class RemoveAccountDialog;
}

class RemoveAccountDialog : public QDialog
{
    Q_OBJECT

public:
    explicit RemoveAccountDialog(BankManagement* bank, QWidget *parent = nullptr);
    ~RemoveAccountDialog();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::RemoveAccountDialog *ui;
    BankManagement* bankRef;
};

#endif // REMOVEACCOUNTDIALOG_H
