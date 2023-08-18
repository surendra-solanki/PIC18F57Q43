/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.8
        Device            :  PIC18F57Q43
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.36 and above
        MPLAB 	          :  MPLAB X 6.00	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set LED_A aliases
#define LED_A_TRIS                 TRISDbits.TRISD1
#define LED_A_LAT                  LATDbits.LATD1
#define LED_A_PORT                 PORTDbits.RD1
#define LED_A_WPU                  WPUDbits.WPUD1
#define LED_A_OD                   ODCONDbits.ODCD1
#define LED_A_ANS                  ANSELDbits.ANSELD1
#define LED_A_SetHigh()            do { LATDbits.LATD1 = 1; } while(0)
#define LED_A_SetLow()             do { LATDbits.LATD1 = 0; } while(0)
#define LED_A_Toggle()             do { LATDbits.LATD1 = ~LATDbits.LATD1; } while(0)
#define LED_A_GetValue()           PORTDbits.RD1
#define LED_A_SetDigitalInput()    do { TRISDbits.TRISD1 = 1; } while(0)
#define LED_A_SetDigitalOutput()   do { TRISDbits.TRISD1 = 0; } while(0)
#define LED_A_SetPullup()          do { WPUDbits.WPUD1 = 1; } while(0)
#define LED_A_ResetPullup()        do { WPUDbits.WPUD1 = 0; } while(0)
#define LED_A_SetPushPull()        do { ODCONDbits.ODCD1 = 0; } while(0)
#define LED_A_SetOpenDrain()       do { ODCONDbits.ODCD1 = 1; } while(0)
#define LED_A_SetAnalogMode()      do { ANSELDbits.ANSELD1 = 1; } while(0)
#define LED_A_SetDigitalMode()     do { ANSELDbits.ANSELD1 = 0; } while(0)

// get/set LED_B aliases
#define LED_B_TRIS                 TRISDbits.TRISD2
#define LED_B_LAT                  LATDbits.LATD2
#define LED_B_PORT                 PORTDbits.RD2
#define LED_B_WPU                  WPUDbits.WPUD2
#define LED_B_OD                   ODCONDbits.ODCD2
#define LED_B_ANS                  ANSELDbits.ANSELD2
#define LED_B_SetHigh()            do { LATDbits.LATD2 = 1; } while(0)
#define LED_B_SetLow()             do { LATDbits.LATD2 = 0; } while(0)
#define LED_B_Toggle()             do { LATDbits.LATD2 = ~LATDbits.LATD2; } while(0)
#define LED_B_GetValue()           PORTDbits.RD2
#define LED_B_SetDigitalInput()    do { TRISDbits.TRISD2 = 1; } while(0)
#define LED_B_SetDigitalOutput()   do { TRISDbits.TRISD2 = 0; } while(0)
#define LED_B_SetPullup()          do { WPUDbits.WPUD2 = 1; } while(0)
#define LED_B_ResetPullup()        do { WPUDbits.WPUD2 = 0; } while(0)
#define LED_B_SetPushPull()        do { ODCONDbits.ODCD2 = 0; } while(0)
#define LED_B_SetOpenDrain()       do { ODCONDbits.ODCD2 = 1; } while(0)
#define LED_B_SetAnalogMode()      do { ANSELDbits.ANSELD2 = 1; } while(0)
#define LED_B_SetDigitalMode()     do { ANSELDbits.ANSELD2 = 0; } while(0)

// get/set LED_C aliases
#define LED_C_TRIS                 TRISDbits.TRISD3
#define LED_C_LAT                  LATDbits.LATD3
#define LED_C_PORT                 PORTDbits.RD3
#define LED_C_WPU                  WPUDbits.WPUD3
#define LED_C_OD                   ODCONDbits.ODCD3
#define LED_C_ANS                  ANSELDbits.ANSELD3
#define LED_C_SetHigh()            do { LATDbits.LATD3 = 1; } while(0)
#define LED_C_SetLow()             do { LATDbits.LATD3 = 0; } while(0)
#define LED_C_Toggle()             do { LATDbits.LATD3 = ~LATDbits.LATD3; } while(0)
#define LED_C_GetValue()           PORTDbits.RD3
#define LED_C_SetDigitalInput()    do { TRISDbits.TRISD3 = 1; } while(0)
#define LED_C_SetDigitalOutput()   do { TRISDbits.TRISD3 = 0; } while(0)
#define LED_C_SetPullup()          do { WPUDbits.WPUD3 = 1; } while(0)
#define LED_C_ResetPullup()        do { WPUDbits.WPUD3 = 0; } while(0)
#define LED_C_SetPushPull()        do { ODCONDbits.ODCD3 = 0; } while(0)
#define LED_C_SetOpenDrain()       do { ODCONDbits.ODCD3 = 1; } while(0)
#define LED_C_SetAnalogMode()      do { ANSELDbits.ANSELD3 = 1; } while(0)
#define LED_C_SetDigitalMode()     do { ANSELDbits.ANSELD3 = 0; } while(0)

