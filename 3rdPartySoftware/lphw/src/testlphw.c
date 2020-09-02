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

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <stdlib.h>
#include <stdio.h>
#include <lphw.h>

int main (int argn, char * argv[])
{
    int lobj_1,
        lobj_2;

    printf("starting the lphw-lib test:\n");

    lobj_1=init_lphw_object();
    lobj_2=init_lphw_object();

    hello_lphw_object(lobj_1);
    hello_lphw_object(lobj_2);

    delete_lphw_object(lobj_1);
    delete_lphw_object(lobj_2);

    printf("---------------------------\n");


    return 0;
}
