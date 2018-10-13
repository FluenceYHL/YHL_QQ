#-------------------------------------------------
#
# Project created by QtCreator 2018-10-12T15:21:31
#
#-------------------------------------------------


QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = yhl_QQ
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        login.cpp \
    rigster_dialog.cpp \
    qq_list.cpp \
    person.cpp \
    person_data.cpp \
    self_info.cpp

HEADERS += \
        login.h \
    rigster_dialog.h \
    person_data.h \
    person.h \
    scopeguard.h \
    qq_list.h \
    self_info.h \
    singleton.h \
    lazy_holder.h

FORMS += \
        login.ui \
    rigster_dialog.ui \
    qq_list.ui \
    self_info.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    ../build-yhl_QQ-Desktop_Qt_5_11_2_GCC_64bit-Debug/database/persons.txt

RESOURCES +=
