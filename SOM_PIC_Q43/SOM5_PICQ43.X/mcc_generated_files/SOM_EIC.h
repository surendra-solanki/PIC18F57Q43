#include "ext_int.h"

void SOM_EXT_INT_Initialize();


///////////////////FOR EXT-INT0//////////////////
void SOM_INT0_ISR();
void SOM_INT0_CallBack();
void SOM_INT0_SetInterruptHandler();
void SOM_INT0_DefaultInterruptHandler();

///////////////////FOR EXT-INT1//////////////////
void SOM_INT1_ISR();
void SOM_INT1_CallBack();
void SOM_INT1_SetInterruptHandler();
void SOM_INT1_DefaultInterruptHandler();

///////////////////FOR EXT-INT2//////////////////
void SOM_INT2_ISR();
void SOM_INT2_CallBack();
void SOM_INT2_SetInterruptHandler();
void SOM_INT2_DefaultInterruptHandler();