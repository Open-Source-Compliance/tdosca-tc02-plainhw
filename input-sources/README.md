Copyright (C) 2020 Karsten Reincke, Deutsche Telekom AG <karsten.reincke@telekom.de>
 
## Content
1. [Purpose](#pur)
2. [Prerequisites](#prq)
3. [Download](#dlo)
4. [Installation](#ins)
5. [Usage](#use)
6. [Licensing](#lic)
 
## 1. Purpose <a id="pur"></a>
A  c program licensed under the GPL-v2 with one sub component licensed under the MIT, another component licensed under the BSL-3CL, and a third party library, licensed under the Apache-2.0.
## 2. Prerequisites <a id="prq"></a> 
- glibc
- GNU autotools (libtool, autoconf, automake, make, ...)
## 3. Download <a id="dlo"></a>
repository [https://github.com/Open-Source-Compliance/tdosca-tc02-plainhw](https://github.com/Open-Source-Compliance/tdosca-tc02-plainhw)
## 4. Installation <a id="ins"></a>
* Change into the directory ``input-sources/3rdPartySoftware``
  - ``reconf``
  - ``configure --prefix=/WHEREYOUWANT/``
  - ``make``
  - ``sudo make install``
  - ``sudo ldconfig``
* Change back into the directory input-sources
  - ``reconf``
  - ``configure --prefix=/WHEREYOUWANT/``
  - ``make``
  - ``sudo make install``
  - ``sudo ldconfig``
   
Note: if you install the program at another place than /usr/local or /usr, ensure that 
- your ld.so.conf contains the path to WHEREYOUWANT/lib
- expand your PATH definition by PATH=WHEREYOUWANT/bin:\$PATH
 
## 5. Usage <a id="use"></a>
## 6. Licensing <a id="lic"></a>
 
This file is part of of the software-project PHW.
 
PHW is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.
 
PHW is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
