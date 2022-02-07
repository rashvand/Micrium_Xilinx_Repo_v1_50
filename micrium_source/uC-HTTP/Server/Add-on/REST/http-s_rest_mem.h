/*
*********************************************************************************************************
*                                            EXAMPLE CODE
*
*               This file is provided as an example on how to use Micrium products.
*
*               Please feel free to use any application code labeled as 'EXAMPLE CODE' in
*               your application products.  Example code may be used as is, in whole or in
*               part, or may be used as a reference only. This file can be modified as
*               required to meet the end-product requirements.
*
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*
*                                          HTTPs REST MEMORY
*
* Filename : http-s_rest_mem.h
* Version  : V3.01.01
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*********************************************************************************************************
*                                               MODULE
*********************************************************************************************************
*********************************************************************************************************
*/

#ifndef HTTPs_REST_MEM_MODULE_PRESENT
#define HTTPs_REST_MEM_MODULE_PRESENT


/*
*********************************************************************************************************
*********************************************************************************************************
*                                            INCLUDE FILES
*********************************************************************************************************
*********************************************************************************************************
*/

#include "http-s_rest.h"


/*
*********************************************************************************************************
*********************************************************************************************************
*                                               EXTERNS
*********************************************************************************************************
*********************************************************************************************************
*/

#ifdef HTTPs_REST_MEM_MODULE
#define  HTTPs_REST_MEM_EXT
#else
#define  HTTPs_REST_MEM_EXT  extern
#endif


/*
*********************************************************************************************************
*********************************************************************************************************
*                                               DEFINES
*********************************************************************************************************
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*********************************************************************************************************
*                                           GLOBAL VARIABLES
*********************************************************************************************************
*********************************************************************************************************
*/

HTTPs_REST_MEM_EXT  SLIST_MEMBER  *HTTPsREST_Mem_ResourceList;


/*
*********************************************************************************************************
*********************************************************************************************************
*                                         FUNCTION PROTOTYPES
*********************************************************************************************************
*********************************************************************************************************
*/

HTTPs_REST_INST_DATA      *HTTPsREST_Mem_Init_Pools      (        CPU_SIZE_T             max_request);

HTTPs_REST_RESOURCE_LIST  *HTTPsREST_Mem_GetResourceList (        CPU_INT32U             list_ID);

HTTPs_REST_REQUEST        *HTTPsREST_Mem_AllocRequest    (        HTTPs_REST_INST_DATA  *p_inst_data);

void                       HTTPsREST_Mem_FreeRequest     (        HTTPs_REST_INST_DATA  *p_inst_data,
                                                                  HTTPs_REST_REQUEST    *p_request);

CPU_BOOLEAN                HTTPsREST_Mem_AllocResource   (        CPU_INT32U             listID,
                                                          const   HTTPs_REST_RESOURCE   *resource);


/*
*********************************************************************************************************
*********************************************************************************************************
*                                             MODULE END
*********************************************************************************************************
*********************************************************************************************************
*/
#endif /* HTTPs_REST_MEM_MODULE_PRESENT */