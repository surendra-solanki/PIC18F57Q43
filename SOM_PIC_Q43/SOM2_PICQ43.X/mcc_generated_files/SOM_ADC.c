#include "SOM_ADC.h"


void SOM_ADC_Initialize()
{
    ADCC_Initialize();
}

void SOM_ADC_StartConversion(uint8_t channel)
{
    ADCC_StartConversion(channel);  
}

bool SOM_ADC_IsConversionDone()
{
    return ADCC_IsConversionDone();
}

uint16_t SOM_ADC_GetConversionResult()
{
    return ADCC_GetConversionResult();
}

uint16_t SOM_ADC_GetSingleConversion(uint8_t channel)
{
    return ADCC_GetSingleConversion(channel);
}

void SOM_ADC_StopConversion()
{
    ADCC_StopConversion();
}

void SOM_ADC_SetStopOnInterrupt()
{
    ADCC_SetStopOnInterrupt();
}

void SOM_ADC_DischargeSampleCapacitor()
{
    ADCC_DischargeSampleCapacitor();
}

void SOM_ADC_LoadAcquisitionRegister(uint16_t acquisitionValue)
{
    ADCC_LoadAcquisitionRegister(acquisitionValue);
}

void SOM_ADC_SetPrechargeTime(uint16_t prechargeTime)
{
    ADCC_SetPrechargeTime(prechargeTime);
}

void SOM_ADC_SetRepeatCount(uint8_t repeatCount)
{
    ADCC_SetRepeatCount(repeatCount);
}

 uint8_t SOM_ADC_GetCurrentCountofConversions()
{
    return ADCC_GetCurrentCountofConversions();
}
 
 void SOM_ADC_ClearAccumulator()
 {
    ADCC_ClearAccumulator();
 }
 
 uint24_t SOM_ADC_GetAccumulatorValue()
 {
    return ADCC_GetAccumulatorValue();
 }
 
 bool SOM_ADC_HasAccumulatorOverflowed()
 {
    return ADCC_HasAccumulatorOverflowed();
 }
 
 uint16_t SOM_ADC_GetFilterValue()
 {
    return ADCC_GetFilterValue();   
 }
 
 uint16_t SOM_ADC_GetPreviousResult()
 {
    return ADCC_GetPreviousResult();
 }
 
 void SOM_ADC_DefineSetPoint(uint16_t setPoint)
 {
    ADCC_DefineSetPoint(setPoint);
 }
 
 void SOM_ADC_SetUpperThreshold(uint16_t upperThreshold)
 {
    ADCC_SetUpperThreshold(upperThreshold);
 }
 
 void SOM_ADC_SetLowerThreshold(uint16_t lowerThreshold)
 {
    ADCC_SetLowerThreshold(lowerThreshold);
 }
 
 uint16_t SOM_ADC_GetErrorCalculation()
 {
    return ADCC_GetErrorCalculation();
 }
 
 void SOM_ADC_EnableDoubleSampling()
 {
    ADCC_EnableDoubleSampling();
 }
 
 void SOM_ADC_EnableContinuousConversion()
 {
    ADCC_EnableContinuousConversion();
 }
 
 void SOM_ADC_DisableContinuousConversion()
 {
    ADCC_DisableContinuousConversion();
 }
 
 bool SOM_ADC_HasErrorCrossedUpperThreshold()
 {
    return ADCC_HasErrorCrossedUpperThreshold();
 }
 
 bool SOM_ADC_HasErrorCrossedLowerThreshold()
 {
    return ADCC_HasErrorCrossedLowerThreshold();
 }
 
 uint8_t SOM_ADC_GetConversionStageStatus()
 {
    return ADCC_GetConversionStageStatus();
 }
