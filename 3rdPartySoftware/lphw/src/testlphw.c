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
    int lobj1,
        lobj2;

    printf("starting the lphw-lib test:\n");

    lobj1=init_lphw_object();
    lobj2=init_lphw_object();

    hello_lphw_object(lobj1);
    hello_lphw_object(lobj2);

    delete_lphw_object(lobj1);
    delete_lphw_object(lobj2);

    printf("---------------------------\n");


    return 0;
}
