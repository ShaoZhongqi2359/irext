/**************************************************************************************************
Filename:       irda_lib.h
Revised:        Date: 2016-02-23
Revision:       Revision: 1.0

Description:    This file provides algorithms for IR decode (compressed command type)

Revision log:
* 2016-10-21: created by strawmanbobi
**************************************************************************************************/

#ifndef _IRDA_H_
#define _IRDA_H_

/**************************************************************************************************
 *                                            INCLUDES
 **************************************************************************************************/

#include "irda_defs.h"

/**************************************************************************************************
 *                                            MACROS
 **************************************************************************************************/





/**************************************************************************************************
 *                                            CONSTANTS
 **************************************************************************************************/
#define STB_CHANNEL_OFFSET              14

#define IRDA_FLAG_NORMAL                0
#define IRDA_FLAG_INVERSE               1

#define IRDA_LEVEL_LOW                  0
#define IRDA_LEVEL_HIGH                 1

#define IRDA_LSB                        0
#define IRDA_MSB                        1

enum
{
    IRDA_DECODE_1_BIT = 0,
    IRDA_DECODE_2_BITS,
    IRDA_DECODE_4_BITS,
};

/**************************************************************************************************
 *                                         GLOBAL DATA TYPES
 **************************************************************************************************/

//======================== IRDA protocol definition =============================
typedef enum irda_flags
{
    IRDA_BOOT = 0,
    IRDA_STOP,
    IRDA_SEP,
    IRDA_ONE,
    IRDA_ZERO,
    IRDA_FLIP,
    IRDA_TWO,
    IRDA_THREE = 7,
    IRDA_FOUR,
    IRDA_FIVE,
    IRDA_SIX,
    IRDA_SEVEN,
    IRDA_EIGHT,
    IRDA_NINE,
    IRDA_A,
    IRDA_B,
    IRDA_C,
    IRDA_D,
    IRDA_E,
    IRDA_F,
    IRDA_MAX = 20,
} irda_flags_t;

typedef struct irda_data
{
    UINT8 bits;
    UINT8 lsb;
    UINT8 mode;
    UINT8 index;
}  irda_data_t;

#if (defined BOARD_PC) || (defined BOARD_FREE_RTOS) || (defined BOARD_ANDROID)
#pragma pack(1)
#endif
typedef struct irda_cycles
{
    UINT8 flag;
    UINT16 mask;
    UINT16 space;
} irda_cycles_t;
#if (defined BOARD_PC) || (defined BOARD_FREE_RTOS) || (defined BOARD_ANDROID)
#pragma pack()
#endif

//==================================  TV  ==================================
typedef enum tv_key_value
{
    TV_POWER = 0,
    TV_MUTE,
    TV_UP,
    TV_DOWN,
    TV_LEFT,
    TV_RIGHT,
    TV_OK,
    TV_VOL_UP,
    TV_VOL_DOWN,
    TV_BACK,
    TV_INPUT,
    TV_MENU,
    TV_HOME,
    TV_SET,
    TV_0,
    TV_1,
    TV_2,
    TV_3,
    TV_4,
    TV_5,
    TV_6,
    TV_7,
    TV_8,
    TV_9,
    TV_KEY_MAX,
} tv_key_value_t;

//==================================  STB  ==================================
typedef enum stb_key_value
{
    STB_POWER = 0,
    STB_MUTE,
    STB_UP,
    STB_DOWN,
    STB_LEFT,
    STB_RIGHT,
    STB_OK,
    STB_VOL_UP,
    STB_VOL_DOWN,
    STB_BACK,
    STB_INPUT,
    STB_MENU,
    STB_PAGE_UP,
    STB_PAGE_DOWN,
    STB_0,
    STB_1,
    STB_2,
    STB_3,
    STB_4,
    STB_5,
    STB_6,
    STB_7,
    STB_8,
    STB_9,
    STB_KEY_MAX,
} stb_key_value_t;

//==================================  NW  ==================================
typedef enum nw_key_value
{
    NW_POWER = 0,
    NW_UP,
    NW_DOWN,
    NW_LEFT,
    NW_RIGHT,
    NW_OK,
    NW_VOL_UP,
    NW_VOL_DOWN,
    NW_BACK,
    NW_MENU,
    NW_HOME,
    NW_0,
    NW_1,
    NW_2,
    NW_3,
    NW_4,
    NW_5,
    NW_6,
    NW_7,
    NW_8,
    NW_9,
    NW_KEY_MAX,
} nw_key_value_t;

//==================================  COMMON  ==================================
typedef enum cm_key_value
{
    CM_POWER = 0,
    CM_UP,
    CM_DOWN,
    CM_LEFT,
    CM_RIGHT,
    CM_OK,
    CM_VOL_UP,
    CM_VOL_DOWN,
    CM_FUNC_1,
    CM_FUNC_2,
    CM_FUNC_3,
    CM_BACK,
    CM_HOME,
    CM_MENU,
    CM_MODE,
    CM_KEY_MAX,
} cm_key_value_t;

typedef struct irda_data_tv
{
    char magic[4];
    UINT8 per_keycode_bytes;
} irda_data_tv_t;


/**************************************************************************************************
 *                                         GLOBAL VARIABLES
 **************************************************************************************************/





/**************************************************************************************************
 *                                        EXTERNAL VARIABLES
 **************************************************************************************************/





/**************************************************************************************************
 *                                         GLOBAL TABLES
 **************************************************************************************************/





/**************************************************************************************************
 *                                        EXTERNAL FUNCTIONS
 **************************************************************************************************/





/**************************************************************************************************
 *                                     GLOBAL FUNCTION PROTOTYPES
 **************************************************************************************************/
extern void irda_lib_open(UINT8 *binary_file, UINT16 binary_length);
extern BOOL irda_lib_parse(UINT8 encode_type);
extern UINT16 irda_lib_control(UINT8 key, UINT16 *user_data);


#endif /* _IRDA_H_ */

