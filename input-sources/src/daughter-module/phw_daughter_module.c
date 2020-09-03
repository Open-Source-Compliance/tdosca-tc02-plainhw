/*
 * This file is part of of the software-project PHW and distributed under
 * the terms of the MIT License
 *
 * Copyright (C) 2020 K. MIT.c-Reincke 
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to
 * deal in the Software without restriction, including without limitation the
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 *
 * file <phw_daughter_module.c> version <#1.0.0#> of project <PHW>
 */

/** \file phw_daughter_module.c
 *  \brief all definitions of and for the module Phw_daughter_module
 *
 *  \author
 */


/* (1.A) beware of including the extern-declarations of global
 * variables which will be defined inside of this module-definition */

/** \def DEFINING_PHW_DAUGHTER_MODULE
 *  if defined external-variable-declarations in phw_daughter_module.h are ignored
 */

#define DEFINING_PHW_DAUGHTER_MODULE

#include <stdlib.h>
#include <stdio.h>
#include "phw_daughter_module.h"

/* &&& (1) define local preprocessor-macros &&&&&&&&&&&&&&&&&&&&&&&&&& */

/* &&& (2) define local type-defs &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&& */

/* &&& (3.A) define general visible variables &&&&&&&&&&&&&&&&&&&&&&&& */

/* &&& (3.B) define locally globally visible variable &&&&&&&&&&&&&&&& */
static int dmods=0; /**< internal module-counter */

/* &&& (4.A) exported function-declarations -> PHW_DAUGHTER_MODULE.h &&&&&&&&&&&
   &&& (4.B) declare locally visible functions &&&&&&&&&&&&&&&&&&&&&&& */


/* &&& (5) define exported functions [ -> PHW_DAUGHTER_MODULE.h / (4.A) ] &&&&&& */

/**
 *  \brief initialization (could malloc object-memory-blocks)
 *
 *  for initializing where for example memory could be malloced
 */
int init_dmo(void)
{
  dmods++;
  printf("instantiated daughter module %d\n",dmods);
  return dmods;
}

/**
 *  \brief delete (could free malloced object-memory-blocks)
 *
 *  for deleting of malloced memory (for example)
 *
 *  \param obj id of the module
 *  \return nothing
 */
void delete_dmo(int obj)
{
  dmods--;
  printf("destroyed daughter module %d (still living %d)\n",obj,dmods);
}

/**
 *  \brief say hello for doing anything
 *
 *  \param obj id of the module
 *  \return nothing
 */

/**
 *  \brief say hello for doing anything
 *
 *  \param obj id of the module
 *  \return nothing
 */
void speak_dmo(int obj, char* msg)
{
  char* hello="hello";
  if (!(msg)) msg=hello;
  printf("PHW:dmo %d says: %s\n",obj,msg);
}
/* &&& (6) define local subfunctions  &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&& */
