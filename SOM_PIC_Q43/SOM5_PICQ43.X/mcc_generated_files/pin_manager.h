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

// get/set RA0 procedures
#define RA0_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define RA0_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define RA0_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define RA0_GetValue()              PORTAbits.RA0
#define RA0_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define RA0_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define RA0_SetPullup()             do { WPUAbits.WPUA0 = 1; } while(0)
#define RA0_ResetPullup()           do { WPUAbits.WPUA0 = 0; } while(0)
#define RA0_SetAnalogMode()         do { ANSELAbits.ANSELA0 = 1; } while(0)
#define RA0_SetDigitalMode()        do { ANSELAbits.ANSELA0 = 0; } while(0)

// get/set AIP0 aliases
#define AIP0_TRIS                 TRISAbits.TRISA1
#define AIP0_LAT                  LATAbits.LATA1
#define AIP0_PORT                 PORTAbits.RA1
#define AIP0_WPU                  WPUAbits.WPUA1
#define AIP0_OD                   ODCONAbits.ODCA1
#define AIP0_ANS                  ANSELAbits.ANSELA1
#define AIP0_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define AIP0_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define AIP0_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define AIP0_GetValue()           PORTAbits.RA1
#define AIP0_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define AIP0_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define AIP0_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define AIP0_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define AIP0_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define AIP0_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define AIP0_SetAnalogMode()      do { ANSELAbits.ANSELA1 = 1; } while(0)
#define AIP0_SetDigitalMode()     do { ANSELAbits.ANSELA1 = 0; } while(0)

// get/set RA2 procedures
#define RA2_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define RA2_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define RA2_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define RA2_GetValue()              PORTAbits.RA2
#define RA2_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define RA2_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define RA2_SetPullup()             do { WPUAbits.WPUA2 = 1; } while(0)
#define RA2_ResetPullup()           do { WPUAbits.WPUA2 = 0; } while(0)
#define RA2_SetAnalogMode()         do { ANSELAbits.ANSELA2 = 1; } while(0)
#define RA2_SetDigitalMode()        do { ANSELAbits.ANSELA2 = 0; } while(0)

// get/set AIP1 aliases
#define AIP1_TRIS                 TRISAbits.TRISA5
#define AIP1_LAT                  LATAbits.LATA5
#define AIP1_PORT                 PORTAbits.RA5
#define AIP1_WPU                  WPUAbits.WPUA5
#define AIP1_OD                   ODCONAbits.ODCA5
#define AIP1_ANS                  ANSELAbits.ANSELA5
#define AIP1_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define AIP1_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define AIP1_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define AIP1_GetValue()           PORTAbits.RA5
#define AIP1_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define AIP1_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define AIP1_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define AIP1_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define AIP1_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define AIP1_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define AIP1_SetAnalogMode()      do { ANSELAbits.ANSELA5 = 1; } while(0)
#define AIP1_SetDigitalMode()     do { ANSELAbits.ANSELA5 = 0; } while(0)

// get/set AIP2 aliases
#define AIP2_TRIS                 TRISAbits.TRISA6
#define AIP2_LAT                  LATAbits.LATA6
#define AIP2_PORT                 PORTAbits.RA6
#define AIP2_WPU                  WPUAbits.WPUA6
#define AIP2_OD                   ODCONAbits.ODCA6
#define AIP2_ANS                  ANSELAbits.ANSELA6
#define AIP2_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define AIP2_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define AIP2_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define AIP2_GetValue()           PORTAbits.RA6
#define AIP2_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define AIP2_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)
#define AIP2_SetPullup()          do { WPUAbits.WPUA6 = 1; } while(0)
#define AIP2_ResetPullup()        do { WPUAbits.WPUA6 = 0; } while(0)
#define AIP2_SetPushPull()        do { ODCONAbits.ODCA6 = 0; } while(0)
#define AIP2_SetOpenDrain()       do { ODCONAbits.ODCA6 = 1; } while(0)
#define AIP2_SetAnalogMode()      do { ANSELAbits.ANSELA6 = 1; } while(0)
#define AIP2_SetDigitalMode()     do { ANSELAbits.ANSELA6 = 0; } while(0)

// get/set AIP3 aliases
#define AIP3_TRIS                 TRISAbits.TRISA7
#define AIP3_LAT                  LATAbits.LATA7
#define AIP3_PORT                 PORTAbits.RA7
#define AIP3_WPU                  WPUAbits.WPUA7
#define AIP3_OD                   ODCONAbits.ODCA7
#define AIP3_ANS                  ANSELAbits.ANSELA7
#define AIP3_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define AIP3_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define AIP3_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define AIP3_GetValue()           PORTAbits.RA7
#define AIP3_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define AIP3_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)
#define AIP3_SetPullup()          do { WPUAbits.WPUA7 = 1; } while(0)
#define AIP3_ResetPullup()        do { WPUAbits.WPUA7 = 0; } while(0)
#define AIP3_SetPushPull()        do { ODCONAbits.ODCA7 = 0; } while(0)
#define AIP3_SetOpenDrain()       do { ODCONAbits.ODCA7 = 1; } while(0)
#define AIP3_SetAnalogMode()      do { ANSELAbits.ANSELA7 = 1; } while(0)
#define AIP3_SetDigitalMode()     do { ANSELAbits.ANSELA7 = 0; } while(0)

