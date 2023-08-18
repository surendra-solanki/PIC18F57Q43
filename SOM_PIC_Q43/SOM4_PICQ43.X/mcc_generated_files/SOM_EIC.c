#include "SOM_EIC.h"

void SOM_EXT_INT_Initialize()
{
    EXT_INT_Initialize();
}

//////////////////////////////FOR INT0
void SOM_INT0_CallBack()
{
   //Enter your code here 
}

void SOM_INT0_ISR()
{
    SOM_INT0_CallBack();  
}

void SOM_INT0_SetInterruptHandler()
{
    void INT0_SetInterruptHandler(void (* InterruptHandler)(void));
}

void SOM_INT0_DefaultInterruptHandler()
{
    INT0_DefaultInterruptHandler();
}


////////////////////////////FOR INT1
void SOM_INT1_CallBack()
{
   //Enter your code here 
}

void SOM_INT1_ISR()
{
    SOM_INT1_CallBack();  
}

void SOM_INT1_SetInterruptHandler()
{
    void INT1_SetInterruptHandler(void (* InterruptHandler)(void));
}

void SOM_INT1_DefaultInterruptHandler()
{
    INT1_DefaultInterruptHandler();
}


////////////////////////////FOR INTO2
void SOM_INT2_CallBack()
{
   //Enter your code here 
}

void SOM_INT2_ISR()
{
    SOM_INT2_CallBack();  
}

void SOM_INT2_SetInterruptHandler()
{
    void INT2_SetInterruptHandler(void (* InterruptHandler)(void));
}

void SOM_INT2_DefaultInterruptHandler()
{
    INT2_DefaultInterruptHandler();
}