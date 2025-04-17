#ifndef EDITDIALOG_H
#define EDITDIALOG_H

#include <QDialog>
#include "bankmanagement.h"

namespace Ui {
class EditDialog;
}

class EditDialog : public QDialog
{
    Q_OBJECT

public:
    explicit EditDialog(BankManagement* bank, QWidget *parent = nullptr);
    ~EditDialog();

private slots:
    void on_pushButtonFind_clicked();
    void on_pushButtonSaveChanges_clicked();

private:
    Ui::EditDialog *ui;
    BankManagement* bank;
    Account* currentAccount = nullptr;
};

#endif // EDITACCOUNTDIALOG_H
