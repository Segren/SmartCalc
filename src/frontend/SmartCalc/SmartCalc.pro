QT += core gui widgets printsupport

CONFIG += c++17

SOURCES += \
    credit.cpp \
    deposit.cpp \
    graph.cpp \
    main.cpp \
    mainwindow.cpp \
    ../../backend/ipn_converter.c \
    ../../backend/s21_smart_calc.c \
    ../../backend/stack.c \
    qcustomplot.cpp

HEADERS += \
    credit.h \
    deposit.h \
    graph.h \
    mainwindow.h \
    ../../backend/ipn_converter.h \
    ../../backend/s21_smart_calc.h \
    ../../backend/stack.h \
    qcustomplot.h

FORMS += mainwindow.ui \
    credit.ui \
    deposit.ui \
    graph.ui

DISTFILES += \
    ../fonts/digital-7 (mono).ttf \
    ../fonts/digital-7.ttf \
    ../images/divByZero.png

