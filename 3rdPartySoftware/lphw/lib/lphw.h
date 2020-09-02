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
 * copyright conditions offered by the company Deutsche Telekom AG
 *
 * file <lphw.h> version <#1.0.0#> of project <LPHW>
 */

/** \file lphw.h
 *  \brief includable declarations of and for the module Lphw
 *
 *  \author
 *
 */

#ifndef  LPHW_h
#define  LPHW_h ///< marks that LPHW.h has already been included

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

/* &&& (1) define exported preprocessor-macros &&&&&&&&&&&&&&&&&&&&&&& */

/* &&& (2) define exported type-defs &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&& */

/* &&& (3) declare externally visible variables &&&&&&&&&&&&&&&&&&&&&& */

/* &&& (4) declare exported functions  &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&& */

/**
 *  \brief initialization (could malloc object-memory-blocks)
 */
int init_lphw_object(void);

/**
 *  \brief delete (could free malloced object-memory-blocks)
 */
void delete_lphw_object(int obj);

/**
 *  \brief saying hello (as a dummy function)
 */
void hello_lphw_object(int obj);


#endif
