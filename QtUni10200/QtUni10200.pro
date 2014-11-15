#-------------------------------------------------
#
# Project created by QtCreator 2014-11-15T01:37:19
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QtUni10200
TEMPLATE = app

win32 {
    ROOT_PATH = C:\qt_sdk\usr
}

unix {
    ROOT_PATH = /qt_sdk/usr
}

android {
    DEFINES += AIM_EVT_DISABLED
    ROOT_PATH = /qt_sdk/usr_android
}

DEPENDPATH += . \
               /libs/armeabi-v7a \
               $$ROOT_PATH/include

INCLUDEPATH += .                   \
               $$ROOT_PATH/include \
               ../uni10200


SOURCES += main.cpp\
        mainwindow.cpp \
    ../uni10200/Condominio.cpp \
    ../uni10200/Engine.cpp \
    ../uni10200/radiatore.cpp \
    ../uni10200/ReportBase.cpp \
    ../uni10200/utente.cpp

HEADERS  += mainwindow.h \
    ../uni10200/Condominio.h \
    ../uni10200/Engine.h \
    ../uni10200/radiatore.h \
    ../uni10200/ReportBase.h \
    ../uni10200/utente.h

FORMS    += mainwindow.ui

CONFIG += mobility
MOBILITY = 

QMAKE_LIBDIR += $$ROOT_PATH/lib /libs/armeabi-v7a
win32 {
    QMAKE_LIBDIR += "C:\Qt\Tools\mingw482_32\i686-w64-mingw32\lib"
}
LIBS += -laim-lib-conn -laim-lib-atom-tag -laim-lib-util-func

win32 {
    LIBS += -lws2_32
    target.path = $$ROOT_PATH/bin
    INSTALLS += target
}
