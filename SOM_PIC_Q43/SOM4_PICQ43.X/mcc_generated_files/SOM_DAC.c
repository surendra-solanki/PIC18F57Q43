#include "SOM_DAC.h"

void SOM_DAC_Initialize(void)
{
    DAC1_Initialize();
}

void SOM_DAC_SetOutput(uint8_t InputData)
{
   DAC1_SetOutput(InputData);
}

 uint8_t SOM_DAC_GetOutput(void)
{
    return DAC1_GetOutput();     
}
 