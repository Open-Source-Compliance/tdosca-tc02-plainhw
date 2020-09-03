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
# file <doc/Makefile.am> version <#1.0.0#> of project <PHW>

PHW_helpdir = $(datadir)/doc/phw/
PHW_help_DATA = phw.html
EXTRA_DIST = phw.html

doc:
	pandoc -o phw.html ../README.md

clear:
	if [ -e doxygen ]; then rm -rf doxygen ; fi

doxygen:
	( cd .. && doxygen Doxyfile )

