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

static uint8_t _getAN_1  () 			{ return RA2_bit;    }
static uint8_t _getRST_1 () 			{ return RB2_bit;    }
static uint8_t _getCS_1  () 			{ return RB3_bit;    }
static uint8_t _getSCK_1 () 			{ return RB4_bit;    }
static uint8_t _getMISO_1() 			{ return RB5_bit;    }
static uint8_t _getMOSI_1() 			{ return RC7_bit;    }
static uint8_t _getPWM_1 () 			{ return RC6_bit;    }
static uint8_t _getINT_1 () 			{ return RD4_bit;    }
static uint8_t _getRX_1  () 			{ return RD5_bit;    }
static uint8_t _getTX_1  () 			{ return RD6_bit;    }
static uint8_t _getSCL_1 () 			{ return RD0_bit;    }
static uint8_t _getSDA_1 () 			{ return RD1_bit;    }
static void _setAN_1  (uint8_t value) 	{ LATA2_bit = value; }
static void _setRST_1 (uint8_t value) 	{ LATB2_bit = value; }
static void _setCS_1  (uint8_t value) 	{ LATB3_bit = value; }
static void _setSCK_1 (uint8_t value) 	{ LATB4_bit = value; }
static void _setMISO_1(uint8_t value) 	{ LATB5_bit = value; }
static void _setMOSI_1(uint8_t value) 	{ LATC7_bit = value; }
static void _setPWM_1 (uint8_t value) 	{ LATC6_bit = value; }
static void _setINT_1 (uint8_t value) 	{ LATD4_bit = value; }
static void _setRX_1  (uint8_t value) 	{ LATD5_bit = value; }
static void _setTX_1  (uint8_t value) 	{ LATD6_bit = value; }
static void _setSCL_1 (uint8_t value) 	{ LATD0_bit = value; }
static void _setSDA_1 (uint8_t value) 	{ LATD1_bit = value; }

static T_mikrobus_ret _gpioInit_1(T_mikrobus_pin pin, T_gpio_dir dir)
{
    switch( pin ) 
    {
        case _MIKROBUS_AN_PIN    : TRISA2_bit = dir; break;
        case _MIKROBUS_RST_PIN   : TRISB2_bit = dir; break;
        case _MIKROBUS_CS_PIN    : TRISB3_bit = dir; break;
        case _MIKROBUS_SCK_PIN   : TRISB4_bit = dir; break;
        case _MIKROBUS_MISO_PIN  : TRISB5_bit = dir; break;
        case _MIKROBUS_MOSI_PIN  : TRISC7_bit = dir; break;
        case _MIKROBUS_PWM_PIN   : TRISC6_bit = dir; break;
        case _MIKROBUS_INT_PIN   : TRISD4_bit = dir; break;
        case _MIKROBUS_RX_PIN    : TRISD5_bit = dir; break;
        case _MIKROBUS_TX_PIN    : TRISD6_bit = dir; break;
        case _MIKROBUS_SCL_PIN   : TRISD0_bit = dir; break;
        case _MIKROBUS_SDA_PIN   : TRISD1_bit = dir; break;
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