/*
 * This file is part of of the software-project PHW and licensed under the
 * terms of the BSD-3-Clause license
 *
 * Copyright 2020 K. BSD.h-Reincke <k.reincke@fodina.de>
 *
 * For geeting the license details see the header in file phw_sister_module.c
 *
 * file <phw_sister_module.h> version <#1.0.0#> of project <PHW>
 */

/** \file phw_sister_module.h
 *  \brief includable declarations of and for the module Phw_sister_module
 *
 *  \author Karsten Reincke,
 *
 */

#ifndef  PHW_SISTER_MODULE_h
#define  PHW_SISTER_MODULE_h ///< marks that PHW_SISTER_MODULE.h has already been included

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
int init_smo(void);

/**
 *  \brief delete (could free malloced object-memory-blocks)
 */
void delete_smo(int obj);


/**
 *  \brief say hello for doing anything
 */
void speak_smo(int obj, char *msg);

#endif
