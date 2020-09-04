# Compliance Traps of the TDOSCA test case no. 2

The test case input (= open source software)

* includes the sources of a 3rd party library (lphw) into its package instead of requiring it as a preinstalled component. Thus, a compliant package must not only contain the compliance artifacts of the main program, but also those of this 3rd party sub component. 
* includes a 3rd party library (lphw) which
  - must be installed before installing the main program (phw)
  - is licensed under the Apache-2.0 
  - contains a file NOTICE
* consists of a main component (phw.c) licend under the GPL-v2 and two sub components: phw_sister_module licensed under the BSD-3CL + phw_daughter_module licensed under the MIT
* uses the 4 copyright formats (inside of the GPL-v2 licensed file ``phw.c``)
  - ``(C) YEAR Name`` respectively ``COPYRIGHT(C) Name``
  - ``\author`` (Doxygen)
  - ``@Author`` (Annotation)
  - ``Author:`` (Informal)
* uses copyright lines also in the MIT licensed file ``phw_daughter_module.c|h`` and in the BSD-3CL licensed file ``phw_sister_module.c|h`` which must NOT be added into the CR-Line section of the GPL-licensed main program
* integrates the licenses of sub components into the source files
* uses the file COPYING as license file for PHW (as required by the GNU tradition)
* uses the file LICENSE as license file for lphw (as required by the Apacche tradition)
