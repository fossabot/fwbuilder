#-*- mode: makefile; tab-width: 4; -*-
#

include(../qmake.inc)

TEMPLATE = lib

win32 {
	CONFIG -= embed_manifest_exe
}

QMAKE_RUN_CC  = echo
QMAKE_RUN_CXX = echo
QMAKE_LINK    = echo

TARGET        = etc

dtd.files     = fwbuilder.dtd
dtd.path      = ""

INSTALLS   -= target
INSTALLS   += dtd
