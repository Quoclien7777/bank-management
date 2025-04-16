/********************************************************************************
** Form generated from reading UI file 'withdrawdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WITHDRAWDIALOG_H
#define UI_WITHDRAWDIALOG_H

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

class Ui_WithdrawDialog
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *lineEditAccountNumber;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEditAmount;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonWithdraw;

    void setupUi(QDialog *WithdrawDialog)
    {
        if (WithdrawDialog->objectName().isEmpty())
            WithdrawDialog->setObjectName("WithdrawDialog");
        WithdrawDialog->resize(480, 640);
        verticalLayoutWidget = new QWidget(WithdrawDialog);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(30, 90, 411, 421));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName("label_2");
        label_2->setWordWrap(true);

        horizontalLayout_3->addWidget(label_2);

        lineEditAccountNumber = new QLineEdit(verticalLayoutWidget);
        lineEditAccountNumber->setObjectName("lineEditAccountNumber");

        horizontalLayout_3->addWidget(lineEditAccountNumber);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");
        label->setWordWrap(true);

        horizontalLayout->addWidget(label);

        lineEditAmount = new QLineEdit(verticalLayoutWidget);
        lineEditAmount->setObjectName("lineEditAmount");

        horizontalLayout->addWidget(lineEditAmount);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButtonWithdraw = new QPushButton(verticalLayoutWidget);
        pushButtonWithdraw->setObjectName("pushButtonWithdraw");

        horizontalLayout_2->addWidget(pushButtonWithdraw);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(WithdrawDialog);

        QMetaObject::connectSlotsByName(WithdrawDialog);
    } // setupUi

    void retranslateUi(QDialog *WithdrawDialog)
    {
        WithdrawDialog->setWindowTitle(QCoreApplication::translate("WithdrawDialog", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("WithdrawDialog", "S\341\273\221 t\303\240i kho\341\272\243n", nullptr));
        label->setText(QCoreApplication::translate("WithdrawDialog", "S\341\273\221 ti\341\273\201n mu\341\273\221n r\303\272t", nullptr));
        pushButtonWithdraw->setText(QCoreApplication::translate("WithdrawDialog", "R\303\272t ti\341\273\201n", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WithdrawDialog: public Ui_WithdrawDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WITHDRAWDIALOG_H
