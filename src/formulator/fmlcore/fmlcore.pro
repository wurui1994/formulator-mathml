# -----------------------------------------------------------
# This file is generated by the Qt Visual Studio Integration.
# -----------------------------------------------------------

TEMPLATE = lib
TARGET = fmlcore
DESTDIR = build/bin/debug
QT += network svg
CONFIG += debug
DEFINES += FMLCORE_LIB QT_SVG_LIB QT_NETWORK_LIB
INCLUDEPATH += include \
    ./GeneratedFiles \
    ./GeneratedFiles/Debug
LIBPATH += build/bin/debug
LIBS += -lhutils -lhmathast
DEPENDPATH += .
MOC_DIR += ./GeneratedFiles/debug
OBJECTS_DIR += build/obj/debug/fmlcore
UI_DIR += build/uic
RCC_DIR += build/rcc

#Include file(s)
include(fmlcore.pri)