// get/set AIP4 aliases
#define AIP4_TRIS                 TRISBbits.TRISB0
#define AIP4_LAT                  LATBbits.LATB0
#define AIP4_PORT                 PORTBbits.RB0
#define AIP4_WPU                  WPUBbits.WPUB0
#define AIP4_OD                   ODCONBbits.ODCB0
#define AIP4_ANS                  ANSELBbits.ANSELB0
#define AIP4_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define AIP4_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define AIP4_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define AIP4_GetValue()           PORTBbits.RB0
#define AIP4_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define AIP4_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define AIP4_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define AIP4_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define AIP4_SetPushPull()        do { ODCONBbits.ODCB0 = 0; } while(0)
#define AIP4_SetOpenDrain()       do { ODCONBbits.ODCB0 = 1; } while(0)
#define AIP4_SetAnalogMode()      do { ANSELBbits.ANSELB0 = 1; } while(0)
#define AIP4_SetDigitalMode()     do { ANSELBbits.ANSELB0 = 0; } while(0)

// get/set RB1 procedures
#define RB1_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define RB1_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define RB1_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define RB1_GetValue()              PORTBbits.RB1
#define RB1_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define RB1_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define RB1_SetPullup()             do { WPUBbits.WPUB1 = 1; } while(0)
#define RB1_ResetPullup()           do { WPUBbits.WPUB1 = 0; } while(0)
#define RB1_SetAnalogMode()         do { ANSELBbits.ANSELB1 = 1; } while(0)
#define RB1_SetDigitalMode()        do { ANSELBbits.ANSELB1 = 0; } while(0)

// get/set RB2 procedures
#define RB2_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define RB2_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define RB2_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define RB2_GetValue()              PORTBbits.RB2
#define RB2_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define RB2_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define RB2_SetPullup()             do { WPUBbits.WPUB2 = 1; } while(0)
#define RB2_ResetPullup()           do { WPUBbits.WPUB2 = 0; } while(0)
#define RB2_SetAnalogMode()         do { ANSELBbits.ANSELB2 = 1; } while(0)
#define RB2_SetDigitalMode()        do { ANSELBbits.ANSELB2 = 0; } while(0)

// get/set AIP5 aliases
#define AIP5_TRIS                 TRISBbits.TRISB3
#define AIP5_LAT                  LATBbits.LATB3
#define AIP5_PORT                 PORTBbits.RB3
#define AIP5_WPU                  WPUBbits.WPUB3
#define AIP5_OD                   ODCONBbits.ODCB3
#define AIP5_ANS                  ANSELBbits.ANSELB3
#define AIP5_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define AIP5_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define AIP5_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define AIP5_GetValue()           PORTBbits.RB3
#define AIP5_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define AIP5_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define AIP5_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define AIP5_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define AIP5_SetPushPull()        do { ODCONBbits.ODCB3 = 0; } while(0)
#define AIP5_SetOpenDrain()       do { ODCONBbits.ODCB3 = 1; } while(0)
#define AIP5_SetAnalogMode()      do { ANSELBbits.ANSELB3 = 1; } while(0)
#define AIP5_SetDigitalMode()     do { ANSELBbits.ANSELB3 = 0; } while(0)

// get/set SWITCH aliases
#define SWITCH_TRIS                 TRISBbits.TRISB4
#define SWITCH_LAT                  LATBbits.LATB4
#define SWITCH_PORT                 PORTBbits.RB4
#define SWITCH_WPU                  WPUBbits.WPUB4
#define SWITCH_OD                   ODCONBbits.ODCB4
#define SWITCH_ANS                  ANSELBbits.ANSELB4
#define SWITCH_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define SWITCH_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define SWITCH_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define SWITCH_GetValue()           PORTBbits.RB4
#define SWITCH_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define SWITCH_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define SWITCH_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define SWITCH_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define SWITCH_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define SWITCH_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define SWITCH_SetAnalogMode()      do { ANSELBbits.ANSELB4 = 1; } while(0)
#define SWITCH_SetDigitalMode()     do { ANSELBbits.ANSELB4 = 0; } while(0)

// get/set GPIO1 aliases
#define GPIO1_TRIS                 TRISBbits.TRISB5
#define GPIO1_LAT                  LATBbits.LATB5
#define GPIO1_PORT                 PORTBbits.RB5
#define GPIO1_WPU                  WPUBbits.WPUB5
#define GPIO1_OD                   ODCONBbits.ODCB5
#define GPIO1_ANS                  ANSELBbits.ANSELB5
#define GPIO1_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define GPIO1_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define GPIO1_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define GPIO1_GetValue()           PORTBbits.RB5
#define GPIO1_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define GPIO1_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define GPIO1_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define GPIO1_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define GPIO1_SetPushPull()        do { ODCONBbits.ODCB5 = 0; } while(0)
#define GPIO1_SetOpenDrain()       do { ODCONBbits.ODCB5 = 1; } while(0)
#define GPIO1_SetAnalogMode()      do { ANSELBbits.ANSELB5 = 1; } while(0)
#define GPIO1_SetDigitalMode()     do { ANSELBbits.ANSELB5 = 0; } while(0)

