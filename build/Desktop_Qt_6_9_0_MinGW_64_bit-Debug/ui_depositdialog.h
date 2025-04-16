/********************************************************************************
** Form generated from reading UI file 'depositdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEPOSITDIALOG_H
#define UI_DEPOSITDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DepositDialog
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *lineEditAccountNumber;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEditAmount;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonDeposit;

    void setupUi(QDialog *DepositDialog)
    {
        if (DepositDialog->objectName().isEmpty())
            DepositDialog->setObjectName("DepositDialog");
        DepositDialog->resize(480, 640);
        verticalLayoutWidget = new QWidget(DepositDialog);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(10, 160, 441, 451));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout_3->addWidget(label_2);

        lineEditAccountNumber = new QLineEdit(verticalLayoutWidget);
        lineEditAccountNumber->setObjectName("lineEditAccountNumber");

        horizontalLayout_3->addWidget(lineEditAccountNumber);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        lineEditAmount = new QLineEdit(verticalLayoutWidget);
        lineEditAmount->setObjectName("lineEditAmount");

        horizontalLayout_2->addWidget(lineEditAmount);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButtonDeposit = new QPushButton(verticalLayoutWidget);
        pushButtonDeposit->setObjectName("pushButtonDeposit");

        horizontalLayout->addWidget(pushButtonDeposit);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DepositDialog);

        QMetaObject::connectSlotsByName(DepositDialog);
    } // setupUi

    void retranslateUi(QDialog *DepositDialog)
    {
        DepositDialog->setWindowTitle(QCoreApplication::translate("DepositDialog", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("DepositDialog", "Enter the account number", nullptr));
        label->setText(QCoreApplication::translate("DepositDialog", "Enter the money ", nullptr));
        pushButtonDeposit->setText(QCoreApplication::translate("DepositDialog", "Deposit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DepositDialog: public Ui_DepositDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEPOSITDIALOG_H
