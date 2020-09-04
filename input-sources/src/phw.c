/*
 * Copyright (C) 2020 Karsten Reincke, Deutsche Telekom AG
 *
 * This file is part of of the software-project PHW.
 *
 * PHW is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * PHW is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 *
 * file <phw.c> version <#1.0.0#> of project <PHW>
 */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <stdlib.h>
#include <stdio.h>
#include "phw_sister_module.h"
#include <phw_daughter_module.h>
#include <lphw.h>

int main (int argn, char * argv[])
{
    int smo,dmo,lmo;

    smo=init_smo();
    dmo=init_dmo();
    lmo=init_lphw_object();

    printf("PHW:main says: hello\n");
/*
 *  Author: Peerceval LeZen
 *
 * simplified message structure
 */
    speak_smo(smo,"hola");
    speak_dmo(dmo,"hallo");
    hello_lphw_object(lmo);

/* \author { kreincke }:
 * adopted exit structure
 */
    delete_smo(smo);
    delete_dmo(dmo);
    delete_lphw_object(lmo);
/*
 * @Author: Peerceval
 *
 * Added return value
 */
    return 0;
}
