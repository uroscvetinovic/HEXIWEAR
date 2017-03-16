// File: HTU_types.h

// Some commonly used types in the HTU sensor module.

#ifndef _HTU_types_h_
#define _HTU_types_h_

/******************************************************************************
 * Header file inclusions.                                                    *
 ******************************************************************************/
 
#include <stdint.h>

/******************************************************************************
 * Type definitions.                                                          *
 ******************************************************************************/

typedef enum
{
    BITRES_HTU_RH_12_TEMP14 = 0,
    BITRES_HTU_RH_8_TEMP12,
    BITRES_HTU_RH_10_TEMP13,
    BITRES_HTU_RH_11_TEMP11,

} bitResHTU_t;

#endif