/*
*********************************************************************************************************
*                                       uC/Probe Communication
*
*                    Copyright 2007-2020 Silicon Laboratories Inc. www.silabs.com
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
*
*                                        COMMUNICATION: RS-232
*                                             NO-OS PORT
*
* Filename : probe_rs232_os.c
* Version  : V2.30
*********************************************************************************************************
* Note(s)  : (1) This file is the no-OS layer for the uC/Probe RS-232 Communication Module.
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                            INCLUDE FILES
*********************************************************************************************************
*/

#include  <probe_com.h>
#include  <probe_rs232.h>


/*
*********************************************************************************************************
*                                               ENABLE
*
* Note(s) : (1) See 'probe_rs232.h  ENABLE'.
*********************************************************************************************************
*/

#if (PROBE_COM_CFG_RS232_EN == DEF_ENABLED)                     /* See Note #1.                                         */


/*
*********************************************************************************************************
*                                            LOCAL DEFINES
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                           LOCAL CONSTANTS
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                          LOCAL DATA TYPES
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                            LOCAL TABLES
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                       LOCAL GLOBAL VARIABLES
*********************************************************************************************************
*/



/*
*********************************************************************************************************
*                                      LOCAL FUNCTION PROTOTYPES
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                         ProbeRS232_OS_Init()
*
* Description : Create RTOS objects for RS-232 communication.
*
* Argument(s) : none.
*
* Return(s)   : DEF_OK,   if OS initialization successful.
*               DEF_FAIL, otherwise.
*
* Caller(s)   : ProbeRS232_Init().
*
* Note(s)     : none.
*********************************************************************************************************
*/

#if (PROBE_RS232_CFG_PARSE_TASK_EN == DEF_ENABLED)
CPU_BOOLEAN  ProbeRS232_OS_Init (void)
{
    return (DEF_OK);
}
#endif


/*
*********************************************************************************************************
*                                       ProbeRS232_OS_Pend()
*
* Description : Wait for a packet to be received.
*
* Argument(s) : none.
*
* Return(s)   : none.
*
* Caller(s)   : ProbeRS232_Task().
*
* Note(s)     : none.
*********************************************************************************************************
*/

#if (PROBE_RS232_CFG_PARSE_TASK_EN == DEF_ENABLED)
void  ProbeRS232_OS_Pend (void)
{

}
#endif


/*
*********************************************************************************************************
*                                       ProbeRS232_OS_Post()
*
* Description : Notify a pending task that a packet has been receieved.
*
* Argument(s) : none.
*
* Return(s)   : none.
*
* Caller(s)   : ProbeRS232_RxPkt().
*
* Note(s)     : none.
*********************************************************************************************************
*/

#if (PROBE_RS232_CFG_PARSE_TASK_EN == DEF_ENABLED)
void  ProbeRS232_OS_Post (void)
{

}
#endif


/*
*********************************************************************************************************
*                                              ENABLE END
*
* Note(s) : See 'ENABLE  Note #1'.
*********************************************************************************************************
*/

#endif
