#!/bin/sh
#
# Copyright (C) 2020 Karsten Reincke / Deutsche Telekom AG
#
# The LHPW project (Library for a Plain Hello World Program) is
# licensed under the Apache License, Version 2.0 (the "License");
# you may not use the software except in compliance with the License.
#  
# file <prj.spec> version <#1.0.0#> of project <LPHW>

############################################################################
# (1) internally usable variables (%define ATTRIBUTE VALUE)
############################################################################

# (a) increment this number manually before building the next rpm
%define PRJ_RPMBUILDNR 1

# (b) change this prefix to the locally used top-build-directory
%define PRJ_BUILD_PREFIX /tmp

# (c) change this prefix to the intended install-prefix of the target machine
%define PRJ_TARGET_PREFIX /usr/local

# (d) project-name (will automatically be generated by gptg)
%define PRJ_NAME lphw
# (e) project-release (will automatically updated by change-release)
%define PRJ_RELEASE 1.0.0

# (f) project-source-top-dir (generated by extracting the tarbal)
%define PRJ_SRCTOPDIR %{PRJ_NAME}-%{PRJ_RELEASE}

# (g) project-source-tarball (generated by make dist)
%define PRJ_TARBALL %{PRJ_SRCTOPDIR}.tar.gz

# (h) specify the locally used top installation point
%define PRJ_TOP_INST_DIR %{PRJ_BUILD_PREFIX}/%{PRJ_NAME}-%{PRJ_RELEASE}-buildroot

############################################################################
# (2) The preamble contains a wealth of information about the package
#     being built, and the people that built it
############################################################################

#################################################
# (A) change the folowing lines manually #
#################################################
# (a) The summary line defines a one-line description pf the packaged softwarte
Summary: Lphw

# (b) The copyright line holds the packaged software's copyright information
Copyright: Special Compay Licence

# (c) The group line says how the package is grouped with other packages
Group: ???/???

# (d) insert the URL for getting the source-tarball (if possible)
# Source:

# (e) insert the URL for getting the source-documentation + info (if possible)
# Url:

# (f) The distribution line contains the name of the product
#     which the packaged software is part of
# Distribution:

# (g) The vendor line identifies the organization that distributes the software
# Vendor:

# (h) The package line identifies the organization that actually packages the software
# Packager:

BuildRoot: %{PRJ_TOP_INST_DIR}

#################################################
# (B) don't change the following lines manually #
#################################################

# (a) The name line defines what the package will actually be called.
Name: %{PRJ_NAME}

# (b) The version line should be set to the version of the software being packaged
Version: %{PRJ_RELEASE}

# (c) The release presents the number of times the software has been packaged
Release: %{PRJ_RPMBUILDNR}


Prefix: %{PRJ_TARGET_PREFIX}
############################################################################
# (3) The description should be several sentences describing
#     to an uniformed user, what the software doess
############################################################################
%description
LPHW-Line-1:
LPHW-Line-2:
############################################################################
# (4) In the prep-section, the focus is entirely on directing RPM through
#     the process of preparing the software for building
#   	(= unpack / collect / checkout all the needed sources).
#     The working directory will implicitely changed onto
#     /usr/src/packages/BUILD by the rpm command itself.
#     If you unpack / collect / checkout anything it is positioned there.
#     You can denote the directory where you've really started the rpm
#     by the variable OLDPWD
############################################################################
%prep
OSP=$OLDPWD
ASP=`pwd`
rm -rf %{BuildRoot}
cd ${OSP}
./reconf
./configure
make dist
cd ${ASP}
if [ -d %{PRJ_SRCTOPDIR} ]; then rm -r  %{PRJ_SRCTOPDIR}; fi
tar -xzvf ${OSP}/%{PRJ_TARBALL}
cd %{PRJ_SRCTOPDIR}
./reconf
./configure --prefix=%{PRJ_TOP_INST_DIR}/%{PRJ_TARGET_PREFIX}

############################################################################
# (5) In the build-section, the focus is entirely on directing RPM through
#     the process of building the software
############################################################################
%build
cd %{PRJ_SRCTOPDIR}
make

############################################################################
# (6) In the install-section, the focus is entirely on directing RPM through
#     the process of installing the software into the directory
#     RPM_BUILD_ROOT which has been set by the variable 'BuildRoot'
############################################################################
%install
cd %{PRJ_SRCTOPDIR}
make install


############################################################################
# (7) In the clean-section, the focus is entirely on directing RPM through
#     the process of deleting the software out of the directory
#     RPM_BUILD_ROOT which has been set by the variable 'BuildRoot'
############################################################################
%clean
rm -rf %{BuildRoot}

############################################################################
# (8) In the file-section, the focus is entirely on saying RPM which of
#     the files, which have been installed under RPM_BUILD_ROOT should
#     be added into the package
############################################################################
%files
%defattr(-,root,root)

%{PRJ_TARGET_PREFIX}