// get/set GPIO2 aliases
#define GPIO2_TRIS                 TRISCbits.TRISC2
#define GPIO2_LAT                  LATCbits.LATC2
#define GPIO2_PORT                 PORTCbits.RC2
#define GPIO2_WPU                  WPUCbits.WPUC2
#define GPIO2_OD                   ODCONCbits.ODCC2
#define GPIO2_ANS                  ANSELCbits.ANSELC2
#define GPIO2_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define GPIO2_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define GPIO2_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define GPIO2_GetValue()           PORTCbits.RC2
#define GPIO2_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define GPIO2_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define GPIO2_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define GPIO2_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define GPIO2_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define GPIO2_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define GPIO2_SetAnalogMode()      do { ANSELCbits.ANSELC2 = 1; } while(0)
#define GPIO2_SetDigitalMode()     do { ANSELCbits.ANSELC2 = 0; } while(0)

// get/set IO_RC3 aliases
#define IO_RC3_TRIS                 TRISCbits.TRISC3
#define IO_RC3_LAT                  LATCbits.LATC3
#define IO_RC3_PORT                 PORTCbits.RC3
#define IO_RC3_WPU                  WPUCbits.WPUC3
#define IO_RC3_OD                   ODCONCbits.ODCC3
#define IO_RC3_ANS                  ANSELCbits.ANSELC3
#define IO_RC3_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define IO_RC3_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define IO_RC3_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define IO_RC3_GetValue()           PORTCbits.RC3
#define IO_RC3_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define IO_RC3_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define IO_RC3_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define IO_RC3_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define IO_RC3_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define IO_RC3_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define IO_RC3_SetAnalogMode()      do { ANSELCbits.ANSELC3 = 1; } while(0)
#define IO_RC3_SetDigitalMode()     do { ANSELCbits.ANSELC3 = 0; } while(0)

// get/set RC4 procedures
#define RC4_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define RC4_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define RC4_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define RC4_GetValue()              PORTCbits.RC4
#define RC4_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define RC4_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define RC4_SetPullup()             do { WPUCbits.WPUC4 = 1; } while(0)
#define RC4_ResetPullup()           do { WPUCbits.WPUC4 = 0; } while(0)
#define RC4_SetAnalogMode()         do { ANSELCbits.ANSELC4 = 1; } while(0)
#define RC4_SetDigitalMode()        do { ANSELCbits.ANSELC4 = 0; } while(0)

// get/set RC5 procedures
#define RC5_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define RC5_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define RC5_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define RC5_GetValue()              PORTCbits.RC5
#define RC5_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define RC5_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define RC5_SetPullup()             do { WPUCbits.WPUC5 = 1; } while(0)
#define RC5_ResetPullup()           do { WPUCbits.WPUC5 = 0; } while(0)
#define RC5_SetAnalogMode()         do { ANSELCbits.ANSELC5 = 1; } while(0)
#define RC5_SetDigitalMode()        do { ANSELCbits.ANSELC5 = 0; } while(0)

// get/set RC6 procedures
#define RC6_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define RC6_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define RC6_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define RC6_GetValue()              PORTCbits.RC6
#define RC6_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define RC6_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define RC6_SetPullup()             do { WPUCbits.WPUC6 = 1; } while(0)
#define RC6_ResetPullup()           do { WPUCbits.WPUC6 = 0; } while(0)
#define RC6_SetAnalogMode()         do { ANSELCbits.ANSELC6 = 1; } while(0)
#define RC6_SetDigitalMode()        do { ANSELCbits.ANSELC6 = 0; } while(0)

// get/set RC7 procedures
#define RC7_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define RC7_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define RC7_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define RC7_GetValue()              PORTCbits.RC7
#define RC7_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define RC7_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define RC7_SetPullup()             do { WPUCbits.WPUC7 = 1; } while(0)
#define RC7_ResetPullup()           do { WPUCbits.WPUC7 = 0; } while(0)
#define RC7_SetAnalogMode()         do { ANSELCbits.ANSELC7 = 1; } while(0)
#define RC7_SetDigitalMode()        do { ANSELCbits.ANSELC7 = 0; } while(0)