// get/set LED_D aliases
#define LED_D_TRIS                 TRISFbits.TRISF0
#define LED_D_LAT                  LATFbits.LATF0
#define LED_D_PORT                 PORTFbits.RF0
#define LED_D_WPU                  WPUFbits.WPUF0
#define LED_D_OD                   ODCONFbits.ODCF0
#define LED_D_ANS                  ANSELFbits.ANSELF0
#define LED_D_SetHigh()            do { LATFbits.LATF0 = 1; } while(0)
#define LED_D_SetLow()             do { LATFbits.LATF0 = 0; } while(0)
#define LED_D_Toggle()             do { LATFbits.LATF0 = ~LATFbits.LATF0; } while(0)
#define LED_D_GetValue()           PORTFbits.RF0
#define LED_D_SetDigitalInput()    do { TRISFbits.TRISF0 = 1; } while(0)
#define LED_D_SetDigitalOutput()   do { TRISFbits.TRISF0 = 0; } while(0)
#define LED_D_SetPullup()          do { WPUFbits.WPUF0 = 1; } while(0)
#define LED_D_ResetPullup()        do { WPUFbits.WPUF0 = 0; } while(0)
#define LED_D_SetPushPull()        do { ODCONFbits.ODCF0 = 0; } while(0)
#define LED_D_SetOpenDrain()       do { ODCONFbits.ODCF0 = 1; } while(0)
#define LED_D_SetAnalogMode()      do { ANSELFbits.ANSELF0 = 1; } while(0)
#define LED_D_SetDigitalMode()     do { ANSELFbits.ANSELF0 = 0; } while(0)

// get/set LED_E aliases
#define LED_E_TRIS                 TRISFbits.TRISF1
#define LED_E_LAT                  LATFbits.LATF1
#define LED_E_PORT                 PORTFbits.RF1
#define LED_E_WPU                  WPUFbits.WPUF1
#define LED_E_OD                   ODCONFbits.ODCF1
#define LED_E_ANS                  ANSELFbits.ANSELF1
#define LED_E_SetHigh()            do { LATFbits.LATF1 = 1; } while(0)
#define LED_E_SetLow()             do { LATFbits.LATF1 = 0; } while(0)
#define LED_E_Toggle()             do { LATFbits.LATF1 = ~LATFbits.LATF1; } while(0)
#define LED_E_GetValue()           PORTFbits.RF1
#define LED_E_SetDigitalInput()    do { TRISFbits.TRISF1 = 1; } while(0)
#define LED_E_SetDigitalOutput()   do { TRISFbits.TRISF1 = 0; } while(0)
#define LED_E_SetPullup()          do { WPUFbits.WPUF1 = 1; } while(0)
#define LED_E_ResetPullup()        do { WPUFbits.WPUF1 = 0; } while(0)
#define LED_E_SetPushPull()        do { ODCONFbits.ODCF1 = 0; } while(0)
#define LED_E_SetOpenDrain()       do { ODCONFbits.ODCF1 = 1; } while(0)
#define LED_E_SetAnalogMode()      do { ANSELFbits.ANSELF1 = 1; } while(0)
#define LED_E_SetDigitalMode()     do { ANSELFbits.ANSELF1 = 0; } while(0)

