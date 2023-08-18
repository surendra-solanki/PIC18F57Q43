/**
  Generated Pin Manager File

  Company:
    Microchip Technology Inc.

  File Name:
    pin_manager.c

  Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.8
        Device            :  PIC18F57Q43
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.36 and above
        MPLAB             :  MPLAB X 6.00

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.
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

#include "pin_manager.h"





void PIN_MANAGER_Initialize(void)
{
    /**
    LATx registers
    */
    LATE = 0x00;
    LATD = 0x00;
    LATA = 0x00;
    LATF = 0x00;
    LATB = 0x10;
    LATC = 0x00;

    /**
    TRISx registers
    */
    TRISE = 0x01;
    TRISF = 0x32;
    TRISA = 0xFB;
    TRISB = 0xF9;
    TRISC = 0x2F;
    TRISD = 0xAC;

    /**
    ANSELx registers
    */
    ANSELD = 0x13;
    ANSELC = 0x83;
    ANSELB = 0xC9;
    ANSELE = 0x00;
    ANSELF = 0x00;
    ANSELA = 0xEE;

    /**
    WPUx registers
    */
    WPUD = 0x00;
    WPUF = 0x00;
    WPUE = 0x00;
    WPUB = 0x10;
    WPUA = 0x00;
    WPUC = 0x00;

    /**
    RxyI2C registers
    */
    RB1I2C = 0x00;
    RB2I2C = 0x00;
    RC3I2C = 0x00;
    RC4I2C = 0x00;

    /**
    ODx registers
    */
    ODCONE = 0x00;
    ODCONF = 0x00;
    ODCONA = 0x00;
    ODCONB = 0x06;
    ODCONC = 0x10;
    ODCOND = 0x00;

    /**
    SLRCONx registers
    */
    SLRCONA = 0xFF;
    SLRCONB = 0xFF;
    SLRCONC = 0xFF;
    SLRCOND = 0xFF;
    SLRCONE = 0x07;
    SLRCONF = 0xFF;

    /**
    INLVLx registers
    */
    INLVLA = 0xFF;
    INLVLB = 0xFF;
    INLVLC = 0xFF;
    INLVLD = 0xFF;
    INLVLE = 0x0F;
    INLVLF = 0xFF;





   
    
	
    U2RXPPS = 0x1F;   //RD7->UART2:RX2;    
    INT0PPS = 0x00;   //RA0->EXT_INT:INT0;    
    RC4PPS = 0x32;   //RC4->SPI1:SDO1;    
    INT2PPS = 0x2D;   //RF5->EXT_INT:INT2;    
    INT1PPS = 0x1D;   //RD5->EXT_INT:INT1;    
    RF0PPS = 0x20;   //RF0->UART1:TX1;    
    U1RXPPS = 0x29;   //RF1->UART1:RX1;    
    RD6PPS = 0x23;   //RD6->UART2:TX2;    
    T0CKIPPS = 0x04;   //RA4->TMR0:T0CKI;    
    I2C1SCLPPS = 0x09;   //RB1->I2C1:SCL1;    
    SPI1SCKPPS = 0x16;   //RC6->SPI1:SCK1;    
    PWMIN0PPS = 0x20;   //RE0->PWM3_16BIT:PWMIN0;    
    I2C1SDAPPS = 0x0A;   //RB2->I2C1:SDA1;    
    RB1PPS = 0x37;   //RB1->I2C1:SCL1;    
    RB2PPS = 0x38;   //RB2->I2C1:SDA1;    
    RD0PPS = 0x1A;   //RD0->PWM2_16BIT:PWM21;    
    RD1PPS = 0x1C;   //RD1->PWM3_16BIT:PWM31;    
    RC6PPS = 0x31;   //RC6->SPI1:SCK1;    
    RC7PPS = 0x18;   //RC7->PWM1_16BIT:PWM11;    
    SPI1SDIPPS = 0x15;   //RC5->SPI1:SDI1;    
}
  
void PIN_MANAGER_IOC(void)
{   
}

/**
 End of File
*/