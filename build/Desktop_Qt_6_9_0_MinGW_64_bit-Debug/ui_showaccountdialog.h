/********************************************************************************
** Form generated from reading UI file 'showaccountdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWACCOUNTDIALOG_H
#define UI_SHOWACCOUNTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_ShowAccountDialog
{
public:
    QDialogButtonBox *buttonBox;
    QTextEdit *textEditAccounts;

    void setupUi(QDialog *ShowAccountDialog)
    {
        if (ShowAccountDialog->objectName().isEmpty())
            ShowAccountDialog->setObjectName("ShowAccountDialog");
        ShowAccountDialog->resize(480, 640);
        buttonBox = new QDialogButtonBox(ShowAccountDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(10, 600, 461, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        textEditAccounts = new QTextEdit(ShowAccountDialog);
        textEditAccounts->setObjectName("textEditAccounts");
        textEditAccounts->setGeometry(QRect(3, 104, 481, 471));
        textEditAccounts->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOn);
        textEditAccounts->setReadOnly(true);

        retranslateUi(ShowAccountDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ShowAccountDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ShowAccountDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ShowAccountDialog);
    } // setupUi

    void retranslateUi(QDialog *ShowAccountDialog)
    {
        ShowAccountDialog->setWindowTitle(QCoreApplication::translate("ShowAccountDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowAccountDialog: public Ui_ShowAccountDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWACCOUNTDIALOG_H
