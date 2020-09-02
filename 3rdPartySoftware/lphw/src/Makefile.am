# Copyright (C) 2020 Karsten Reincke / Deutsche Telekom AG
#
# The LHPW project (Library for a Plain Hello World Program) is
# licensed under the Apache License, Version 2.0 (the "License");
# you may not use the software except in compliance with the License.
#
#  
# file <src/Makefile.am> version <#1.0.0#> of project <LPHW>


AM_CFLAGS = -DLinux -Wall -ansi -pedantic
#AM_CFLAGS = -DLinux -Wall -ansi -pedantic -DXOPEN_SOURCE=500
#AM_CFLAGS = -DLinux -Wall -ansi -pedantic -g
#AM_CFLAGS = -DLinux -Wall -ansi -pedantic -O3
#AM_CFLAGS = -DLinux -Wall -ansi -pedantic -g -pg

SUBDIRS=
AM_CPPFLAGS = -I$(top_srcdir)/lib

bin_PROGRAMS = testlphw
testlphw_SOURCES = \
    testlphw.c 
testlphw_DEPENDENCIES = \
    ../lib/lphw.c ../lib/lphw.h
testlphw_LDADD = -llphw
testlphw_LDFLAGS = -L$(top_builddir)/lib

