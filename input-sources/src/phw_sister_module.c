/*
 * This file is part of of the software-project PHW and licensed under the
 * terms of the BSD-3-Clause license
 *
 * Copyright 2020 K. BSD.c-Reincke <k.reincke@fodina.de>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its
 * contributors may be used to endorse or promote products derived from this
 * software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * file <phw_sister_module.c> version <#1.0.0#> of project <PHW>
 */

/** \file phw_sister_module.c
 *  \brief all definitions of and for the module Phw_sister_module
 *
 *  \author
 */


/* (1.A) beware of including the extern-declarations of global
 * variables which will be defined inside of this module-definition */

/** \def DEFINING_PHW_SISTER_MODULE
 *  if defined external-variable-declarations in phw_sister_module.h are ignored
 */

#define DEFINING_PHW_SISTER_MODULE

#include <stdlib.h>
#include <stdio.h>
#include "phw_sister_module.h"

/* &&& (1) define local preprocessor-macros &&&&&&&&&&&&&&&&&&&&&&&&&& */

/* &&& (2) define local type-defs &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&& */

/* &&& (3.A) define general visible variables &&&&&&&&&&&&&&&&&&&&&&&& */

/* &&& (3.B) define locally globally visible variable &&&&&&&&&&&&&&&& */
static int phw_smods=0; /**< internal module-counter */

/* &&& (4.A) exported function-declarations -> PHW_SISTER_MODULE.h &&&&&&&&&&&
   &&& (4.B) declare locally visible functions &&&&&&&&&&&&&&&&&&&&&&& */


/* &&& (5) define exported functions [ -> PHW_SISTER_MODULE.h / (4.A) ] &&&&&& */

/**
 *  \brief initialization (could malloc object-memory-blocks)
 *
 *  for initializing where for example memory could be malloced
 */
int init_smo(void)
{
  phw_smods++;
  printf("instantiated sister module %d\n",phw_smods);
  return phw_smods;
}

/**
 *  \brief delete (could free malloced object-memory-blocks)
 *
 *  for deleting of malloced memory (for example)
 *
 *  \param obj id of the module
 *  \return nothing
 */
void delete_smo(int obj)
{
  phw_smods--;
  printf("destroyed sister module %d (still living %d)\n",obj,phw_smods);
}

/**
 *  \brief say hello for doing anything
 *
 *  \param obj id of the module
 *  \return nothing
 */
void speak_smo(int obj, char* msg)
{
  char* hello="hello";
  if (!(msg)) msg=hello;
  printf("PHW:smo (BSD-3CL) %d says: %s\n",obj,msg);
}

/* &&& (6) define local subfunctions  &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&& */
