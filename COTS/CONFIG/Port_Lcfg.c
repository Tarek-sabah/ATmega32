/*
 * Port_Lcfg.c
 *
 *  Created on: JUN 6, 2023
 *      Author: TAREK SABAH
 */

/*****************************************************************/
/* FILE DESCRIPTION:
----------------------------------------------------------------
*  file     : Port_Lcfg.c
*  Module   : PORT
*  breif    : Config file for PORT Driver
*
*****************************************************************
*/
/******************************************
  INCLUDES
*******************************************/
#include "Std_Types.h"
#include "Port_Types.h"
#include "Port_Cfg.h"


/******************************************
  Local Macros / Functions
*******************************************/


/******************************************
  Local Data
*******************************************/

/******************************************
  Global Data
*******************************************/

const Port_ConfigType PORT_Config_Arr[PORT_PINS_CONFIG_ARR_SIZE]= {

											   {PORT_PB7,
											   PORT_PIN_LEVEL_LOW,
											   PORT_PINDIR_OUTPUT,
											   PORT_PIN_IN_ATTATCH_FLOATING},


};
