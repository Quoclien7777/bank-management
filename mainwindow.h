#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "addaccountdialog.h"
#include "bankmanagement.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_addAccount_clicked();
    void on_showAccounts_clicked();
    void onAccountCreated(Account *acc); // slot nhận tài khoản từ dialog

    void on_removeAccount_clicked();

    void on_saveToCSV_clicked();

    void on_LoadFromCSV_clicked();

    void on_DepositButton_clicked();

    void on_pushButtonWithdraw_clicked();

    void on_pushButtonTransfer_clicked();

private:
    Ui::MainWindow *ui;
    BankManagement bank;
};

#endif // MAINWINDOW_H
