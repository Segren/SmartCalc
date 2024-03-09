QT += core gui widgets

CONFIG += c++17

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    ../../backend/ipn_converter.c \
    ../../backend/s21_smart_calc.c \
    ../../backend/stack.c

HEADERS += \
    mainwindow.h \
    ../../backend/ipn_converter.h \
    ../../backend/s21_smart_calc.h \
    ../../backend/stack.h

FORMS += mainwindow.ui

DISTFILES += \
    ../fonts/digital-7 (mono).ttf \
    ../fonts/digital-7.ttf \
    ../images/divByZero.png

