#-------------------------------------------------
#
# Project created by QtCreator 2017-05-28T09:00:55
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = deb-installer
TEMPLATE = app

CONFIG += link_pkgconfig
CONFIG += c++11
PKGCONFIG += dtkbase dtkwidget dtkutil

SOURCES += main.cpp\
        main_window.cpp \
    home_page.cpp \
    info_page.cpp \
    install_page.cpp

HEADERS  += main_window.h \
    home_page.h \
    info_page.h \
    install_page.h
