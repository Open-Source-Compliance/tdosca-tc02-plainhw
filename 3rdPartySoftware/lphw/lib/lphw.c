/*
 * Copyright (C) 2020 Karsten Reincke / Deutsche Telekom AG
 *
 * This file of the project 'Library for a Plain Hello World Program (LPHW)' is
 * licensed under the Apache License, Version 2.0 (the "License"); you may not
 * use the software except in compliance with the License. You may obtain a
 * copy of the License at http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
 * License for the specific language governing permissions and limitations
 * under the License.
 *
 * file <lphw.c> version <#1.0.0#> of project <LPHW>
 */

/** \file lphw.c
 *  \brief all definitions of and for the module Lphw
 *
 *  \author
 */


/* (1.A) beware of including the extern-declarations of global
 * variables which will be defined inside of this module-definition */

/** \def DEFINING_LPHW
 *  if defined external-variable-declarations in lphw.h are ignored
 */

#define DEFINING_LPHW

#include <stdlib.h>
#include <stdio.h>
#include "lphw.h"

/* &&& (1) define local preprocessor-macros &&&&&&&&&&&&&&&&&&&&&&&&&& */

/* &&& (2) define local type-defs &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&& */

/* &&& (3.A) define general visible variables &&&&&&&&&&&&&&&&&&&&&&&& */

/* &&& (3.B) define locally globally visible variable &&&&&&&&&&&&&&&& */
static int lphw_obs=0; 	/**< internal object counter */

/* &&& (4.A) exported function-declarations -> LPHW.h &&&&&&&&&&&
   &&& (4.B) declare locally visible functions &&&&&&&&&&&&&&&&&&&&&&& */


/* &&& (5) define exported functions [ -> LPHW.h / (4.A) ] &&&&&& */

/**
 *  \brief initialization (could malloc object-memory-blocks)
 *
 *  for initializing where for example memory could be malloced
 */
int init_lphw_object(void) {
  lphw_obs++;
  printf("initialized the %d. lphw_object\n",lphw_obs);
  return lphw_obs;
}

/**
 *  \brief delete (could free malloced object-memory-blocks)
 *
 *  for deleting of malloced memory (for example)
 *
 *  \param obj id of the module
 *  \return nothing
 */
void delete_lphw_object(int obj) {
  lphw_obs--;
  printf("deleted the %d. lphw_object (%d remain(s))\n",obj,lphw_obs);
}

void hello_lphw_object(int obj) {
  printf("hello from the %d. lphw_object\n",obj);
}
/* &&& (6) define local subfunctions  &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&& */
