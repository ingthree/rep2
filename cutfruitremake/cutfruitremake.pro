QT       += core gui
QT       += multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    apple.cpp \
    banana.cpp \
    bomb.cpp \
    choose.cpp \
    classical.cpp \
    classical2.cpp \
    endgame.cpp \
    helpwidget.cpp \
    knife.cpp \
    main.cpp \
    trap.cpp \
    watermelon.cpp \
    widget.cpp

HEADERS += \
    apple.h \
    banana.h \
    bomb.h \
    choose.h \
    classical.h \
    classical2.h \
    endgame.h \
    helpwidget.h \
    knife.h \
    trap.h \
    watermelon.h \
    widget.h

FORMS += \
    widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc
