#-------------------------------------------------
#
# Project created by QtCreator 2018-07-17T10:34:13
#
#-------------------------------------------------

QT       -= gui

TARGET = pinyin
TEMPLATE = lib
CONFIG += staticlib
DESTDIR += ../../../../DWKeyboard/lib
CONFIG(debug, debug|release){
    TARGET = pinyind
} else {
    TARGET = pinyin
}

INCLUDEPATH += include

SOURCES += share/dictbuilder.cpp \
    share/dictlist.cpp \
    share/dicttrie.cpp \
    share/lpicache.cpp \
    share/matrixsearch.cpp \
    share/mystdlib.cpp \
    share/ngram.cpp \
    share/pinyinime.cpp \
    share/searchutility.cpp \
    share/spellingtable.cpp \
    share/spellingtrie.cpp \
    share/splparser.cpp \
    share/sync.cpp \
    share/userdict.cpp \
    share/utf16char.cpp \
    share/utf16reader.cpp

HEADERS += include/atomdictbase.h \
    include/dictbuilder.h \
    include/dictdef.h \
    include/dictlist.h \
    include/dicttrie.h \
    include/lpicache.h \
    include/matrixsearch.h \
    include/mystdlib.h \
    include/ngram.h \
    include/pinyinime.h \
    include/searchutility.h \
    include/spellingtable.h \
    include/spellingtrie.h \
    include/splparser.h \
    include/sync.h \
    include/userdict.h \
    include/utf16char.h \
    include/utf16reader.h

OTHER_FILES +=\
    data/rawdict_utf16_65105_freq.txt \
    data/valid_utf16.txt

win32 {
    CONFIG += qt
    QT = core
}

unix {
    target.path = /usr/lib
    INSTALLS += target
}