// get/set RD0 procedures
#define RD0_SetHigh()            do { LATDbits.LATD0 = 1; } while(0)
#define RD0_SetLow()             do { LATDbits.LATD0 = 0; } while(0)
#define RD0_Toggle()             do { LATDbits.LATD0 = ~LATDbits.LATD0; } while(0)
#define RD0_GetValue()              PORTDbits.RD0
#define RD0_SetDigitalInput()    do { TRISDbits.TRISD0 = 1; } while(0)
#define RD0_SetDigitalOutput()   do { TRISDbits.TRISD0 = 0; } while(0)
#define RD0_SetPullup()             do { WPUDbits.WPUD0 = 1; } while(0)
#define RD0_ResetPullup()           do { WPUDbits.WPUD0 = 0; } while(0)
#define RD0_SetAnalogMode()         do { ANSELDbits.ANSELD0 = 1; } while(0)
#define RD0_SetDigitalMode()        do { ANSELDbits.ANSELD0 = 0; } while(0)

// get/set RD1 procedures
#define RD1_SetHigh()            do { LATDbits.LATD1 = 1; } while(0)
#define RD1_SetLow()             do { LATDbits.LATD1 = 0; } while(0)
#define RD1_Toggle()             do { LATDbits.LATD1 = ~LATDbits.LATD1; } while(0)
#define RD1_GetValue()              PORTDbits.RD1
#define RD1_SetDigitalInput()    do { TRISDbits.TRISD1 = 1; } while(0)
#define RD1_SetDigitalOutput()   do { TRISDbits.TRISD1 = 0; } while(0)
#define RD1_SetPullup()             do { WPUDbits.WPUD1 = 1; } while(0)
#define RD1_ResetPullup()           do { WPUDbits.WPUD1 = 0; } while(0)
#define RD1_SetAnalogMode()         do { ANSELDbits.ANSELD1 = 1; } while(0)
#define RD1_SetDigitalMode()        do { ANSELDbits.ANSELD1 = 0; } while(0)

// get/set GPIO4 aliases
#define GPIO4_TRIS                 TRISDbits.TRISD2
#define GPIO4_LAT                  LATDbits.LATD2
#define GPIO4_PORT                 PORTDbits.RD2
#define GPIO4_WPU                  WPUDbits.WPUD2
#define GPIO4_OD                   ODCONDbits.ODCD2
#define GPIO4_ANS                  ANSELDbits.ANSELD2
#define GPIO4_SetHigh()            do { LATDbits.LATD2 = 1; } while(0)
#define GPIO4_SetLow()             do { LATDbits.LATD2 = 0; } while(0)
#define GPIO4_Toggle()             do { LATDbits.LATD2 = ~LATDbits.LATD2; } while(0)
#define GPIO4_GetValue()           PORTDbits.RD2
#define GPIO4_SetDigitalInput()    do { TRISDbits.TRISD2 = 1; } while(0)
#define GPIO4_SetDigitalOutput()   do { TRISDbits.TRISD2 = 0; } while(0)
#define GPIO4_SetPullup()          do { WPUDbits.WPUD2 = 1; } while(0)
#define GPIO4_ResetPullup()        do { WPUDbits.WPUD2 = 0; } while(0)
#define GPIO4_SetPushPull()        do { ODCONDbits.ODCD2 = 0; } while(0)
#define GPIO4_SetOpenDrain()       do { ODCONDbits.ODCD2 = 1; } while(0)
#define GPIO4_SetAnalogMode()      do { ANSELDbits.ANSELD2 = 1; } while(0)
#define GPIO4_SetDigitalMode()     do { ANSELDbits.ANSELD2 = 0; } while(0)

// get/set GPIO5 aliases
#define GPIO5_TRIS                 TRISDbits.TRISD3
#define GPIO5_LAT                  LATDbits.LATD3
#define GPIO5_PORT                 PORTDbits.RD3
#define GPIO5_WPU                  WPUDbits.WPUD3
#define GPIO5_OD                   ODCONDbits.ODCD3
#define GPIO5_ANS                  ANSELDbits.ANSELD3
#define GPIO5_SetHigh()            do { LATDbits.LATD3 = 1; } while(0)
#define GPIO5_SetLow()             do { LATDbits.LATD3 = 0; } while(0)
#define GPIO5_Toggle()             do { LATDbits.LATD3 = ~LATDbits.LATD3; } while(0)
#define GPIO5_GetValue()           PORTDbits.RD3
#define GPIO5_SetDigitalInput()    do { TRISDbits.TRISD3 = 1; } while(0)
#define GPIO5_SetDigitalOutput()   do { TRISDbits.TRISD3 = 0; } while(0)
#define GPIO5_SetPullup()          do { WPUDbits.WPUD3 = 1; } while(0)
#define GPIO5_ResetPullup()        do { WPUDbits.WPUD3 = 0; } while(0)
#define GPIO5_SetPushPull()        do { ODCONDbits.ODCD3 = 0; } while(0)
#define GPIO5_SetOpenDrain()       do { ODCONDbits.ODCD3 = 1; } while(0)
#define GPIO5_SetAnalogMode()      do { ANSELDbits.ANSELD3 = 1; } while(0)
#define GPIO5_SetDigitalMode()     do { ANSELDbits.ANSELD3 = 0; } while(0)

