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

// get/set LD aliases
#define LD_TRIS                 TRISAbits.TRISA5
#define LD_LAT                  LATAbits.LATA5
#define LD_PORT                 PORTAbits.RA5
#define LD_WPU                  WPUAbits.WPUA5
#define LD_OD                   ODCONAbits.ODCA5
#define LD_ANS                  ANSELAbits.ANSELA5
#define LD_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define LD_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define LD_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define LD_GetValue()           PORTAbits.RA5
#define LD_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define LD_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define LD_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define LD_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define LD_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define LD_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define LD_SetAnalogMode()      do { ANSELAbits.ANSELA5 = 1; } while(0)
#define LD_SetDigitalMode()     do { ANSELAbits.ANSELA5 = 0; } while(0)

// get/set SW aliases
#define SW_TRIS                 TRISBbits.TRISB2
#define SW_LAT                  LATBbits.LATB2
#define SW_PORT                 PORTBbits.RB2
#define SW_WPU                  WPUBbits.WPUB2
#define SW_OD                   ODCONBbits.ODCB2
#define SW_ANS                  ANSELBbits.ANSELB2
#define SW_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define SW_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define SW_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define SW_GetValue()           PORTBbits.RB2
#define SW_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define SW_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define SW_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define SW_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define SW_SetPushPull()        do { ODCONBbits.ODCB2 = 0; } while(0)
#define SW_SetOpenDrain()       do { ODCONBbits.ODCB2 = 1; } while(0)
#define SW_SetAnalogMode()      do { ANSELBbits.ANSELB2 = 1; } while(0)
#define SW_SetDigitalMode()     do { ANSELBbits.ANSELB2 = 0; } while(0)

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