// get/set LED_F aliases
#define LED_F_TRIS                 TRISFbits.TRISF2
#define LED_F_LAT                  LATFbits.LATF2
#define LED_F_PORT                 PORTFbits.RF2
#define LED_F_WPU                  WPUFbits.WPUF2
#define LED_F_OD                   ODCONFbits.ODCF2
#define LED_F_ANS                  ANSELFbits.ANSELF2
#define LED_F_SetHigh()            do { LATFbits.LATF2 = 1; } while(0)
#define LED_F_SetLow()             do { LATFbits.LATF2 = 0; } while(0)
#define LED_F_Toggle()             do { LATFbits.LATF2 = ~LATFbits.LATF2; } while(0)
#define LED_F_GetValue()           PORTFbits.RF2
#define LED_F_SetDigitalInput()    do { TRISFbits.TRISF2 = 1; } while(0)
#define LED_F_SetDigitalOutput()   do { TRISFbits.TRISF2 = 0; } while(0)
#define LED_F_SetPullup()          do { WPUFbits.WPUF2 = 1; } while(0)
#define LED_F_ResetPullup()        do { WPUFbits.WPUF2 = 0; } while(0)
#define LED_F_SetPushPull()        do { ODCONFbits.ODCF2 = 0; } while(0)
#define LED_F_SetOpenDrain()       do { ODCONFbits.ODCF2 = 1; } while(0)
#define LED_F_SetAnalogMode()      do { ANSELFbits.ANSELF2 = 1; } while(0)
#define LED_F_SetDigitalMode()     do { ANSELFbits.ANSELF2 = 0; } while(0)

// get/set LED_G aliases
#define LED_G_TRIS                 TRISFbits.TRISF3
#define LED_G_LAT                  LATFbits.LATF3
#define LED_G_PORT                 PORTFbits.RF3
#define LED_G_WPU                  WPUFbits.WPUF3
#define LED_G_OD                   ODCONFbits.ODCF3
#define LED_G_ANS                  ANSELFbits.ANSELF3
#define LED_G_SetHigh()            do { LATFbits.LATF3 = 1; } while(0)
#define LED_G_SetLow()             do { LATFbits.LATF3 = 0; } while(0)
#define LED_G_Toggle()             do { LATFbits.LATF3 = ~LATFbits.LATF3; } while(0)
#define LED_G_GetValue()           PORTFbits.RF3
#define LED_G_SetDigitalInput()    do { TRISFbits.TRISF3 = 1; } while(0)
#define LED_G_SetDigitalOutput()   do { TRISFbits.TRISF3 = 0; } while(0)
#define LED_G_SetPullup()          do { WPUFbits.WPUF3 = 1; } while(0)
#define LED_G_ResetPullup()        do { WPUFbits.WPUF3 = 0; } while(0)
#define LED_G_SetPushPull()        do { ODCONFbits.ODCF3 = 0; } while(0)
#define LED_G_SetOpenDrain()       do { ODCONFbits.ODCF3 = 1; } while(0)
#define LED_G_SetAnalogMode()      do { ANSELFbits.ANSELF3 = 1; } while(0)
#define LED_G_SetDigitalMode()     do { ANSELFbits.ANSELF3 = 0; } while(0)

// get/set LED_DP aliases
#define LED_DP_TRIS                 TRISFbits.TRISF4
#define LED_DP_LAT                  LATFbits.LATF4
#define LED_DP_PORT                 PORTFbits.RF4
#define LED_DP_WPU                  WPUFbits.WPUF4
#define LED_DP_OD                   ODCONFbits.ODCF4
#define LED_DP_ANS                  ANSELFbits.ANSELF4
#define LED_DP_SetHigh()            do { LATFbits.LATF4 = 1; } while(0)
#define LED_DP_SetLow()             do { LATFbits.LATF4 = 0; } while(0)
#define LED_DP_Toggle()             do { LATFbits.LATF4 = ~LATFbits.LATF4; } while(0)
#define LED_DP_GetValue()           PORTFbits.RF4
#define LED_DP_SetDigitalInput()    do { TRISFbits.TRISF4 = 1; } while(0)
#define LED_DP_SetDigitalOutput()   do { TRISFbits.TRISF4 = 0; } while(0)
#define LED_DP_SetPullup()          do { WPUFbits.WPUF4 = 1; } while(0)
#define LED_DP_ResetPullup()        do { WPUFbits.WPUF4 = 0; } while(0)
#define LED_DP_SetPushPull()        do { ODCONFbits.ODCF4 = 0; } while(0)
#define LED_DP_SetOpenDrain()       do { ODCONFbits.ODCF4 = 1; } while(0)
#define LED_DP_SetAnalogMode()      do { ANSELFbits.ANSELF4 = 1; } while(0)
#define LED_DP_SetDigitalMode()     do { ANSELFbits.ANSELF4 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/