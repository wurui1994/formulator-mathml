# -----------------------------------------------------------
# This file is generated by the Qt Visual Studio Integration.
# -----------------------------------------------------------

# This is a reminder that you are using a generated .pro file.
# Remove it when you are finished editing this file.
message("You are running qmake on a generated .pro file. This may not work!")


TEMPLATE = app
TARGET = testConsole
DESTDIR = build/bin/win32/debug
CONFIG += debug console
INCLUDEPATH += /mmlsoft/include \
    ./GeneratedFiles/Debug \
    ./src
LIBS += -L"build/bin/win32/debug" \
    -lhmathast \
    -lhmathbs \
    -lhutils
DEPENDPATH += .
MOC_DIR += build/moc
OBJECTS_DIR += build/obj/win32/debug/testConsole
UI_DIR += build/uic
RCC_DIR += build/rcc

#Include file(s)
include(testConsole.pri)