// get/set SPI_SS aliases
#define SPI_SS_TRIS                 TRISDbits.TRISD4
#define SPI_SS_LAT                  LATDbits.LATD4
#define SPI_SS_PORT                 PORTDbits.RD4
#define SPI_SS_WPU                  WPUDbits.WPUD4
#define SPI_SS_OD                   ODCONDbits.ODCD4
#define SPI_SS_ANS                  ANSELDbits.ANSELD4
#define SPI_SS_SetHigh()            do { LATDbits.LATD4 = 1; } while(0)
#define SPI_SS_SetLow()             do { LATDbits.LATD4 = 0; } while(0)
#define SPI_SS_Toggle()             do { LATDbits.LATD4 = ~LATDbits.LATD4; } while(0)
#define SPI_SS_GetValue()           PORTDbits.RD4
#define SPI_SS_SetDigitalInput()    do { TRISDbits.TRISD4 = 1; } while(0)
#define SPI_SS_SetDigitalOutput()   do { TRISDbits.TRISD4 = 0; } while(0)
#define SPI_SS_SetPullup()          do { WPUDbits.WPUD4 = 1; } while(0)
#define SPI_SS_ResetPullup()        do { WPUDbits.WPUD4 = 0; } while(0)
#define SPI_SS_SetPushPull()        do { ODCONDbits.ODCD4 = 0; } while(0)
#define SPI_SS_SetOpenDrain()       do { ODCONDbits.ODCD4 = 1; } while(0)
#define SPI_SS_SetAnalogMode()      do { ANSELDbits.ANSELD4 = 1; } while(0)
#define SPI_SS_SetDigitalMode()     do { ANSELDbits.ANSELD4 = 0; } while(0)

// get/set RD5 procedures
#define RD5_SetHigh()            do { LATDbits.LATD5 = 1; } while(0)
#define RD5_SetLow()             do { LATDbits.LATD5 = 0; } while(0)
#define RD5_Toggle()             do { LATDbits.LATD5 = ~LATDbits.LATD5; } while(0)
#define RD5_GetValue()              PORTDbits.RD5
#define RD5_SetDigitalInput()    do { TRISDbits.TRISD5 = 1; } while(0)
#define RD5_SetDigitalOutput()   do { TRISDbits.TRISD5 = 0; } while(0)
#define RD5_SetPullup()             do { WPUDbits.WPUD5 = 1; } while(0)
#define RD5_ResetPullup()           do { WPUDbits.WPUD5 = 0; } while(0)
#define RD5_SetAnalogMode()         do { ANSELDbits.ANSELD5 = 1; } while(0)
#define RD5_SetDigitalMode()        do { ANSELDbits.ANSELD5 = 0; } while(0)

// get/set RD6 procedures
#define RD6_SetHigh()            do { LATDbits.LATD6 = 1; } while(0)
#define RD6_SetLow()             do { LATDbits.LATD6 = 0; } while(0)
#define RD6_Toggle()             do { LATDbits.LATD6 = ~LATDbits.LATD6; } while(0)
#define RD6_GetValue()              PORTDbits.RD6
#define RD6_SetDigitalInput()    do { TRISDbits.TRISD6 = 1; } while(0)
#define RD6_SetDigitalOutput()   do { TRISDbits.TRISD6 = 0; } while(0)
#define RD6_SetPullup()             do { WPUDbits.WPUD6 = 1; } while(0)
#define RD6_ResetPullup()           do { WPUDbits.WPUD6 = 0; } while(0)
#define RD6_SetAnalogMode()         do { ANSELDbits.ANSELD6 = 1; } while(0)
#define RD6_SetDigitalMode()        do { ANSELDbits.ANSELD6 = 0; } while(0)

// get/set RD7 procedures
#define RD7_SetHigh()            do { LATDbits.LATD7 = 1; } while(0)
#define RD7_SetLow()             do { LATDbits.LATD7 = 0; } while(0)
#define RD7_Toggle()             do { LATDbits.LATD7 = ~LATDbits.LATD7; } while(0)
#define RD7_GetValue()              PORTDbits.RD7
#define RD7_SetDigitalInput()    do { TRISDbits.TRISD7 = 1; } while(0)
#define RD7_SetDigitalOutput()   do { TRISDbits.TRISD7 = 0; } while(0)
#define RD7_SetPullup()             do { WPUDbits.WPUD7 = 1; } while(0)
#define RD7_ResetPullup()           do { WPUDbits.WPUD7 = 0; } while(0)
#define RD7_SetAnalogMode()         do { ANSELDbits.ANSELD7 = 1; } while(0)
#define RD7_SetDigitalMode()        do { ANSELDbits.ANSELD7 = 0; } while(0)

