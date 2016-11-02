/**************************************************************************************************
Filename:       irda_defs.h
Revised:        Date: 2015-08-26
Revision:       Revision: 1.0

Description:    This file provides algorithms for UCON IR decode

Copyright 2014-2016 UCON Tech all rights reserved

Revision log:
* 2015-08-01: created by strawmanbobi
**************************************************************************************************/
#if defined BOARD_CC254X
#include "osal.h"
#endif

#if defined BOARD_MC200
#include "wmstdio.h"
#include "wm_os.h"
#endif

#if defined BOARD_MT6580
#include <android/log.h>
#define  LOG_TAG    "ucon_decode"
#endif

#ifndef PARSE_IR_DEFS_H
#define PARSE_IR_DEFS_H
#ifdef __cplusplus
extern "C"
{
#endif

#define TRUE    1
#define FALSE   0

typedef unsigned char UINT8;
typedef signed char INT8;
typedef unsigned short UINT16;
typedef signed short INT16;
typedef unsigned char BOOL;

#if defined BOARD_CC254X
#define irda_malloc(A)  osal_mem_alloc(A)
#define irda_free(A) osal_mem_free(A)
#define irda_memcpy(A, B, C) osal_memcpy(A, B, C)
#define irda_memset(A, B, C) osal_memset(A, B, C)
#define irda_strlen(A) osal_strlen(A)
#define IR_PRINTF(A)

#if !defined BOARD_CC254X
#define USER_DATA_SIZE UCON_USER_DATA_SIZE
#endif

#elif defined BOARD_MC200
#define irda_malloc(A)  os_mem_alloc(A)
#define irda_free(A) os_mem_free(A)
#define irda_memcpy(A, B, C) memcpy(A, B, C)
#define irda_memset(A, B, C) memset(A, B, C)
#define irda_strlen(A) strlen(A)
#define IR_PRINTF(A)
// temporarily define USER_DATA_SIZE as 1200 for BOARD_MC200
#define USER_DATA_SIZE 1200
#elif defined BOARD_PC
#define irda_malloc(A) malloc(A)
#define irda_free(A) free(A)
#define irda_memcpy(A, B, C) memcpy(A, B, C)
#define irda_memset(A, B, C) memset(A, B, C)
#define irda_strlen(A) strlen(A)
#define IR_PRINTF printf
// temporarily define USER_DATA_SIZE as 2048 for BOARD_PC
#define USER_DATA_SIZE 2048
#elif defined BOARD_MT6580
#define irda_malloc(A) malloc(A)
#define irda_free(A) free(A)
#define irda_memcpy(A, B, C) memcpy(A, B, C)
#define irda_memset(A, B, C) memset(A, B, C)
#define irda_strlen(A) strlen(A)
#define IR_PRINTF(...)
#define USER_DATA_SIZE 2048
#else
#define irda_malloc(A) malloc(A)
#define irda_free(A) free(A)
#define irda_memcpy(A, B, C) memcpy(A, B, C)
#define irda_memset(A, B, C) memset(A, B, C)
#define irda_strlen(A) strlen(A)
#define IR_PRINTF(A)
#endif


#ifdef __cplusplus
}
#endif
#endif //PARSE_IR_DEFS_H