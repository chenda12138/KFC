#-------------------------------------------------
#
# Project created by QtCreator 2019-06-16T17:30:59
#
#-------------------------------------------------

QT       += core gui sql network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = KFC
TEMPLATE = app

INCLUDEPATH += $$PWD/include
include(login/login.pri)
include(database/database.pri)
include(subinfos/subinfos.pri)
include(network/network.pri)
include(subwidgets/subwidgets.pri)


SOURCES += main.cpp\
        mainwindow.cpp \
    globalvars.cpp

HEADERS  += mainwindow.h \
    globalvars.h

FORMS    += mainwindow.ui
