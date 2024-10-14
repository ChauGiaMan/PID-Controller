QT       += core gui network serialport
    quick
QT += quickwidgets
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0
INCLUDEPATH += include/
VPATH += src/

SOURCES += \
    include/crc16.cpp \
    include/qcustomplot.cpp \
    include/receive_frame.cpp \
    main.cpp \
    src/mainwindow.cpp

HEADERS += \
    include/crc16.h \
    include/mainwindow.h \
    include/qcustomplot.h \
    include/receive_frame.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
