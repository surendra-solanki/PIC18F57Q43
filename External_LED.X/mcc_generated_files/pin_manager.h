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

// get/set LED aliases
#define LED_TRIS                 TRISCbits.TRISC2
#define LED_LAT                  LATCbits.LATC2
#define LED_PORT                 PORTCbits.RC2
#define LED_WPU                  WPUCbits.WPUC2
#define LED_OD                   ODCONCbits.ODCC2
#define LED_ANS                  ANSELCbits.ANSELC2
#define LED_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define LED_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define LED_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define LED_GetValue()           PORTCbits.RC2
#define LED_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define LED_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define LED_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define LED_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define LED_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define LED_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define LED_SetAnalogMode()      do { ANSELCbits.ANSELC2 = 1; } while(0)
#define LED_SetDigitalMode()     do { ANSELCbits.ANSELC2 = 0; } while(0)

// get/set LD2 aliases
#define LD2_TRIS                 TRISCbits.TRISC4
#define LD2_LAT                  LATCbits.LATC4
#define LD2_PORT                 PORTCbits.RC4
#define LD2_WPU                  WPUCbits.WPUC4
#define LD2_OD                   ODCONCbits.ODCC4
#define LD2_ANS                  ANSELCbits.ANSELC4
#define LD2_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define LD2_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define LD2_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define LD2_GetValue()           PORTCbits.RC4
#define LD2_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define LD2_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define LD2_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define LD2_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define LD2_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define LD2_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define LD2_SetAnalogMode()      do { ANSELCbits.ANSELC4 = 1; } while(0)
#define LD2_SetDigitalMode()     do { ANSELCbits.ANSELC4 = 0; } while(0)

// get/set LD3 aliases
#define LD3_TRIS                 TRISCbits.TRISC6
#define LD3_LAT                  LATCbits.LATC6
#define LD3_PORT                 PORTCbits.RC6
#define LD3_WPU                  WPUCbits.WPUC6
#define LD3_OD                   ODCONCbits.ODCC6
#define LD3_ANS                  ANSELCbits.ANSELC6
#define LD3_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define LD3_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define LD3_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define LD3_GetValue()           PORTCbits.RC6
#define LD3_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define LD3_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define LD3_SetPullup()          do { WPUCbits.WPUC6 = 1; } while(0)
#define LD3_ResetPullup()        do { WPUCbits.WPUC6 = 0; } while(0)
#define LD3_SetPushPull()        do { ODCONCbits.ODCC6 = 0; } while(0)
#define LD3_SetOpenDrain()       do { ODCONCbits.ODCC6 = 1; } while(0)
#define LD3_SetAnalogMode()      do { ANSELCbits.ANSELC6 = 1; } while(0)
#define LD3_SetDigitalMode()     do { ANSELCbits.ANSELC6 = 0; } while(0)

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