// get/set RE0 procedures
#define RE0_SetHigh()            do { LATEbits.LATE0 = 1; } while(0)
#define RE0_SetLow()             do { LATEbits.LATE0 = 0; } while(0)
#define RE0_Toggle()             do { LATEbits.LATE0 = ~LATEbits.LATE0; } while(0)
#define RE0_GetValue()              PORTEbits.RE0
#define RE0_SetDigitalInput()    do { TRISEbits.TRISE0 = 1; } while(0)
#define RE0_SetDigitalOutput()   do { TRISEbits.TRISE0 = 0; } while(0)
#define RE0_SetPullup()             do { WPUEbits.WPUE0 = 1; } while(0)
#define RE0_ResetPullup()           do { WPUEbits.WPUE0 = 0; } while(0)
#define RE0_SetAnalogMode()         do { ANSELEbits.ANSELE0 = 1; } while(0)
#define RE0_SetDigitalMode()        do { ANSELEbits.ANSELE0 = 0; } while(0)

// get/set GPIO7 aliases
#define GPIO7_TRIS                 TRISEbits.TRISE1
#define GPIO7_LAT                  LATEbits.LATE1
#define GPIO7_PORT                 PORTEbits.RE1
#define GPIO7_WPU                  WPUEbits.WPUE1
#define GPIO7_OD                   ODCONEbits.ODCE1
#define GPIO7_ANS                  ANSELEbits.ANSELE1
#define GPIO7_SetHigh()            do { LATEbits.LATE1 = 1; } while(0)
#define GPIO7_SetLow()             do { LATEbits.LATE1 = 0; } while(0)
#define GPIO7_Toggle()             do { LATEbits.LATE1 = ~LATEbits.LATE1; } while(0)
#define GPIO7_GetValue()           PORTEbits.RE1
#define GPIO7_SetDigitalInput()    do { TRISEbits.TRISE1 = 1; } while(0)
#define GPIO7_SetDigitalOutput()   do { TRISEbits.TRISE1 = 0; } while(0)
#define GPIO7_SetPullup()          do { WPUEbits.WPUE1 = 1; } while(0)
#define GPIO7_ResetPullup()        do { WPUEbits.WPUE1 = 0; } while(0)
#define GPIO7_SetPushPull()        do { ODCONEbits.ODCE1 = 0; } while(0)
#define GPIO7_SetOpenDrain()       do { ODCONEbits.ODCE1 = 1; } while(0)
#define GPIO7_SetAnalogMode()      do { ANSELEbits.ANSELE1 = 1; } while(0)
#define GPIO7_SetDigitalMode()     do { ANSELEbits.ANSELE1 = 0; } while(0)

// get/set GPIO8 aliases
#define GPIO8_TRIS                 TRISEbits.TRISE2
#define GPIO8_LAT                  LATEbits.LATE2
#define GPIO8_PORT                 PORTEbits.RE2
#define GPIO8_WPU                  WPUEbits.WPUE2
#define GPIO8_OD                   ODCONEbits.ODCE2
#define GPIO8_ANS                  ANSELEbits.ANSELE2
#define GPIO8_SetHigh()            do { LATEbits.LATE2 = 1; } while(0)
#define GPIO8_SetLow()             do { LATEbits.LATE2 = 0; } while(0)
#define GPIO8_Toggle()             do { LATEbits.LATE2 = ~LATEbits.LATE2; } while(0)
#define GPIO8_GetValue()           PORTEbits.RE2
#define GPIO8_SetDigitalInput()    do { TRISEbits.TRISE2 = 1; } while(0)
#define GPIO8_SetDigitalOutput()   do { TRISEbits.TRISE2 = 0; } while(0)
#define GPIO8_SetPullup()          do { WPUEbits.WPUE2 = 1; } while(0)
#define GPIO8_ResetPullup()        do { WPUEbits.WPUE2 = 0; } while(0)
#define GPIO8_SetPushPull()        do { ODCONEbits.ODCE2 = 0; } while(0)
#define GPIO8_SetOpenDrain()       do { ODCONEbits.ODCE2 = 1; } while(0)
#define GPIO8_SetAnalogMode()      do { ANSELEbits.ANSELE2 = 1; } while(0)
#define GPIO8_SetDigitalMode()     do { ANSELEbits.ANSELE2 = 0; } while(0)

// get/set RF0 procedures
#define RF0_SetHigh()            do { LATFbits.LATF0 = 1; } while(0)
#define RF0_SetLow()             do { LATFbits.LATF0 = 0; } while(0)
#define RF0_Toggle()             do { LATFbits.LATF0 = ~LATFbits.LATF0; } while(0)
#define RF0_GetValue()              PORTFbits.RF0
#define RF0_SetDigitalInput()    do { TRISFbits.TRISF0 = 1; } while(0)
#define RF0_SetDigitalOutput()   do { TRISFbits.TRISF0 = 0; } while(0)
#define RF0_SetPullup()             do { WPUFbits.WPUF0 = 1; } while(0)
#define RF0_ResetPullup()           do { WPUFbits.WPUF0 = 0; } while(0)
#define RF0_SetAnalogMode()         do { ANSELFbits.ANSELF0 = 1; } while(0)
#define RF0_SetDigitalMode()        do { ANSELFbits.ANSELF0 = 0; } while(0)

// get/set RF1 procedures
#define RF1_SetHigh()            do { LATFbits.LATF1 = 1; } while(0)
#define RF1_SetLow()             do { LATFbits.LATF1 = 0; } while(0)
#define RF1_Toggle()             do { LATFbits.LATF1 = ~LATFbits.LATF1; } while(0)
#define RF1_GetValue()              PORTFbits.RF1
#define RF1_SetDigitalInput()    do { TRISFbits.TRISF1 = 1; } while(0)
#define RF1_SetDigitalOutput()   do { TRISFbits.TRISF1 = 0; } while(0)
#define RF1_SetPullup()             do { WPUFbits.WPUF1 = 1; } while(0)
#define RF1_ResetPullup()           do { WPUFbits.WPUF1 = 0; } while(0)
#define RF1_SetAnalogMode()         do { ANSELFbits.ANSELF1 = 1; } while(0)
#define RF1_SetDigitalMode()        do { ANSELFbits.ANSELF1 = 0; } while(0)

// get/set GPIO9 aliases
#define GPIO9_TRIS                 TRISFbits.TRISF2
#define GPIO9_LAT                  LATFbits.LATF2
#define GPIO9_PORT                 PORTFbits.RF2
#define GPIO9_WPU                  WPUFbits.WPUF2
#define GPIO9_OD                   ODCONFbits.ODCF2
#define GPIO9_ANS                  ANSELFbits.ANSELF2
#define GPIO9_SetHigh()            do { LATFbits.LATF2 = 1; } while(0)
#define GPIO9_SetLow()             do { LATFbits.LATF2 = 0; } while(0)
#define GPIO9_Toggle()             do { LATFbits.LATF2 = ~LATFbits.LATF2; } while(0)
#define GPIO9_GetValue()           PORTFbits.RF2
#define GPIO9_SetDigitalInput()    do { TRISFbits.TRISF2 = 1; } while(0)
#define GPIO9_SetDigitalOutput()   do { TRISFbits.TRISF2 = 0; } while(0)
#define GPIO9_SetPullup()          do { WPUFbits.WPUF2 = 1; } while(0)
#define GPIO9_ResetPullup()        do { WPUFbits.WPUF2 = 0; } while(0)
#define GPIO9_SetPushPull()        do { ODCONFbits.ODCF2 = 0; } while(0)
#define GPIO9_SetOpenDrain()       do { ODCONFbits.ODCF2 = 1; } while(0)
#define GPIO9_SetAnalogMode()      do { ANSELFbits.ANSELF2 = 1; } while(0)
#define GPIO9_SetDigitalMode()     do { ANSELFbits.ANSELF2 = 0; } while(0)

// get/set LED aliases
#define LED_TRIS                 TRISFbits.TRISF3
#define LED_LAT                  LATFbits.LATF3
#define LED_PORT                 PORTFbits.RF3
#define LED_WPU                  WPUFbits.WPUF3
#define LED_OD                   ODCONFbits.ODCF3
#define LED_ANS                  ANSELFbits.ANSELF3
#define LED_SetHigh()            do { LATFbits.LATF3 = 1; } while(0)
#define LED_SetLow()             do { LATFbits.LATF3 = 0; } while(0)
#define LED_Toggle()             do { LATFbits.LATF3 = ~LATFbits.LATF3; } while(0)
#define LED_GetValue()           PORTFbits.RF3
#define LED_SetDigitalInput()    do { TRISFbits.TRISF3 = 1; } while(0)
#define LED_SetDigitalOutput()   do { TRISFbits.TRISF3 = 0; } while(0)
#define LED_SetPullup()          do { WPUFbits.WPUF3 = 1; } while(0)
#define LED_ResetPullup()        do { WPUFbits.WPUF3 = 0; } while(0)
#define LED_SetPushPull()        do { ODCONFbits.ODCF3 = 0; } while(0)
#define LED_SetOpenDrain()       do { ODCONFbits.ODCF3 = 1; } while(0)
#define LED_SetAnalogMode()      do { ANSELFbits.ANSELF3 = 1; } while(0)
#define LED_SetDigitalMode()     do { ANSELFbits.ANSELF3 = 0; } while(0)

// get/set GPIO10 aliases
#define GPIO10_TRIS                 TRISFbits.TRISF4
#define GPIO10_LAT                  LATFbits.LATF4
#define GPIO10_PORT                 PORTFbits.RF4
#define GPIO10_WPU                  WPUFbits.WPUF4
#define GPIO10_OD                   ODCONFbits.ODCF4
#define GPIO10_ANS                  ANSELFbits.ANSELF4
#define GPIO10_SetHigh()            do { LATFbits.LATF4 = 1; } while(0)
#define GPIO10_SetLow()             do { LATFbits.LATF4 = 0; } while(0)
#define GPIO10_Toggle()             do { LATFbits.LATF4 = ~LATFbits.LATF4; } while(0)
#define GPIO10_GetValue()           PORTFbits.RF4
#define GPIO10_SetDigitalInput()    do { TRISFbits.TRISF4 = 1; } while(0)
#define GPIO10_SetDigitalOutput()   do { TRISFbits.TRISF4 = 0; } while(0)
#define GPIO10_SetPullup()          do { WPUFbits.WPUF4 = 1; } while(0)
#define GPIO10_ResetPullup()        do { WPUFbits.WPUF4 = 0; } while(0)
#define GPIO10_SetPushPull()        do { ODCONFbits.ODCF4 = 0; } while(0)
#define GPIO10_SetOpenDrain()       do { ODCONFbits.ODCF4 = 1; } while(0)
#define GPIO10_SetAnalogMode()      do { ANSELFbits.ANSELF4 = 1; } while(0)
#define GPIO10_SetDigitalMode()     do { ANSELFbits.ANSELF4 = 0; } while(0)

// get/set RF5 procedures
#define RF5_SetHigh()            do { LATFbits.LATF5 = 1; } while(0)
#define RF5_SetLow()             do { LATFbits.LATF5 = 0; } while(0)
#define RF5_Toggle()             do { LATFbits.LATF5 = ~LATFbits.LATF5; } while(0)
#define RF5_GetValue()              PORTFbits.RF5
#define RF5_SetDigitalInput()    do { TRISFbits.TRISF5 = 1; } while(0)
#define RF5_SetDigitalOutput()   do { TRISFbits.TRISF5 = 0; } while(0)
#define RF5_SetPullup()             do { WPUFbits.WPUF5 = 1; } while(0)
#define RF5_ResetPullup()           do { WPUFbits.WPUF5 = 0; } while(0)
#define RF5_SetAnalogMode()         do { ANSELFbits.ANSELF5 = 1; } while(0)
#define RF5_SetDigitalMode()        do { ANSELFbits.ANSELF5 = 0; } while(0)

// get/set GPIO12 aliases
#define GPIO12_TRIS                 TRISFbits.TRISF6
#define GPIO12_LAT                  LATFbits.LATF6
#define GPIO12_PORT                 PORTFbits.RF6
#define GPIO12_WPU                  WPUFbits.WPUF6
#define GPIO12_OD                   ODCONFbits.ODCF6
#define GPIO12_ANS                  ANSELFbits.ANSELF6
#define GPIO12_SetHigh()            do { LATFbits.LATF6 = 1; } while(0)
#define GPIO12_SetLow()             do { LATFbits.LATF6 = 0; } while(0)
#define GPIO12_Toggle()             do { LATFbits.LATF6 = ~LATFbits.LATF6; } while(0)
#define GPIO12_GetValue()           PORTFbits.RF6
#define GPIO12_SetDigitalInput()    do { TRISFbits.TRISF6 = 1; } while(0)
#define GPIO12_SetDigitalOutput()   do { TRISFbits.TRISF6 = 0; } while(0)
#define GPIO12_SetPullup()          do { WPUFbits.WPUF6 = 1; } while(0)
#define GPIO12_ResetPullup()        do { WPUFbits.WPUF6 = 0; } while(0)
#define GPIO12_SetPushPull()        do { ODCONFbits.ODCF6 = 0; } while(0)
#define GPIO12_SetOpenDrain()       do { ODCONFbits.ODCF6 = 1; } while(0)
#define GPIO12_SetAnalogMode()      do { ANSELFbits.ANSELF6 = 1; } while(0)
#define GPIO12_SetDigitalMode()     do { ANSELFbits.ANSELF6 = 0; } while(0)

// get/set GPIO13 aliases
#define GPIO13_TRIS                 TRISFbits.TRISF7
#define GPIO13_LAT                  LATFbits.LATF7
#define GPIO13_PORT                 PORTFbits.RF7
#define GPIO13_WPU                  WPUFbits.WPUF7
#define GPIO13_OD                   ODCONFbits.ODCF7
#define GPIO13_ANS                  ANSELFbits.ANSELF7
#define GPIO13_SetHigh()            do { LATFbits.LATF7 = 1; } while(0)
#define GPIO13_SetLow()             do { LATFbits.LATF7 = 0; } while(0)
#define GPIO13_Toggle()             do { LATFbits.LATF7 = ~LATFbits.LATF7; } while(0)
#define GPIO13_GetValue()           PORTFbits.RF7
#define GPIO13_SetDigitalInput()    do { TRISFbits.TRISF7 = 1; } while(0)
#define GPIO13_SetDigitalOutput()   do { TRISFbits.TRISF7 = 0; } while(0)
#define GPIO13_SetPullup()          do { WPUFbits.WPUF7 = 1; } while(0)
#define GPIO13_ResetPullup()        do { WPUFbits.WPUF7 = 0; } while(0)
#define GPIO13_SetPushPull()        do { ODCONFbits.ODCF7 = 0; } while(0)
#define GPIO13_SetOpenDrain()       do { ODCONFbits.ODCF7 = 1; } while(0)
#define GPIO13_SetAnalogMode()      do { ANSELFbits.ANSELF7 = 1; } while(0)
#define GPIO13_SetDigitalMode()     do { ANSELFbits.ANSELF7 = 0; } while(0)

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