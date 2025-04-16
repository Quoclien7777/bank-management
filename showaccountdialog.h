#ifndef SHOWACCOUNTDIALOG_H
#define SHOWACCOUNTDIALOG_H

#include <QDialog>
#include "bankmanagement.h"

namespace Ui {
class ShowAccountDialog;
}

class ShowAccountDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ShowAccountDialog(BankManagement *bank, QWidget *parent = nullptr);
    ~ShowAccountDialog();

private:
    Ui::ShowAccountDialog *ui;
    BankManagement *bankRef;
};

#endif // SHOWACCOUNTDIALOG_H
