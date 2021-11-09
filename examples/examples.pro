#-------------------------------------------------
#
# Project created by QtCreator 2017-07-17T11:33:27
#
#-------------------------------------------------

QT       += core gui core-private

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = examples
TEMPLATE = app
DESTDIR += ../../DWKeyboard/bin
CONFIG(debug, debug|release){
    TARGET = examplesd
    LIBS += -L../../DWKeyboard/bin/ -ldwkeyboardd

} else {
    TARGET = examples
    LIBS += -L../../DWKeyboard/bin/ -ldwkeyboard
}
INCLUDEPATH += ../DWKeyboard/include
SOURCES += main.cpp\
        widget.cpp

HEADERS  += widget.h

FORMS    += widget.ui
