/*
*********************************************************************************************************
*                                             uCOS XSDK BSP
*
*                    Copyright 2014-2020 Silicon Laboratories Inc. www.silabs.com
*
*                                 SPDX-License-Identifier: APACHE-2.0
*
*               This software is subject to an open source license and is distributed by
*                Silicon Laboratories Inc. pursuant to the terms of the Apache License,
*                    Version 2.0 available at www.apache.org/licenses/LICENSE-2.0.
*
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*                                   USB APPLICATION INITIALIZATION
*
* File : app_usbh.h
*********************************************************************************************************
*/

#ifndef  APP_USBH_MODULE_PRESENT
#define  APP_USBH_MODULE_PRESENT


/*
*********************************************************************************************************
*                                              INCLUDE FILES
*********************************************************************************************************
*/

#include  <cpu.h>
#include  <lib_def.h>


/*
*********************************************************************************************************
*                                                 EXTERNS
*********************************************************************************************************
*/

#ifdef   APP_USBH_MODULE
#define  APP_USBH_MODULE_EXT
#else
#define  APP_USBH_MODULE_EXT  extern
#endif


/*
*********************************************************************************************************
*                                                 DEFINES
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                      CONDITIONAL INCLUDE FILES
*********************************************************************************************************
*/

#include    "app_usbh_msc.h"


/*
*********************************************************************************************************
*                                               DATA TYPES
*********************************************************************************************************
*/

typedef  CPU_STK  USBH_STK;                                     /* Task's stack data type.                              */


/*
*********************************************************************************************************
*                                            GLOBAL VARIABLES
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                                 MACRO'S
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                           FUNCTION PROTOTYPES
*********************************************************************************************************
*/

CPU_BOOLEAN  App_USBH_Init (void);


/*
*********************************************************************************************************
*                                             MODULE END
*********************************************************************************************************
*/

#endif
