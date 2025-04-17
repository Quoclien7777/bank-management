QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    account.cpp \
    addaccountdialog.cpp \
    bankmanagement.cpp \
    checking.cpp \
    depositdialog.cpp \
    editdialog.cpp \
    main.cpp \
    mainwindow.cpp \
    removeaccountdialog.cpp \
    saving.cpp \
    showaccountdialog.cpp \
    sortdialog.cpp \
    transaction.cpp \
    transactionhistorydialog.cpp \
    transferdialog.cpp \
    withdrawdialog.cpp

HEADERS += \
    account.h \
    addaccountdialog.h \
    bankmanagement.h \
    checking.h \
    depositdialog.h \
    editdialog.h \
    mainwindow.h \
    removeaccountdialog.h \
    saving.h \
    showaccountdialog.h \
    sortdialog.h \
    transaction.h \
    transactionhistorydialog.h \
    transferdialog.h \
    withdrawdialog.h

FORMS += \
    addaccountdialog.ui \
    depositdialog.ui \
    editdialog.ui \
    mainwindow.ui \
    removeaccountdialog.ui \
    showaccountdialog.ui \
    sortdialog.ui \
    transactionhistorydialog.ui \
    transferdialog.ui \
    withdrawdialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
