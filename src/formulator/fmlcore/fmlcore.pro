# -----------------------------------------------------------
# This file is generated by the Qt Visual Studio Integration.
# -----------------------------------------------------------

TEMPLATE = lib
TARGET = fmlcore
DESTDIR = /mmlsoft/run/debug
QT += network svg
CONFIG += debug
DEFINES += FMLCORE_LIB QT_SVG_LIB QT_NETWORK_LIB
INCLUDEPATH += /mmlsoft/include \
    ./GeneratedFiles \
    ./GeneratedFiles/Debug
LIBPATH += /mmlsoft/run/debug
LIBS += -lhutils -lhmathast
DEPENDPATH += .
MOC_DIR += ./GeneratedFiles/debug
OBJECTS_DIR += /mmlsoft/int/debug/fmlcore
UI_DIR += ./GeneratedFiles
RCC_DIR += ./GeneratedFiles

#Include file(s)
include(fmlcore.pri)
