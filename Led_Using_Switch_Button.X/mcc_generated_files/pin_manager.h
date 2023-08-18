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

// get/set SW aliases
#define SW_TRIS                 TRISBbits.TRISB4
#define SW_LAT                  LATBbits.LATB4
#define SW_PORT                 PORTBbits.RB4
#define SW_WPU                  WPUBbits.WPUB4
#define SW_OD                   ODCONBbits.ODCB4
#define SW_ANS                  ANSELBbits.ANSELB4
#define SW_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define SW_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define SW_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define SW_GetValue()           PORTBbits.RB4
#define SW_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define SW_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define SW_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define SW_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define SW_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define SW_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define SW_SetAnalogMode()      do { ANSELBbits.ANSELB4 = 1; } while(0)
#define SW_SetDigitalMode()     do { ANSELBbits.ANSELB4 = 0; } while(0)

// get/set Led aliases
#define Led_TRIS                 TRISFbits.TRISF3
#define Led_LAT                  LATFbits.LATF3
#define Led_PORT                 PORTFbits.RF3
#define Led_WPU                  WPUFbits.WPUF3
#define Led_OD                   ODCONFbits.ODCF3
#define Led_ANS                  ANSELFbits.ANSELF3
#define Led_SetHigh()            do { LATFbits.LATF3 = 1; } while(0)
#define Led_SetLow()             do { LATFbits.LATF3 = 0; } while(0)
#define Led_Toggle()             do { LATFbits.LATF3 = ~LATFbits.LATF3; } while(0)
#define Led_GetValue()           PORTFbits.RF3
#define Led_SetDigitalInput()    do { TRISFbits.TRISF3 = 1; } while(0)
#define Led_SetDigitalOutput()   do { TRISFbits.TRISF3 = 0; } while(0)
#define Led_SetPullup()          do { WPUFbits.WPUF3 = 1; } while(0)
#define Led_ResetPullup()        do { WPUFbits.WPUF3 = 0; } while(0)
#define Led_SetPushPull()        do { ODCONFbits.ODCF3 = 0; } while(0)
#define Led_SetOpenDrain()       do { ODCONFbits.ODCF3 = 1; } while(0)
#define Led_SetAnalogMode()      do { ANSELFbits.ANSELF3 = 1; } while(0)
#define Led_SetDigitalMode()     do { ANSELFbits.ANSELF3 = 0; } while(0)

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