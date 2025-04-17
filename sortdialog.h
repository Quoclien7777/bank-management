#ifndef SORTDIALOG_H
#define SORTDIALOG_H

#include <QDialog>
#include "bankmanagement.h"

namespace Ui {
class SortDialog;
}

class SortDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SortDialog(BankManagement* bank, QWidget *parent = nullptr);
    ~SortDialog();

private slots:
    void on_pushButtonSort_clicked();

private:
    Ui::SortDialog *ui;
    BankManagement* bank;
};

#endif // SORTDIALOG_H
