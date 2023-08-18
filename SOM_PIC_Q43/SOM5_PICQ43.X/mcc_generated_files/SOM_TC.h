#include "tmr0.h"

void SOM_TMR0_Initialize();
void SOM_TMR0_StartTimer();
void SOM_TMR0_StopTimer();
uint8_t SOM_TMR0_ReadTimer();
void SOM_TMR0_WriteTimer(uint8_t timerVal);
void SOM_TMR0_Reload(uint8_t periodVal);
void SOM_TMR0_ISR();
void SOM_TMR0_SetInterruptHandler(void (* InterruptHandler));
void SOM_TMR0_DefaultInterruptHandler();
void SOM_Internal_TMR();
//void SOM_TMR0_InterruptHandler();
 