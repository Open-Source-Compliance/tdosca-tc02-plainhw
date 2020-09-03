#!/bin/sh
#
# Copyright (C) 2020 Karsten Reincke / Deutsche Telekom AG <karsten.reincke@telekom.de>
#  
# The LHPW project (Library for a Plain Hello World Program) is 
# licensed under the Apache License, Version 2.0 (the "License"); 
# you may not use the software except in compliance with the License. 
#  
# file <configure.ac> version <#1.0.0#> of project <LPHW>

dnl process this file with autoconf to produce a configure script
dnl (1) -------- general startmacros
AC_INIT([lphw],[1.0.0])
AM_INIT_AUTOMAKE()
AM_CONFIG_HEADER(config.h)
AC_PREFIX_DEFAULT(/usr/local/)
AC_PROG_MAKE_SET

dnl (2) -------- set of available languages

dnl (3) -------- checks for programs

AC_PROG_CC
AC_PROG_CPP
AC_AIX
AC_ISC_POSIX
AC_MINIX
AC_HEADER_STDC

dnl (4) -------- checks for libraries
AC_PROG_LIBTOOL

dnl (8) -------- determine whole directory-structure
AC_OUTPUT(Makefile doc/Makefile lib/Makefile src/Makefile)
