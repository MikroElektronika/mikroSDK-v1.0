/*

  This file is part of mikroSDK.

  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

#include "__t_AVR.h"

const uint8_t _MIKROBUS_ERR_PIN         = 1;

const uint8_t _GPIO_OUTPUT              = 1;
const uint8_t _GPIO_INPUT               = 0;
                
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

static uint8_t _getAN_1  () 			{ return PINA7_bit;   }
static uint8_t _getRST_1 () 			{ return PINA6_bit;   }
static uint8_t _getCS_1  () 			{ return PINA5_bit;   }
static uint8_t _getSCK_1 () 			{ return PINB7_bit;   }
static uint8_t _getMISO_1() 			{ return PINB6_bit;   }
static uint8_t _getMOSI_1() 			{ return PINB5_bit;   }
static uint8_t _getPWM_1 () 			{ return PIND4_bit;   }
static uint8_t _getINT_1 () 			{ return PIND2_bit;   }
static uint8_t _getRX_1  () 			{ return PIND0_bit;   }
static uint8_t _getTX_1  () 			{ return PIND1_bit;   }
static uint8_t _getSCL_1 () 			{ return PINC0_bit;   }
static uint8_t _getSDA_1 () 			{ return PINC1_bit;   }
static void _setAN_1  (uint8_t value) 	{ PORTA7_bit = value; }
static void _setRST_1 (uint8_t value) 	{ PORTA6_bit = value; }
static void _setCS_1  (uint8_t value) 	{ PORTA5_bit = value; }
static void _setSCK_1 (uint8_t value) 	{ PORTB7_bit = value; }
static void _setMISO_1(uint8_t value) 	{ PORTB6_bit = value; }
static void _setMOSI_1(uint8_t value) 	{ PORTB5_bit = value; }
static void _setPWM_1 (uint8_t value) 	{ PORTD4_bit = value; }
static void _setINT_1 (uint8_t value) 	{ PORTD2_bit = value; }
static void _setRX_1  (uint8_t value) 	{ PORTD0_bit = value; }
static void _setTX_1  (uint8_t value) 	{ PORTD1_bit = value; }
static void _setSCL_1 (uint8_t value) 	{ PORTC0_bit = value; }
static void _setSDA_1 (uint8_t value) 	{ PORTC1_bit = value; }

static uint8_t _getAN_2  ()             { return PINA0_bit;   }
static uint8_t _getRST_2 ()             { return PINA1_bit;   }
static uint8_t _getCS_2  ()             { return PINA3_bit;   }
static uint8_t _getSCK_2 ()             { return PINB7_bit;   }
static uint8_t _getMISO_2()             { return PINB6_bit;   }
static uint8_t _getMOSI_2()             { return PINB5_bit;   }
static uint8_t _getPWM_2 ()             { return PIND5_bit;   }
static uint8_t _getINT_2 ()             { return PIND3_bit;   }
static uint8_t _getRX_2  ()             { return PIND0_bit;   }
static uint8_t _getTX_2  ()             { return PIND1_bit;   }
static uint8_t _getSCL_2 ()             { return PINC0_bit;   }
static uint8_t _getSDA_2 ()             { return PINC1_bit;   }
static void _setAN_2  (uint8_t value)   { PORTA0_bit = value; }
static void _setRST_2 (uint8_t value)   { PORTA1_bit = value; }
static void _setCS_2  (uint8_t value)   { PORTA3_bit = value; }
static void _setSCK_2 (uint8_t value)   { PORTB7_bit = value; }
static void _setMISO_2(uint8_t value)   { PORTB6_bit = value; }
static void _setMOSI_2(uint8_t value)   { PORTB5_bit = value; }
static void _setPWM_2 (uint8_t value)   { PORTD5_bit = value; }
static void _setINT_2 (uint8_t value)   { PORTD3_bit = value; }
static void _setRX_2  (uint8_t value)   { PORTD0_bit = value; }
static void _setTX_2  (uint8_t value)   { PORTD1_bit = value; }
static void _setSCL_2 (uint8_t value)   { PORTC0_bit = value; }
static void _setSDA_2 (uint8_t value)   { PORTC1_bit = value; }

static uint8_t _getAN_3  ()             { return PINA4_bit;   }
static uint8_t _getRST_3 ()             { return PINB0_bit;   }
static uint8_t _getCS_3  ()             { return PINB4_bit;   }
static uint8_t _getSCK_3 ()             { return PINB7_bit;   }
static uint8_t _getMISO_3()             { return PINB6_bit;   }
static uint8_t _getMOSI_3()             { return PINB5_bit;   }
static uint8_t _getPWM_3 ()             { return PINB3_bit;   }
static uint8_t _getINT_3 ()             { return PINB2_bit;   }
static uint8_t _getRX_3  ()             { return PIND2_bit;   }
static uint8_t _getTX_3  ()             { return PIND3_bit;   }
static uint8_t _getSCL_3 ()             { return PINC0_bit;   }
static uint8_t _getSDA_3 ()             { return PINC1_bit;   }
static void _setAN_3  (uint8_t value)   { PORTA4_bit = value; }
static void _setRST_3 (uint8_t value)   { PORTB0_bit = value; }
static void _setCS_3  (uint8_t value)   { PORTB4_bit = value; }
static void _setSCK_3 (uint8_t value)   { PORTB7_bit = value; }
static void _setMISO_3(uint8_t value)   { PORTB6_bit = value; }
static void _setMOSI_3(uint8_t value)   { PORTB5_bit = value; }
static void _setPWM_3 (uint8_t value)   { PORTB3_bit = value; }
static void _setINT_3 (uint8_t value)   { PORTB2_bit = value; }
static void _setRX_3  (uint8_t value)   { PORTD2_bit = value; }
static void _setTX_3  (uint8_t value)   { PORTD3_bit = value; }
static void _setSCL_3 (uint8_t value)   { PORTC0_bit = value; }
static void _setSDA_3 (uint8_t value)   { PORTC1_bit = value; }
    
static T_mikrobus_ret _gpioInit_1(T_mikrobus_pin pin, T_gpio_dir dir)
{
    switch( pin ) 
    {
        case _MIKROBUS_AN_PIN    : DDA7_bit = dir; break;
        case _MIKROBUS_RST_PIN   : DDA6_bit = dir; break;
        case _MIKROBUS_CS_PIN    : DDA5_bit = dir; break;
        case _MIKROBUS_SCK_PIN   : DDB7_bit = dir; break;
        case _MIKROBUS_MISO_PIN  : DDB6_bit = dir; break;
        case _MIKROBUS_MOSI_PIN  : DDB5_bit = dir; break;
        case _MIKROBUS_PWM_PIN   : DDD4_bit = dir; break;
        case _MIKROBUS_INT_PIN   : DDD2_bit = dir; break;
        case _MIKROBUS_RX_PIN    : DDD0_bit = dir; break;
        case _MIKROBUS_TX_PIN    : DDD1_bit = dir; break;
        case _MIKROBUS_SCL_PIN   : DDC0_bit = dir; break;
        case _MIKROBUS_SDA_PIN   : DDC1_bit = dir; break;
        default                  : return _MIKROBUS_ERR_PIN;
    }
    return _MIKROBUS_OK;
}

static T_mikrobus_ret _gpioInit_2(T_mikrobus_pin pin, T_gpio_dir dir)
{
    switch( pin ) 
    {
        case _MIKROBUS_AN_PIN    : DDA0_bit = dir; break;
        case _MIKROBUS_RST_PIN   : DDA1_bit = dir; break;
        case _MIKROBUS_CS_PIN    : DDA3_bit = dir; break;
        case _MIKROBUS_SCK_PIN   : DDB7_bit = dir; break;
        case _MIKROBUS_MISO_PIN  : DDB6_bit = dir; break;
        case _MIKROBUS_MOSI_PIN  : DDB5_bit = dir; break;
        case _MIKROBUS_PWM_PIN   : DDD5_bit = dir; break;
        case _MIKROBUS_INT_PIN   : DDD3_bit = dir; break;
        case _MIKROBUS_RX_PIN    : DDD0_bit = dir; break;
        case _MIKROBUS_TX_PIN    : DDD1_bit = dir; break;
        case _MIKROBUS_SCL_PIN   : DDC0_bit = dir; break;
        case _MIKROBUS_SDA_PIN   : DDC1_bit = dir; break;
        default                  : return _MIKROBUS_ERR_PIN;
    }
    return _MIKROBUS_OK;
}

static T_mikrobus_ret _gpioInit_3(T_mikrobus_pin pin, T_gpio_dir dir)
{
    switch( pin ) 
    {
        case _MIKROBUS_AN_PIN    : DDA4_bit = dir; break;
        case _MIKROBUS_RST_PIN   : DDB0_bit = dir; break;
        case _MIKROBUS_CS_PIN    : DDB4_bit = dir; break;
        case _MIKROBUS_SCK_PIN   : DDB7_bit = dir; break;
        case _MIKROBUS_MISO_PIN  : DDB6_bit = dir; break;
        case _MIKROBUS_MOSI_PIN  : DDB5_bit = dir; break;
        case _MIKROBUS_PWM_PIN   : DDB3_bit = dir; break;
        case _MIKROBUS_INT_PIN   : DDB2_bit = dir; break;
        case _MIKROBUS_RX_PIN    : DDD2_bit = dir; break;
        case _MIKROBUS_TX_PIN    : DDD3_bit = dir; break;
        case _MIKROBUS_SCL_PIN   : DDC0_bit = dir; break;
        case _MIKROBUS_SDA_PIN   : DDC1_bit = dir; break;
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