#-------------------------------------------------
#
# Project created by QtCreator 2017-02-04T19:06:53
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = fpui
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    votingmode.cpp

HEADERS  += widget.h \
    votingmode.h

FORMS    += widget.ui \
    votingmode.ui

RESOURCES += \
    images.qrc
