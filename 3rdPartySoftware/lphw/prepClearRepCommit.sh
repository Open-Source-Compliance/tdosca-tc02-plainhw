#!/bin/sh

if [ ! -f Makefile ];
then
  ./reconf
  ./configure
fi
make distclean

DELCONF_FILES=`ls config.*`
DELETE_FILES=" config.cache    acconfig.h    Makefile    Makefile.in    aclocal.m4    configure    ${DELCONF_FILES}"
for DF in ${DELETE_FILES};
do
  echo "deleting ${DF}"
  find . -name ${DF} -exec rm \{\} \;
done

if [ -e doc/doxygen ]; then 
  rm -rf doc/doxygen/html; 
  rm -rf doc/doxygen/latex; 
fi;

find . -type l -exec rm \{\} \;

find . -type d |  grep -v "CVS" | grep -v ".svn" | while read DIR; do

if [ "$DIR" = "./autom4te.cache" ];
then
  echo "deleting $DIR"
  rm -r $DIR
  continue
fi

if [ "$DIR" = "." ];
then
  continue
fi
(
  cd $DIR
  echo "Makefile.in" > .cvsignore
  echo "Makefile" >> .cvsignore
  echo "*.la" >> .cvsignore
  echo "*.lo" >> .cvsignore
  echo "*.o" >> .cvsignore
  echo ".libs" >> .cvsignore
  echo ".deps" >> .cvsignore

  if [ -e .svn ];
  then
    svn propset svn:ignore -F .cvsignore .;
  fi
  cp .cvsignore .gitignore
)

done

echo "COPYING" > .cvsignore
echo "INSTALL" >> .cvsignore
echo "config.guess" >> .cvsignore
echo "config.sub" >> .cvsignore
echo "install-sh" >> .cvsignore
echo "ltmain.sh" >> .cvsignore
echo "ltconfig" >> .cvsignore
echo "missing" >> .cvsignore
echo "mkinstalldirs" >> .cvsignore
echo "aclocal.m4" >> .cvsignore
echo "configure" >> .cvsignore
echo "Makefile.in" >> .cvsignore
echo "Makefile" >> .cvsignore
echo "stamp-h" >> .cvsignore
echo "config.h" >> .cvsignore
echo "config.log" >> .cvsignore
echo "config.status" >> .cvsignore
echo "libtool" >> .cvsignore
if [ -e .svn ];
then
  svn propset svn:ignore -F .cvsignore .;
fi
cp .cvsignore .gitignore

