#include <util/delay.h>

#include "STD_TYPES.h"
#include "Port_int.h"
#include "Dio_int.h"



extern const Port_ConfigType PORT_Config_Arr[PORT_PINS_CONFIG_ARR_SIZE];

int main()
{
	Port_Init(PORT_Config_Arr);

	while(1)
	{

	}
	return 0;
}

