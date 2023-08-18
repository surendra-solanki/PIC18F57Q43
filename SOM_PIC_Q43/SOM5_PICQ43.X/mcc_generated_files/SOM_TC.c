#include "SOM_TC.h"

void SOM_TMR0_Initialize()
{
    TMR0_Initialize();
}

void SOM_TMR0_StartTimer()
{
    TMR0_StartTimer();
}

void SOM_TMR0_StopTimer()
{
    TMR0_StopTimer();
}

uint8_t SOM_TMR0_ReadTimer()
{
    return TMR0_ReadTimer();
}

void SOM_TMR0_WriteTimer(uint8_t timerVal)
{
    TMR0_WriteTimer(timerVal);
}

void SOM_TMR0_Reload(uint8_t periodVal)
{
    TMR0_Reload(periodVal);
}

void SOM_TMR0_ISR()
{
    TMR0_ISR();
}

//void SOM_Internal_TMR()
//{
//    SOM_07_Toggle();  ////and you have to also change it in tmr0.c file ISR function
//}

void SOM_TMR0_SetInterruptHandler(void (* InterruptHandler))
{
    void TMR0_SetInterruptHandler(void (*InterruptHandler)(void));
}

// extern void SOM_TMR0_InterruptHandler()
//{
//   extern  void (*TMR0_InterruptHandler());
//}

   void SOM_TMR0_DefaultInterruptHandler()
{
    TMR0_DefaultInterruptHandler();
}
