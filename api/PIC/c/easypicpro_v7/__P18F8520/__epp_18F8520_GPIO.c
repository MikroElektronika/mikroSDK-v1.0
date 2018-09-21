/*

  This file is part of mikroSDK.

  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

#include "__t_PIC.h"

const uint8_t _MIKROBUS_ERR_PIN         = 1;

const uint8_t _GPIO_OUTPUT              = 0;
const uint8_t _GPIO_INPUT               = 1;
                
const uint8_t _MIKROBUS_AN_PIN          = 0;
const uint8_t _MIKROBUS_RST_PIN         = 1;
const uint8_t _MIKROBUS_CS_PIN          = 2;
const uint8_t _MIKROBUS_SCK_PIN         = 3;
const uint8_t _MIKROBUS_MISO_PIN        = 4;
const uint8_t _MIKROBUS_MOSI_PIN        = 5;
const uint8_t _MIKROBUS_PWM_PIN         = 6;
const uint8_t _MIKROBUS_INT_PIN         = 7;
const uint8_t _MIKROBUS_RX_PIN          = 8;
const uint8_t _MIKROBUS_TX_PIN          = 9;
const uint8_t _MIKROBUS_SCL_PIN         = 10;
const uint8_t _MIKROBUS_SDA_PIN         = 11;

static uint8_t _getAN_1  () 			{ return RA0_bit;    }
static uint8_t _getRST_1 () 			{ return RC0_bit;    }
static uint8_t _getCS_1  () 			{ return RE0_bit;    }
static uint8_t _getSCK_1 () 			{ return RC3_bit;    }
static uint8_t _getMISO_1() 			{ return RC4_bit;    }
static uint8_t _getMOSI_1() 			{ return RC5_bit;    }
static uint8_t _getPWM_1 () 			{ return RC1_bit;    }
static uint8_t _getINT_1 () 			{ return RB0_bit;    }
static uint8_t _getRX_1  () 			{ return RC7_bit;    }
static uint8_t _getTX_1  () 			{ return RC6_bit;    }
static uint8_t _getSCL_1 () 			{ return RC3_bit;    }
static uint8_t _getSDA_1 () 			{ return RC4_bit;    }
static void _setAN_1  (uint8_t value) 	{ LATA0_bit = value; }
static void _setRST_1 (uint8_t value) 	{ LATC0_bit = value; }
static void _setCS_1  (uint8_t value) 	{ LATE0_bit = value; }
static void _setSCK_1 (uint8_t value) 	{ LATC3_bit = value; }
static void _setMISO_1(uint8_t value) 	{ LATC4_bit = value; }
static void _setMOSI_1(uint8_t value) 	{ LATC5_bit = value; }
static void _setPWM_1 (uint8_t value) 	{ LATC1_bit = value; }
static void _setINT_1 (uint8_t value) 	{ LATB0_bit = value; }
static void _setRX_1  (uint8_t value) 	{ LATC7_bit = value; }
static void _setTX_1  (uint8_t value) 	{ LATC6_bit = value; }
static void _setSCL_1 (uint8_t value) 	{ LATC3_bit = value; }
static void _setSDA_1 (uint8_t value) 	{ LATC4_bit = value; }

static uint8_t _getAN_2  ()             { return RA1_bit;    }
static uint8_t _getRST_2 ()             { return RA4_bit;    }
static uint8_t _getCS_2  ()             { return RE1_bit;    }
static uint8_t _getSCK_2 ()             { return RC3_bit;    }
static uint8_t _getMISO_2()             { return RC4_bit;    }
static uint8_t _getMOSI_2()             { return RC5_bit;    }
static uint8_t _getPWM_2 ()             { return RC2_bit;    }
static uint8_t _getINT_2 ()             { return RB1_bit;    }
static uint8_t _getRX_2  ()             { return RC7_bit;    }
static uint8_t _getTX_2  ()             { return RC6_bit;    }
static uint8_t _getSCL_2 ()             { return RC3_bit;    }
static uint8_t _getSDA_2 ()             { return RC4_bit;    }
static void _setAN_2  (uint8_t value)   { LATA1_bit = value; }
static void _setRST_2 (uint8_t value)   { LATA4_bit = value; }
static void _setCS_2  (uint8_t value)   { LATE1_bit = value; }
static void _setSCK_2 (uint8_t value)   { LATC3_bit = value; }
static void _setMISO_2(uint8_t value)   { LATC4_bit = value; }
static void _setMOSI_2(uint8_t value)   { LATC5_bit = value; }
static void _setPWM_2 (uint8_t value)   { LATC2_bit = value; }
static void _setINT_2 (uint8_t value)   { LATB1_bit = value; }
static void _setRX_2  (uint8_t value)   { LATC7_bit = value; }
static void _setTX_2  (uint8_t value)   { LATC6_bit = value; }
static void _setSCL_2 (uint8_t value)   { LATC3_bit = value; }
static void _setSDA_2 (uint8_t value)   { LATC4_bit = value; }

static uint8_t _getAN_3  ()             { return RA2_bit;    }
static uint8_t _getRST_3 ()             { return RE3_bit;    }
static uint8_t _getCS_3  ()             { return RE2_bit;    }
static uint8_t _getSCK_3 ()             { return RC3_bit;    }
static uint8_t _getMISO_3()             { return RC4_bit;    }
static uint8_t _getMOSI_3()             { return RC5_bit;    }
static uint8_t _getPWM_3 ()             { return RG0_bit;    }
static uint8_t _getINT_3 ()             { return RB2_bit;    }
static uint8_t _getRX_3  ()             { return RG2_bit;    }
static uint8_t _getTX_3  ()             { return RG1_bit;    }
static uint8_t _getSCL_3 ()             { return RC3_bit;    }
static uint8_t _getSDA_3 ()             { return RC4_bit;    }
static void _setAN_3  (uint8_t value)   { LATA2_bit = value; }
static void _setRST_3 (uint8_t value)   { LATE3_bit = value; }
static void _setCS_3  (uint8_t value)   { LATE2_bit = value; }
static void _setSCK_3 (uint8_t value)   { LATC3_bit = value; }
static void _setMISO_3(uint8_t value)   { LATC4_bit = value; }
static void _setMOSI_3(uint8_t value)   { LATC5_bit = value; }
static void _setPWM_3 (uint8_t value)   { LATG0_bit = value; }
static void _setINT_3 (uint8_t value)   { LATB2_bit = value; }
static void _setRX_3  (uint8_t value)   { LATG2_bit = value; }
static void _setTX_3  (uint8_t value)   { LATG1_bit = value; }
static void _setSCL_3 (uint8_t value)   { LATC3_bit = value; }
static void _setSDA_3 (uint8_t value)   { LATC4_bit = value; }
    
static T_mikrobus_ret _gpioInit_1(T_mikrobus_pin pin, T_gpio_dir dir)
{
    ADCON1 = 0x0F;
    switch( pin ) 
    {
        case _MIKROBUS_AN_PIN    : TRISA0_bit = dir; break;
        case _MIKROBUS_RST_PIN   : TRISC0_bit = dir; break;
        case _MIKROBUS_CS_PIN    : TRISE0_bit = dir; break;
        case _MIKROBUS_SCK_PIN   : TRISC3_bit = dir; break;
        case _MIKROBUS_MISO_PIN  : TRISC4_bit = dir; break;
        case _MIKROBUS_MOSI_PIN  : TRISC5_bit = dir; break;
        case _MIKROBUS_PWM_PIN   : TRISC1_bit = dir; break;
        case _MIKROBUS_INT_PIN   : TRISB0_bit = dir; break;
        case _MIKROBUS_RX_PIN    : TRISC7_bit = dir; break;
        case _MIKROBUS_TX_PIN    : TRISC6_bit = dir; break;
        case _MIKROBUS_SCL_PIN   : TRISC3_bit = dir; break;
        case _MIKROBUS_SDA_PIN   : TRISC4_bit = dir; break;
        default                  : return _MIKROBUS_ERR_PIN;
    }
    return _MIKROBUS_OK;
}

static T_mikrobus_ret _gpioInit_2(T_mikrobus_pin pin, T_gpio_dir dir)
{
    ADCON1 = 0x0F;
    switch( pin ) 
    {
        case _MIKROBUS_AN_PIN    : TRISA1_bit = dir; break;
        case _MIKROBUS_RST_PIN   : TRISA4_bit = dir; break;
        case _MIKROBUS_CS_PIN    : TRISE1_bit = dir; break;
        case _MIKROBUS_SCK_PIN   : TRISC3_bit = dir; break;
        case _MIKROBUS_MISO_PIN  : TRISC4_bit = dir; break;
        case _MIKROBUS_MOSI_PIN  : TRISC5_bit = dir; break;
        case _MIKROBUS_PWM_PIN   : TRISC2_bit = dir; break;
        case _MIKROBUS_INT_PIN   : TRISB1_bit = dir; break;
        case _MIKROBUS_RX_PIN    : TRISC7_bit = dir; break;
        case _MIKROBUS_TX_PIN    : TRISC6_bit = dir; break;
        case _MIKROBUS_SCL_PIN   : TRISC3_bit = dir; break;
        case _MIKROBUS_SDA_PIN   : TRISC4_bit = dir; break;
        default                  : return _MIKROBUS_ERR_PIN;
    }
    return _MIKROBUS_OK;
}

static T_mikrobus_ret _gpioInit_3(T_mikrobus_pin pin, T_gpio_dir dir)
{
    ADCON1 = 0x0F;
    switch( pin ) 
    {
        case _MIKROBUS_AN_PIN    : TRISA2_bit = dir; break;
        case _MIKROBUS_RST_PIN   : TRISE3_bit = dir; break;
        case _MIKROBUS_CS_PIN    : TRISE2_bit = dir; break;
        case _MIKROBUS_SCK_PIN   : TRISC3_bit = dir; break;
        case _MIKROBUS_MISO_PIN  : TRISC4_bit = dir; break;
        case _MIKROBUS_MOSI_PIN  : TRISC5_bit = dir; break;
        case _MIKROBUS_PWM_PIN   : TRISG0_bit = dir; break;
        case _MIKROBUS_INT_PIN   : TRISB2_bit = dir; break;
        case _MIKROBUS_RX_PIN    : TRISG2_bit = dir; break;
        case _MIKROBUS_TX_PIN    : TRISG1_bit = dir; break;
        case _MIKROBUS_SCL_PIN   : TRISC3_bit = dir; break;
        case _MIKROBUS_SDA_PIN   : TRISC4_bit = dir; break;
        default                  : return _MIKROBUS_ERR_PIN;
    }
    return _MIKROBUS_OK;
}

/* -------------------------------------------------------------------------- */
/*

  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.

3. All advertising materials mentioning features or use of this software
   must display the following acknowledgement:
   This product includes software developed by the MikroElektonika.

4. Neither the name of the MikroElektonika nor the
   names of its contributors may be used to endorse or promote products
   derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY MIKROELEKTRONIKA ''AS IS'' AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL MIKROELEKTRONIKA BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

----------------------------------------------------------------------------- */