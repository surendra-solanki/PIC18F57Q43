#include "pin_manager.h"
#include "adcc.h"
#include "dac1.h"
#include "stdint.h"

//////////////////RA2->DAC->OUTPUT///////////////////
void SOM_DAC_Initialize();
void SOM_DAC_SetOutput(uint8_t InputData);
uint8_t SOM_DAC_GetOutput();