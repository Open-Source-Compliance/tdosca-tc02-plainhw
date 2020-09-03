# Copyright (C) 2020 Karsten Reincke / Deutsche Telekom AG
#
# The LHPW project (Library for a Plain Hello World Program) is
# licensed under the Apache License, Version 2.0 (the "License");
# you may not use the software except in compliance with the License.
#
# file <lib/Makefile.am> version <#1.0.0#> of project <LPHW>

#EXTRA_DIST
#SUBDIRS

AM_CFLAGS = -DLinux -Wall -ansi -pedantic
#AM_CFLAGS = -DLinux -Wall -ansi -pedantic -DXOPEN_SOURCE=500
#AM_CFLAGS = -DLinux -Wall -ansi -pedantic -g
#AM_CFLAGS = -DLinux -Wall -ansi -pedantic -O3
#AM_CFLAGS = -DLinux -Wall -ansi -pedantic -g -pg

include_HEADERS = lphw.h

#lib_LIBRARIES = liblphw.a
#liblphw_a_SOURCES = lphw.c lphw.h

lib_LTLIBRARIES = liblphw.la
liblphw_la_SOURCES = lphw.c lphw.h

liblphw_la_LDFLAGS = -version-info 1:0:0
