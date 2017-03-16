// File: FXAS_driver.h

// Declarations of main functionalities in the FXAS sensor module.

#ifndef _FXAS_driver_h_
#define _FXAS_driver_h_

/******************************************************************************
 * Header file inclusions.                                                    *
 ******************************************************************************/

#include "FXAS_info.h"
#include "FXAS_types.h"

/******************************************************************************
 * Global function declarations.                                              *
 ******************************************************************************/

// Initialises the FXAS sensor.
void FXAS_Init();

// Reads raw data from the sensor. Requires a 3 element array.
void FXAS_ReadRawData ( int16_t* sensorData );

// Puts the sensor into standby mode.
void FXAS_GotoStandby();

// Sets the sensor to ready mode.
void FXAS_GetReady();

// Puts the sensor into active mode.
void FXAS_SetActive();

// Resets the module.
void FXAS_SoftReset();

// Gets current sensitivity.
float FXAS_GetSens();

// Formats raw data to float.
float FXAS_FormatFloat( int16_t input );

// Formats raw data to int.
int16_t FXAS_FormatInt( int16_t input );

#endif