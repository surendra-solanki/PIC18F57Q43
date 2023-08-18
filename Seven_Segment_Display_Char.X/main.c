/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.8
        Device            :  PIC18F57Q43
        Driver Version    :  2.00
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

#include "mcc_generated_files/mcc.h"

/*
                         Main application
 */
void main(void)
{
    // Initialize the device
    SYSTEM_Initialize();

    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global Interrupts
    // Use the following macros to:

    // Enable the Global Interrupts
    //INTERRUPT_GlobalInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    while (1)
    {
        // Add your application code
        //pin alloted are RD1=A,RD2=B,RD3=C,RF0=D,RF1=E,RF2=F,RF3=G,RF4=DP
//        LED_A_SetHigh();
//        LED_B_SetHigh();
//        LED_C_SetHigh();
//        LED_D_SetHigh();
//        LED_E_SetHigh();
//        LED_F_SetHigh();
//        LED_G_SetHigh();
//        LED_DP_SetHigh();
//        __delay_ms(2000);
//        
//        LED_A_SetLow();
//        LED_B_SetLow();
//        LED_C_SetLow();
//        LED_D_SetLow();
//        LED_E_SetLow();
//        LED_F_SetLow();
//        LED_G_SetLow();
//        LED_DP_SetLow();
//        __delay_ms(2000);
        
    /*
        //SURENDRA
        LED_A_SetHigh();  //S
        LED_F_SetHigh();
        LED_G_SetHigh();
        LED_C_SetHigh();
        LED_D_SetHigh();
        __delay_ms(2000);
        
        LED_A_SetLow();  //S.
        LED_F_SetLow();
        LED_G_SetLow();
        LED_C_SetLow();
        LED_D_SetLow();
        __delay_ms(2000);
        
        LED_F_SetHigh();  //U
        LED_E_SetHigh();
        LED_D_SetHigh();
        LED_C_SetHigh();
        LED_B_SetHigh();
        __delay_ms(2000);
        
        LED_F_SetLow();  //U.
        LED_E_SetLow();
        LED_D_SetLow();
        LED_C_SetLow();
        LED_B_SetLow();
        __delay_ms(2000);
        
        LED_A_SetHigh();  //R
        LED_F_SetHigh();
        LED_E_SetHigh();
        LED_G_SetHigh();
        LED_B_SetHigh();
        LED_C_SetHigh();
        LED_DP_SetHigh();
        __delay_ms(2000);
        
        LED_A_SetLow();  //R.
        LED_F_SetLow();
        LED_E_SetLow();
        LED_G_SetLow();
        LED_B_SetLow();
        LED_C_SetLow();
        LED_DP_SetLow();
        __delay_ms(2000);
        
        LED_A_SetHigh();   //E
        LED_F_SetHigh();
        LED_E_SetHigh();
        LED_D_SetHigh();
        LED_G_SetHigh();
        __delay_ms(2000);
        
        LED_A_SetLow();   //E.
        LED_F_SetLow();
        LED_E_SetLow();
        LED_D_SetLow();
        LED_G_SetLow();
        __delay_ms(2000);
        
        LED_E_SetHigh();   //N
        LED_G_SetHigh();
        LED_C_SetHigh();
        __delay_ms(2000);
        
        LED_E_SetLow();   //N.
        LED_G_SetLow();
        LED_C_SetLow();
        __delay_ms(2000);
        
        LED_A_SetHigh();  //D
        LED_B_SetHigh();
        LED_C_SetHigh();
        LED_D_SetHigh();
        LED_E_SetHigh();
        LED_F_SetHigh();
        LED_DP_SetHigh();
        __delay_ms(2000);
        
        LED_A_SetLow();  //D.
        LED_B_SetLow();
        LED_C_SetLow();
        LED_D_SetLow();
        LED_E_SetLow();
        LED_F_SetLow();
        LED_DP_SetLow();
        __delay_ms(2000);
        
        LED_A_SetHigh();  //R
        LED_B_SetHigh();
        LED_C_SetHigh();
        LED_G_SetHigh();
        LED_F_SetHigh();
        LED_E_SetHigh();
        LED_DP_SetHigh();
        __delay_ms(2000);
        
        LED_A_SetLow();  //R.
        LED_B_SetLow();
        LED_C_SetLow();
        LED_G_SetLow();
        LED_F_SetLow();
        LED_E_SetLow();
        LED_DP_SetLow();
        __delay_ms(2000);
        
        LED_A_SetHigh();  //A
        LED_B_SetHigh();
        LED_C_SetHigh();
        LED_F_SetHigh();
        LED_E_SetHigh();
        LED_G_SetHigh();
        __delay_ms(2000);
        
        LED_A_SetLow();  //A.
        LED_B_SetLow();
        LED_C_SetLow();
        LED_F_SetLow();
        LED_E_SetLow();
        LED_G_SetLow();
        __delay_ms(2000);
     */
      //Enter 0 to 9 digit
        LED_A_SetHigh();  //0
        LED_B_SetHigh();
        LED_C_SetHigh();
        LED_D_SetHigh();
        LED_E_SetHigh();
        LED_F_SetHigh();
        __delay_ms(2000);
        
        LED_A_SetLow();
        LED_B_SetLow();
        LED_C_SetLow();
        LED_D_SetLow();
        LED_E_SetLow();
        LED_F_SetLow();
        LED_G_SetLow();
        LED_DP_SetLow();
        __delay_ms(2000);
        
        LED_B_SetHigh();  //1
        LED_C_SetHigh();
        __delay_ms(2000);
        
        LED_A_SetLow();
        LED_B_SetLow();
        LED_C_SetLow();
        LED_D_SetLow();
        LED_E_SetLow();
        LED_F_SetLow();
        LED_G_SetLow();
        LED_DP_SetLow();
        __delay_ms(2000);
        
        LED_A_SetHigh();  //2
        LED_B_SetHigh();
        LED_D_SetHigh();
        LED_E_SetHigh();
        LED_G_SetHigh();
        __delay_ms(2000);
        
        LED_A_SetLow();
        LED_B_SetLow();
        LED_C_SetLow();
        LED_D_SetLow();
        LED_E_SetLow();
        LED_F_SetLow();
        LED_G_SetLow();
        LED_DP_SetLow();
        __delay_ms(2000);
        
        LED_A_SetHigh();  //3
        LED_B_SetHigh();
        LED_C_SetHigh();
        LED_D_SetHigh();
        LED_G_SetHigh();
        __delay_ms(2000);
        
        LED_A_SetLow();
        LED_B_SetLow();
        LED_C_SetLow();
        LED_D_SetLow();
        LED_E_SetLow();
        LED_F_SetLow();
        LED_G_SetLow();
        LED_DP_SetLow();
        __delay_ms(2000);
        
        LED_B_SetHigh(); //4
        LED_C_SetHigh();
        LED_F_SetHigh();
        LED_G_SetHigh();
        __delay_ms(2000);
        
        LED_A_SetLow();
        LED_B_SetLow();
        LED_C_SetLow();
        LED_D_SetLow();
        LED_E_SetLow();
        LED_F_SetLow();
        LED_G_SetLow();
        LED_DP_SetLow();
        __delay_ms(2000);
        
        LED_A_SetHigh();  //5
        LED_C_SetHigh();
        LED_D_SetHigh();
        LED_F_SetHigh();
        LED_G_SetHigh();
        __delay_ms(2000);
        
        LED_A_SetLow();
        LED_B_SetLow();
        LED_C_SetLow();
        LED_D_SetLow();
        LED_E_SetLow();
        LED_F_SetLow();
        LED_G_SetLow();
        LED_DP_SetLow();
        __delay_ms(2000);
        
        LED_A_SetHigh();  //6
        LED_C_SetHigh();
        LED_D_SetHigh();
        LED_E_SetHigh();
        LED_F_SetHigh();
        LED_G_SetHigh();
        __delay_ms(2000);
        
        LED_A_SetLow();
        LED_B_SetLow();
        LED_C_SetLow();
        LED_D_SetLow();
        LED_E_SetLow();
        LED_F_SetLow();
        LED_G_SetLow();
        LED_DP_SetLow();
        __delay_ms(2000);
        
        LED_A_SetHigh();  //7
        LED_B_SetHigh();
        LED_C_SetHigh();
        __delay_ms(2000);
        
        LED_A_SetLow();
        LED_B_SetLow();
        LED_C_SetLow();
        LED_D_SetLow();
        LED_E_SetLow();
        LED_F_SetLow();
        LED_G_SetLow();
        LED_DP_SetLow();
        __delay_ms(2000);
        
        LED_A_SetHigh();  //8
        LED_B_SetHigh();
        LED_C_SetHigh();
        LED_D_SetHigh();
        LED_E_SetHigh();
        LED_F_SetHigh();
        LED_G_SetHigh();
        __delay_ms(2000);
        
        LED_A_SetLow();
        LED_B_SetLow();
        LED_C_SetLow();
        LED_D_SetLow();
        LED_E_SetLow();
        LED_F_SetLow();
        LED_G_SetLow();
        LED_DP_SetLow();
        __delay_ms(2000);
        
        LED_A_SetHigh();  //9
        LED_B_SetHigh();
        LED_C_SetHigh();
        LED_D_SetHigh();
        LED_F_SetHigh();
        LED_G_SetHigh();
        __delay_ms(2000);
        
        LED_A_SetLow();
        LED_B_SetLow();
        LED_C_SetLow();
        LED_D_SetLow();
        LED_E_SetLow();
        LED_F_SetLow();
        LED_G_SetLow();
        LED_DP_SetLow();
        __delay_ms(2000);
      
           
    }
}
/**
 End of File
*/