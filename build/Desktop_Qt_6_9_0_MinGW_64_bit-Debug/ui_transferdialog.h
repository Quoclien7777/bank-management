/********************************************************************************
** Form generated from reading UI file 'transferdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSFERDIALOG_H
#define UI_TRANSFERDIALOG_H

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

class Ui_TransferDialog
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLineEdit *lineEditFrom;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *lineEditTo;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *lineEditAmount;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonTransfer;

    void setupUi(QDialog *TransferDialog)
    {
        if (TransferDialog->objectName().isEmpty())
            TransferDialog->setObjectName("TransferDialog");
        TransferDialog->resize(480, 640);
        verticalLayoutWidget = new QWidget(TransferDialog);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(20, 40, 421, 591));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");

        horizontalLayout_4->addWidget(label);

        lineEditFrom = new QLineEdit(verticalLayoutWidget);
        lineEditFrom->setObjectName("lineEditFrom");

        horizontalLayout_4->addWidget(lineEditFrom);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout_3->addWidget(label_2);

        lineEditTo = new QLineEdit(verticalLayoutWidget);
        lineEditTo->setObjectName("lineEditTo");

        horizontalLayout_3->addWidget(lineEditTo);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName("label_3");

        horizontalLayout->addWidget(label_3);

        lineEditAmount = new QLineEdit(verticalLayoutWidget);
        lineEditAmount->setObjectName("lineEditAmount");

        horizontalLayout->addWidget(lineEditAmount);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButtonTransfer = new QPushButton(verticalLayoutWidget);
        pushButtonTransfer->setObjectName("pushButtonTransfer");

        horizontalLayout_2->addWidget(pushButtonTransfer);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(TransferDialog);

        QMetaObject::connectSlotsByName(TransferDialog);
    } // setupUi

    void retranslateUi(QDialog *TransferDialog)
    {
        TransferDialog->setWindowTitle(QCoreApplication::translate("TransferDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("TransferDialog", "T\303\240i kho\341\272\243n g\341\273\255i", nullptr));
        label_2->setText(QCoreApplication::translate("TransferDialog", "T\303\240i kho\341\272\243n nh\341\272\255n", nullptr));
        label_3->setText(QCoreApplication::translate("TransferDialog", "S\341\273\221 ti\341\273\201n g\341\273\255i", nullptr));
        pushButtonTransfer->setText(QCoreApplication::translate("TransferDialog", "Chuy\341\273\203n kho\341\272\243n", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TransferDialog: public Ui_TransferDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSFERDIALOG_H
