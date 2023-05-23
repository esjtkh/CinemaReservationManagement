QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addnewmoviepage.cpp \
    admindeletepage.cpp \
    admineditpage2.cpp \
    adminloginpage.cpp \
    adminpage.cpp \
    clientloginpage.cpp \
    clientpage.cpp \
    clientpurchasehistory.cpp \
    clientsignuppage.cpp \
    firstwindow.cpp \
    main.cpp \
    mainclass.cpp \
    movieinfopage.cpp \
    purchasehistorypage.cpp \
    showmoviespage.cpp

HEADERS += \
    addnewmoviepage.h \
    admindeletepage.h \
    admineditpage2.h \
    adminloginpage.h \
    adminpage.h \
    clientloginpage.h \
    clientpage.h \
    clientpurchasehistory.h \
    clientsignuppage.h \
    firstwindow.h \
    mainclass.h \
    movieinfopage.h \
    purchasehistorypage.h \
    showmoviespage.h

FORMS += \
    addnewmoviepage.ui \
    admindeletepage.ui \
    admineditpage2.ui \
    adminloginpage.ui \
    adminpage.ui \
    clientloginpage.ui \
    clientpage.ui \
    clientpurchasehistory.ui \
    clientsignuppage.ui \
    firstwindow.ui \
    movieinfopage.ui \
    purchasehistorypage.ui \
    showmoviespage.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
