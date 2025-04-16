/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *addAccount;
    QPushButton *removeAccount;
    QPushButton *showAccounts;
    QPushButton *DepositButton;
    QPushButton *pushButtonWithdraw;
    QPushButton *pushButtonTransfer;
    QPushButton *saveToCSV;
    QPushButton *LoadFromCSV;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(70, 50, 631, 471));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        addAccount = new QPushButton(verticalLayoutWidget);
        addAccount->setObjectName("addAccount");

        verticalLayout->addWidget(addAccount);

        removeAccount = new QPushButton(verticalLayoutWidget);
        removeAccount->setObjectName("removeAccount");

        verticalLayout->addWidget(removeAccount);

        showAccounts = new QPushButton(verticalLayoutWidget);
        showAccounts->setObjectName("showAccounts");

        verticalLayout->addWidget(showAccounts);

        DepositButton = new QPushButton(verticalLayoutWidget);
        DepositButton->setObjectName("DepositButton");

        verticalLayout->addWidget(DepositButton);

        pushButtonWithdraw = new QPushButton(verticalLayoutWidget);
        pushButtonWithdraw->setObjectName("pushButtonWithdraw");

        verticalLayout->addWidget(pushButtonWithdraw);

        pushButtonTransfer = new QPushButton(verticalLayoutWidget);
        pushButtonTransfer->setObjectName("pushButtonTransfer");

        verticalLayout->addWidget(pushButtonTransfer);

        saveToCSV = new QPushButton(verticalLayoutWidget);
        saveToCSV->setObjectName("saveToCSV");

        verticalLayout->addWidget(saveToCSV);

        LoadFromCSV = new QPushButton(verticalLayoutWidget);
        LoadFromCSV->setObjectName("LoadFromCSV");

        verticalLayout->addWidget(LoadFromCSV);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        addAccount->setText(QCoreApplication::translate("MainWindow", "Add account", nullptr));
        removeAccount->setText(QCoreApplication::translate("MainWindow", "Delete account by id", nullptr));
        showAccounts->setText(QCoreApplication::translate("MainWindow", "Show account", nullptr));
        DepositButton->setText(QCoreApplication::translate("MainWindow", "Deposit", nullptr));
        pushButtonWithdraw->setText(QCoreApplication::translate("MainWindow", "Withdraw", nullptr));
        pushButtonTransfer->setText(QCoreApplication::translate("MainWindow", "Transfer", nullptr));
        saveToCSV->setText(QCoreApplication::translate("MainWindow", "Save to CSV", nullptr));
        LoadFromCSV->setText(QCoreApplication::translate("MainWindow", "Load from CSV", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
