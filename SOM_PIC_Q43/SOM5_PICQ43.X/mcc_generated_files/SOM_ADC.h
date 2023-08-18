#include "adcc.h"

void SOM_ADC_Initialize();
void SOM_ADC_StartConversion(uint8_t channel);
bool SOM_ADC_IsConversionDone();
uint16_t SOM_ADC_GetConversionResult();
uint16_t SOM_ADC_GetSingleConversion(uint8_t channel);
void SOM_ADC_StopConversion();
void SOM_ADC_SetStopOnInterrupt();
void SOM_ADC_DischargeSampleCapacitor();
void SOM_ADC_LoadAcquisitionRegister(uint16_t acquisitionValue);
void SOM_ADC_SetPrechargeTime(uint16_t prechargeTime);
void SOM_ADC_SetRepeatCount(uint8_t repeatCount);
uint8_t SOM_ADC_GetCurrentCountofConversions();
void SOM_ADC_ClearAccumulator();
uint24_t SOM_ADC_GetAccumulatorValue();
bool SOM_ADC_HasAccumulatorOverflowed();
uint16_t SOM_ADC_GetFilterValue();
uint16_t SOM_ADC_GetPreviousResult();
void SOM_ADC_DefineSetPoint(uint16_t setPoint);
void SOM_ADC_SetUpperThreshold(uint16_t upperThreshold);
void SOM_ADC_SetLowerThreshold(uint16_t lowerThreshold);
uint16_t SOM_ADC_GetErrorCalculation();
void SOM_ADC_EnableDoubleSampling();
void SOM_ADC_EnableContinuousConversion();
void SOM_ADC_DisableContinuousConversion();
bool SOM_ADC_HasErrorCrossedUpperThreshold();
bool SOM_ADC_HasErrorCrossedLowerThreshold();
uint8_t SOM_ADC_GetConversionStageStatus();
 