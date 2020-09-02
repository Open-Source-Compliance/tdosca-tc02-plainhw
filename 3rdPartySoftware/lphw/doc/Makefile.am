# Copyright (C) 2020 Karsten Reincke / Deutsche Telekom AG <karsten.reincke@telekom.de>
#  
# copyright conditions offered by the company Deutsche Telekom AG
#  
# file <doc/Makefile.am> version <#1.0.0#> of project <LPHW>

LPHW_helpdir = $(datadir)/doc/lphw/
LPHW_help_DATA = lphw.html
EXTRA_DIST = lphw.html

doc:
	pandoc -o lphw.html ../README.md

clear:
	rm -rf doxygen

doxygen:
	( cd .. && doxygen Doxyfile)

