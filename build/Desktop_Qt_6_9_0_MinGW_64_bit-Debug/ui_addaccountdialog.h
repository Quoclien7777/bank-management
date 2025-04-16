/********************************************************************************
** Form generated from reading UI file 'addaccountdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDACCOUNTDIALOG_H
#define UI_ADDACCOUNTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddAccountDialog
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QLineEdit *lineEditExtra;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QLineEdit *lineEditNumber;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QLineEdit *lineEditName;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *lineEditBalance;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QComboBox *comboBoxType;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton;

    void setupUi(QDialog *AddAccountDialog)
    {
        if (AddAccountDialog->objectName().isEmpty())
            AddAccountDialog->setObjectName("AddAccountDialog");
        AddAccountDialog->resize(480, 640);
        verticalLayoutWidget = new QWidget(AddAccountDialog);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(10, 90, 451, 541));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName("label_5");

        horizontalLayout_7->addWidget(label_5);

        lineEditExtra = new QLineEdit(verticalLayoutWidget);
        lineEditExtra->setObjectName("lineEditExtra");

        horizontalLayout_7->addWidget(lineEditExtra);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");

        horizontalLayout_6->addWidget(label);

        lineEditNumber = new QLineEdit(verticalLayoutWidget);
        lineEditNumber->setObjectName("lineEditNumber");

        horizontalLayout_6->addWidget(lineEditNumber);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout_5->addWidget(label_2);

        lineEditName = new QLineEdit(verticalLayoutWidget);
        lineEditName->setObjectName("lineEditName");

        horizontalLayout_5->addWidget(lineEditName);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName("label_3");

        horizontalLayout_4->addWidget(label_3);

        lineEditBalance = new QLineEdit(verticalLayoutWidget);
        lineEditBalance->setObjectName("lineEditBalance");

        horizontalLayout_4->addWidget(lineEditBalance);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName("label_4");

        horizontalLayout->addWidget(label_4);

        comboBoxType = new QComboBox(verticalLayoutWidget);
        comboBoxType->setObjectName("comboBoxType");

        horizontalLayout->addWidget(comboBoxType);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName("pushButton");

        horizontalLayout_3->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(AddAccountDialog);

        QMetaObject::connectSlotsByName(AddAccountDialog);
    } // setupUi

    void retranslateUi(QDialog *AddAccountDialog)
    {
        AddAccountDialog->setWindowTitle(QCoreApplication::translate("AddAccountDialog", "Dialog", nullptr));
        label_5->setText(QCoreApplication::translate("AddAccountDialog", " Interest Rate/ Overdraft Fee", nullptr));
        label->setText(QCoreApplication::translate("AddAccountDialog", "ID Account'", nullptr));
        label_2->setText(QCoreApplication::translate("AddAccountDialog", "Name", nullptr));
        label_3->setText(QCoreApplication::translate("AddAccountDialog", "Balance", nullptr));
        label_4->setText(QCoreApplication::translate("AddAccountDialog", "Type", nullptr));
        pushButton->setText(QCoreApplication::translate("AddAccountDialog", "Create", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddAccountDialog: public Ui_AddAccountDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDACCOUNTDIALOG_H
