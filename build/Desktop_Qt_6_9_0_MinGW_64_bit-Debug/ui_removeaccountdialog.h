/********************************************************************************
** Form generated from reading UI file 'removeaccountdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVEACCOUNTDIALOG_H
#define UI_REMOVEACCOUNTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RemoveAccountDialog
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLineEdit *lineEditAccountNum;
    QHBoxLayout *horizontalLayout;
    QLabel *labelResult;

    void setupUi(QDialog *RemoveAccountDialog)
    {
        if (RemoveAccountDialog->objectName().isEmpty())
            RemoveAccountDialog->setObjectName("RemoveAccountDialog");
        RemoveAccountDialog->resize(480, 640);
        buttonBox = new QDialogButtonBox(RemoveAccountDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(10, 600, 461, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        verticalLayoutWidget = new QWidget(RemoveAccountDialog);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(10, 80, 441, 481));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout_4->addWidget(label_2);

        lineEditAccountNum = new QLineEdit(verticalLayoutWidget);
        lineEditAccountNum->setObjectName("lineEditAccountNum");

        horizontalLayout_4->addWidget(lineEditAccountNum);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        labelResult = new QLabel(verticalLayoutWidget);
        labelResult->setObjectName("labelResult");
        QFont font;
        font.setPointSize(15);
        labelResult->setFont(font);
        labelResult->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(labelResult);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(RemoveAccountDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, RemoveAccountDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, RemoveAccountDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(RemoveAccountDialog);
    } // setupUi

    void retranslateUi(QDialog *RemoveAccountDialog)
    {
        RemoveAccountDialog->setWindowTitle(QCoreApplication::translate("RemoveAccountDialog", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("RemoveAccountDialog", "Nh\341\272\255p ID t\303\240i kho\341\272\243n", nullptr));
        labelResult->setText(QCoreApplication::translate("RemoveAccountDialog", "Result ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RemoveAccountDialog: public Ui_RemoveAccountDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVEACCOUNTDIALOG_H
