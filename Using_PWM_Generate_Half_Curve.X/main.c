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
    PWM1_16BIT_Initialize();

    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global Interrupts
    // Use the following macros to:

    // Enable the Global Interrupts
    //INTERRUPT_GlobalInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();
    int periodCount =100;
//    { 
//0x200,	0x210,	0x220,	0x230,	0x240,	0x24F,	0x25E,	0x26D,	0x27B,	0x289,
//0x297,	0x2A3,	0x2AF,	0x2BB,	0x2C5,	0x2CF,	0x2D8,	0x2E0,	0x2E8,	0x2EE,
//0x2F4,	0x2F8,	0x2FC,	0x2FE,	0x300,	0x300,	0x300,	0x2FE,	0x2FC,	0x2F8,
//0x2F4,	0x2EE,	0x2E8,	0x2E0,	0x2D8,	0x2CF,	0x2C5,	0x2BB,	0x2AF,	0x2A3,
//0x297,	0x289,	0x27B,	0x26D,	0x25E,	0x24F,	0x240,	0x230,	0x220,	0x210,
//0x200,	0x1F0,	0x1E0,	0x1D0,	0x1C0,	0x1B1,	0x1A2,	0x193,	0x185,	0x177,
//0x16A,	0x15D,	0x151,	0x146,	0x13B,	0x131,	0x128,	0x120,	0x118,	0x112,
//0x10D,	0x108,	0x105,	0x102,	0x101,	0x100,	0x101,	0x102,	0x105,	0x108,
//0x10D,	0x112,	0x118,	0x120,	0x128,	0x131,	0x13B,	0x146,	0x151,	0x15D,
//0x16A,	0x177,	0x185,	0x193,	0x1A2,	0x1B1,	0x1C0,	0x1D0,	0x1E0,	0x1F0,
//};
    
    int value[100] =
    { 
//    2048, 2149, 2250, 2350, 2450, 2549, 2646, 2742, 2837, 2929, 3020, 3108, 3193, 3275, 3355,
//    3431, 3504, 3574, 3639, 3701, 3759, 3812, 3861, 3906, 3946, 3982, 4013, 4039, 4060, 4076,
//    4087, 4094, 4095, 4091, 4082, 4069, 4050, 4026, 3998, 3965, 3927, 3884, 3837, 3786, 3730,
//    3671, 3607, 3539, 3468, 3394, 3316, 3235, 3151, 3064, 2975, 2883, 2790, 2695, 2598, 2500,
//    2400, 2300, 2199, 2098, 1997, 1896, 1795, 1695, 1595, 1497, 1400, 1305, 1212, 1120, 1031,
//    944, 860, 779, 701, 627, 556, 488, 424, 365, 309, 258, 211, 168, 130, 97,
//    69, 45, 26, 13, 4, 0, 1, 8, 19, 35, 56, 82, 113, 149, 189,
//    234, 283, 336, 394, 456, 521, 591, 664, 740, 820, 902, 987, 1075, 1166, 1258,
//    1353, 1449, 1546, 1645, 1745, 1845, 1946, 2047
     
        25,24,23,22,21,20,19,18,17,16,
        15,14,13,12,11,10,9,8,7,6,
        5,4,3,2,1,0,1,2,3,4,
        5,6,7,8,9,10,11,12,13,14,
        15,16,17,18,19,20,21,22,23,24,25,
        
//     254,253,252,251,250,249,248,247,246,
//     245,244,243,242,241,240,239,238,237,236,
//     235,234,233,232,231,230,229,228,227,226,
//     225,254,223,222,221,220,219,218,217,216,
//     215,214,213,212,211,210,209,208,207,206,
//     205,204,203,202,201,200,199,198,197,196,
//     195,194,193,192,191,190,189,188,187,186,
//     185,184,183,182,181,180,179,178,177,176,
//     175,174,173,172,171,170,169,168,167,166,
//     165,164,163,162,161,160,159,158,157,156,
//     155,154,153,152,151,150,149,148,147,146,
//     145,144,143,142,141,140,139,138,137,136,
//     135,134,133,132,131,130,129,128,
        
//0x200,	0x210,	0x220,	0x230,	0x240,	0x24F,	0x25E,	0x26D,	0x27B,	0x289,
//0x297,	0x2A3,	0x2AF,	0x2BB,	0x2C5,	0x2CF,	0x2D8,	0x2E0,	0x2E8,	0x2EE,
//0x2F4,	0x2F8,	0x2FC,	0x2FE,	0x300,	0x300,	0x300,	0x2FE,	0x2FC,	0x2F8,
//0x2F4,	0x2EE,	0x2E8,	0x2E0,	0x2D8,	0x2CF,	0x2C5,	0x2BB,	0x2AF,	0x2A3,
//0x297,	0x289,	0x27B,	0x26D,	0x25E,	0x24F,	0x240,	0x230,	0x220,	0x210,
//0x200,	0x1F0,	0x1E0,	0x1D0,	0x1C0,	0x1B1,	0x1A2,	0x193,	0x185,	0x177,
//0x16A,	0x15D,	0x151,	0x146,	0x13B,	0x131,	0x128,	0x120,	0x118,	0x112,
//0x10D,	0x108,	0x105,	0x102,	0x101,	0x100,	0x101,	0x102,	0x105,	0x108,
//0x10D,	0x112,	0x118,	0x120,	0x128,	0x131,	0x13B,	0x146,	0x151,	0x15D,
//0x16A,	0x177,	0x185,	0x193,	0x1A2,	0x1B1,	0x1C0,	0x1D0,	0x1E0,	0x1F0,
};
        
                 
//        0x800, 0x7C0, 0x780, 0x740, 0x701, 0x6C4, 0x687, 0x64C, 0x613, 0x5DB,
//        0x5A6, 0x573, 0x543, 0x516, 0x4EB, 0x4C4, 0x49F, 0x47F, 0x461, 0x448,
//        0x432, 0x420, 0x412, 0x408, 0x402, 0x400, 0x402, 0x408, 0x412, 0x420,
//        0x432, 0x448, 0x461, 0x47F, 0x49F, 0x4C4, 0x4EB, 0x516, 0x543, 0x573,
//        0x5A6, 0x5DB, 0x613, 0x64C, 0x687, 0x6C4, 0x701, 0x740, 0x780, 0x7C0,
        


    while (1)
    {
      //for(int periodCount=0;periodCount<1048;periodCount++)
      {
      for(int i=0;i<100;i++)
      {
      PWM1_16BIT_Enable();
      PWM1_16BIT_WritePeriodRegister(periodCount);
      PWM1_16BIT_SetSlice1Output1DutyCycleRegister(value[i]);
      PWM1_16BIT_LoadBufferRegisters();
      }
      }
      
    }
}
/**
 End of File
*/