#ifndef ADDACCOUNTDIALOG_H
#define ADDACCOUNTDIALOG_H

#include <QDialog>
#include "account.h"

namespace Ui {
class AddAccountDialog;
}

class AddAccountDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddAccountDialog(QWidget *parent = nullptr);
    ~AddAccountDialog();

signals:
    void accountCreated(Account* acc);

private slots:
    void on_buttonBox_accepted();

    void on_pushButton_clicked();

private:
    Ui::AddAccountDialog *ui;
};

#endif // ADDACCOUNTDIALOG_H
