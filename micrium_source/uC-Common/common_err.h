/*
*********************************************************************************************************
*                                              uC/Common
*                                 Common Features for Micrium Stacks
*
*                    Copyright 2013-2021 Silicon Laboratories Inc. www.silabs.com
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
*                                   uC/Common - Generic error codes
*
* Filename : common_err.h
* Version  : V1.02.01
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*********************************************************************************************************
*                                               MODULE
*
* Note(s) : (1) This library header file is protected from multiple pre-processor inclusion through
*               use of the library module present pre-processor macro definition.
*********************************************************************************************************
*********************************************************************************************************
*/

#ifndef  COMMON_ERR_MODULE_PRESENT                              /* See Note #1.                                         */
#define  COMMON_ERR_MODULE_PRESENT


/*
*********************************************************************************************************
*********************************************************************************************************
*                                             DATA TYPES
*********************************************************************************************************
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*                                           COMMON ERR CODES
*
* Note(s) : (1) Caller should NEVER rely on the order/numerical value of ANY of these enum items. Their
*               order within the enum may change and other enum item may be added anywhere, impacting
*               the numerical values of other enum items.
*
*           (2) A function MUST return the most accurate error it can. For example, if a NULL pointer is
*               passed to a function requiring a non-NULL pointer, it should return the RTOS_ERR_NULL_PTR
*               error and NOT RTOS_ERR_INVALID_ARG. A function should only return RTOS_ERR_INVALID_ARG
*               if no other error code can better describe the error that occurred.
*********************************************************************************************************
*/

typedef  enum  rtos_err {
    RTOS_ERR_NONE,                                              /* No err.                                              */

                                                                /* ------------------ FEATURE SUPPORT ----------------- */
    RTOS_ERR_NOT_AVAIL,                                         /* Feature not avail (due to cfg val(s).                */
    RTOS_ERR_NOT_SUPPORTED,                                     /* Feature not supported.                               */

                                                                /* ------------------- INVALID ARGS ------------------- */
    RTOS_ERR_INVALID_ARG,                                       /* Invalid arg or consequence of invalid arg.           */
    RTOS_ERR_NULL_PTR,                                          /* Null ptr.                                            */
    RTOS_ERR_INVALID_STR_LEN,                                   /* Len of str passed is invalid.                        */
    RTOS_ERR_INVALID_CREDENTIALS,                               /* Credentials used are invalid.                        */
    RTOS_ERR_NOT_FOUND,                                         /* Requested item could not be found.                   */

                                                                /* ---------------- CREATION/ALLOCATION --------------- */
    RTOS_ERR_ALLOC,                                             /* Generic alloc err.                                   */
    RTOS_ERR_CREATE_FAIL,                                       /* Gen create obj err.                                  */
    RTOS_ERR_NO_MORE_RSRC,                                      /* Rsrc not avail to perform the operation.             */
    RTOS_ERR_INIT,                                              /* Init failed.                                         */
    RTOS_ERR_ALREADY_INIT,                                      /* Module has already been init'd.                      */
    RTOS_ERR_ALREADY_EXISTS,                                    /* Item already exists.                                 */

                                                                /* ------------------- PEND/ACQUIRE ------------------- */
    RTOS_ERR_ABORT,                                             /* Operation aborted.                                   */
    RTOS_ERR_TIMEOUT,                                           /* Operation timed out.                                 */

                                                                /* ------------------- POST/RELEASE ------------------- */
    RTOS_ERR_WOULD_BLOCK,                                       /* Non-blocking operation would block.                  */
    RTOS_ERR_OWNERSHIP,                                         /* Ownership err.                                       */
    RTOS_ERR_WOULD_OVF,                                         /* Item would overflow.                                 */

                                                                /* -------------------- OS-RELATED -------------------- */
    RTOS_ERR_ISR,                                               /* Illegal call from ISR.                               */
    RTOS_ERR_OS,                                                /* Generic OS err.                                      */

                                                                /* ----------------------- MISC ----------------------- */
    RTOS_ERR_PERMISSION                                         /* Operation not allowed.                               */
} RTOS_ERR;

#endif /* COMMON_ERR_MODULE_PRESENT */

