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
#define NUM_OF_SAMPLES (100)

 uint16_t sine_wave[NUM_OF_SAMPLES] = {
     
//        0x800 , 0x7C0, 0x780, 0x740, 0x701, 0x6C4, 0x687, 0x64C, 0x613, 0x5DB,
//        0x5A6, 0x573, 0x543, 0x516, 0x4EB, 0x4C4, 0x49F, 0x47F, 0x461, 0x448,
//        0x432, 0x420, 0x412, 0x408, 0x402, 0x400, 0x402, 0x408, 0x412, 0x420,
//        0x432, 0x448, 0x461, 0x47F, 0x49F, 0x4C4, 0x4EB, 0x516, 0x543, 0x573,
//        0x5A6, 0x5DB, 0x613, 0x64C, 0x687, 0x6C4, 0x701, 0x740, 0x780, 0x7C0
      
     
//0x200,	0x210,	0x220,	0x230,	0x240,	0x24F,	0x25E,	0x26D,	0x27B,	0x289,
//0x297,	0x2A3,	0x2AF,	0x2BB,	0x2C5,	0x2CF,	0x2D8,	0x2E0,	0x2E8,	0x2EE,
//0x2F4,	0x2F8,	0x2FC,	0x2FE,	0x300,	0x300,	0x300,	0x2FE,	0x2FC,	0x2F8,
//0x2F4,	0x2EE,	0x2E8,	0x2E0,	0x2D8,	0x2CF,	0x2C5,	0x2BB,	0x2AF,	0x2A3,
//0x297,	0x289,	0x27B,	0x26D,	0x25E,	0x24F,	0x240,	0x230,	0x220,	0x210,
//0x200,	0x1F0,	0x1E0,	0x1D0,	0x1C0,
        
     //254,250,246,242,238,234,230,229,228,227,226,
     //227,228,229,230,234,238,242,246,250,254
     
};

/*
                         Main application
 */
void main(void)
{
    // Initialize the device
    SYSTEM_Initialize();
    DAC1_Initialize();
    
    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global Interrupts
    // Use the following macros to:

    // Enable the Global Interrupts
    //INTERRUPT_GlobalInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    while (1) //DAC_MPLAB
    {
        // Add your application code
        
        for(int i=0;i<255;i++)
        {
            DAC1_SetOutput(i);
        
            if(i==254)
            {
                for(int a=0;a<8;a++)
                {
                    for(int sample_number=0;sample_number<21;sample_number++)
                    {
                        DAC1_SetOutput(sine_wave[sample_number]);
                    }
                }
            }
        }
    }
}
//            if(i == 2047)
//            {
//                for(int a=0;a<8;a++)
//                {
//                for(int i=4000;i>3500;i--)
//                {
//                   DAC1_SetOutput(sine_wave[sample_number]); 
//                }
//                }
//           
//            }
/**
 End of File
*/