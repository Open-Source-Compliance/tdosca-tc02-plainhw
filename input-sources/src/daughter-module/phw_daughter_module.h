/*
 * This file is part of of the software-project PHW and distributed under
 * the terms of the MIT License
 *
 * Copyright (C) 2020 K. MIT.h-Reincke
 *
 * For getting the license details see the header in file phw_daughter_module.c
 *
 * file <phw_daughter_module.h> version <#1.0.0#> of project <PHW>
 */

/** \file phw_daughter_module.h
 *  \brief includable declarations of and for the module Phw_daughter_module
 *
 *  \author
 *
 */

#ifndef  PHW_DAUGHTER_MODULE_h
#define  PHW_DAUGHTER_MODULE_h ///< marks that PHW_DAUGHTER_MODULE.h has already been included

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

/* &&& (1) define exported preprocessor-macros &&&&&&&&&&&&&&&&&&&&&&& */

/* &&& (2) define exported type-defs &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&& */

/* &&& (3) declare externally visible variables &&&&&&&&&&&&&&&&&&&&&& */

    /* in the header-file they must be declared(!) as extern
     * but in the c-file normally defined. therefore we use
     * a macro for distinguishing and marking the differences */

/* &&& (4) declare exported functions  &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&& */

/**
 *  \brief initialization (could malloc object-memory-blocks)
 */
int init_dmo(void);

/**
 *  \brief delete (could free malloced object-memory-blocks)
 */
void delete_dmo(int obj);

/**
 *  \brief say hello for doing anything
 */
void speak_dmo(int obj, char* msg);


#endif
