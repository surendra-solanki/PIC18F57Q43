#include "pin_manager.h"
#include <stdbool.h>

//////////////////////RB4->SWITCH->INPUT ////////////
void SOM_SWITCH_SetHigh();
void SOM_SWITCH_SetLow();
void SOM_SWITCH_Toggle();
bool SOM_SWITCH_GetValue();
void SOM_SWITCH_SetDigitalInput();
void SOM_SWITCH_SetDigitalOutput();
//void SOM_SWITCH_SetHigh()SetPullup();
void SOM_SWITCH_ResetPullup();
void SOM_SWITCH_SetPushPull();
void SOM_SWITCH_SetOpenDrain();
void SOM_SWITCH_SetAnalogMode();
void SOM_SWITCH_SetDigitalMode();


//////////////////////RB5->GPIO1->INPUT/////////////
void SOM_01_SetHigh();
void SOM_01_SetLow();
void SOM_01_Toggle();
bool SOM_01_GetValue();
void SOM_01_SetDigitalInput();
void SOM_01_SetDigitalOutput();
void SOM_01_SetPullup();
void SOM_01_ResetPullup();
void SOM_01_SetPushPull();
void SOM_01_SetOpenDrain();
void SOM_01_SetAnalogMode();
void SOM_01_SetDigitalMode();


//////////////////////RC2->GPIO2->INPUT/////////////
void SOM_02_SetHigh();
void SOM_02_SetLow();
void SOM_02_Toggle();
bool SOM_02_GetValue();
void SOM_02_SetDigitalInput();
void SOM_02_SetDigitalOutput();
void SOM_02_SetPullup();
void SOM_02_ResetPullup();
void SOM_02_SetPushPull();
void SOM_02_SetOpenDrain();
void SOM_02_SetAnalogMode();
void SOM_02_SetDigitalMode();

//////////////////////RC3->GPIO3->INPUT/////////////
void SOM_03_SetHigh();
void SOM_03_SetLow();
void SOM_03_Toggle();
bool SOM_03_GetValue();
void SOM_03_SetDigitalInput();
void SOM_03_SetDigitalOutput();
void SOM_03_SetPullup();
void SOM_03_ResetPullup();
void SOM_03_SetPushPull();
void SOM_03_SetOpenDrain();
void SOM_03_SetAnalogMode();
void SOM_03_SetDigitalMode();


//////////////////////RD2->GPIO4->INPUT/////////////
void SOM_04_SetHigh();
void SOM_04_SetLow();
void SOM_04_Toggle();
bool SOM_04_GetValue();
void SOM_04_SetDigitalInput();
void SOM_04_SetDigitalOutput();
void SOM_04_SetPullup();
void SOM_04_ResetPullup();
void SOM_04_SetPushPull();
void SOM_04_SetOpenDrain();
void SOM_04_SetAnalogMode();
void SOM_04_SetDigitalMode();


//////////////////////RD3->GPIO5->INPUT/////////////
void SOM_05_SetHigh();
void SOM_05_SetLow();
void SOM_05_Toggle();
bool SOM_05_GetValue();
void SOM_05_SetDigitalInput();
void SOM_05_SetDigitalOutput();
void SOM_05_SetPullup();
void SOM_05_ResetPullup();
void SOM_05_SetPushPull();
void SOM_05_SetOpenDrain();
void SOM_05_SetAnalogMode();
void SOM_05_SetDigitalMode();


//////////////////////RE1->GPIO7->OUTPUT/////////////
void SOM_07_SetHigh();
void SOM_07_SetLow();
void SOM_07_Toggle();
bool SOM_07_GetValue();
void SOM_07_SetDigitalInput();
void SOM_07_SetDigitalOutput();
void SOM_07_SetPullup();
void SOM_07_ResetPullup();
void SOM_07_SetPushPull();
void SOM_07_SetOpenDrain();
void SOM_07_SetAnalogMode();
void SOM_07_SetDigitalMode();


//////////////////////RE2->GPIO8->OUTPUT/////////////
void SOM_08_SetHigh();
void SOM_08_SetLow();
void SOM_08_Toggle();
bool SOM_08_GetValue();
void SOM_08_SetDigitalInput();
void SOM_08_SetDigitalOutput();
void SOM_08_SetPullup();
void SOM_08_ResetPullup();
void SOM_08_SetPushPull();
void SOM_08_SetOpenDrain();
void SOM_08_SetAnalogMode();
void SOM_08_SetDigitalMode();


//////////////////////RF2->GPIO9->OUTPUT/////////////
void SOM_09_SetHigh();
void SOM_09_SetLow();
void SOM_09_Toggle();
bool SOM_09_GetValue();
void SOM_09_SetDigitalInput();
void SOM_09_SetDigitalOutput();
void SOM_09_SetPullup();
void SOM_09_ResetPullup();
void SOM_09_SetPushPull();
void SOM_09_SetOpenDrain();
void SOM_09_SetAnalogMode();
void SOM_09_SetDigitalMode();


//////////////////////RF3->LED->OUTPUT/////////////
void SOM_LED_SetHigh();
void SOM_LED_SetLow();
void SOM_LED_Toggle();
bool SOM_LED_GetValue();
void SOM_LED_SetDigitalInput();
void SOM_LED_SetDigitalOutput();
void SOM_LED_SetPullup();
void SOM_LED_ResetPullup();
void SOM_LED_SetPushPull();
void SOM_LED_SetOpenDrain();
void SOM_LED_SetAnalogMode();
void SOM_LED_SetDigitalMode();


//////////////////////RF4->GPIO10->OUTPUT/////////////
void SOM_10_SetHigh();
void SOM_10_SetLow();
void SOM_10_Toggle();
bool SOM_10_GetValue();
void SOM_10_SetDigitalInput();
void SOM_10_SetDigitalOutput();
void SOM_10_SetPullup();
void SOM_10_ResetPullup();
void SOM_10_SetPushPull();
void SOM_10_SetOpenDrain();
void SOM_10_SetAnalogMode();
void SOM_10_SetDigitalMode();


//////////////////////RF6->GPIO12->OUTPUT/////////////
void SOM_12_SetHigh();
void SOM_12_SetLow();
void SOM_12_Toggle();
bool SOM_12_GetValue();
void SOM_12_SetDigitalInput();
void SOM_12_SetDigitalOutput();
void SOM_12_SetPullup();
void SOM_12_ResetPullup();
void SOM_12_SetPushPull();
void SOM_12_SetOpenDrain();
void SOM_12_SetAnalogMode();
void SOM_12_SetDigitalMode();


//////////////////////RF7->GPIO13->OUTPUT/////////////
void SOM_13_SetHigh();
void SOM_13_SetLow();
void SOM_13_Toggle();
bool SOM_13_GetValue();
void SOM_13_SetDigitalInput();
void SOM_13_SetDigitalOutput();
void SOM_13_SetPullup();
void SOM_13_ResetPullup();
void SOM_13_SetPushPull();
void SOM_13_SetOpenDrain();
void SOM_13_SetAnalogMode();
void SOM_13_SetDigitalMode();