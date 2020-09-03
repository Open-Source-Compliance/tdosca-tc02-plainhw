# Copyright (C) 2020 Karsten Reincke, Deutsche Telekom AG <karsten.reincke@telekom.de>
#  
# This file is part of of the software-project PHW.
# 
# PHW is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 2 of the License, or
# (at your option) any later version.
# 
# PHW is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
# 
#  
# file <src/Makefile.am> version <#1.0.0#> of project <PHW>


AM_CFLAGS = -DLinux -Wall -ansi -pedantic
#AM_CFLAGS = -DLinux -Wall -ansi -pedantic -DXOPEN_SOURCE=500
#AM_CFLAGS = -DLinux -Wall -ansi -pedantic -g
#AM_CFLAGS = -DLinux -Wall -ansi -pedantic -O3
#AM_CFLAGS = -DLinux -Wall -ansi -pedantic -g -pg

SUBDIRS=daughter-module
AM_CPPFLAGS = -I$(top_srcdir)/lib -I$(top_srcdir)/src/daughter-module

bin_PROGRAMS = phw
phw_SOURCES = \
    phw.c phw_sister_module.c phw_sister_module.h
phw_DEPENDENCIES = \
    daughter-module/phw_daughter_module.c daughter-module/phw_daughter_module.h
phw_LDADD = daughter-module/phw_daughter_module.o -llphw
phw_LDFLAGS = -L$(top_builddir)/src/daughter-module

