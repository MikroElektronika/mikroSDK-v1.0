/*

  This file is part of mikroSDK.

  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

#include "__t_KINETIS.h"

const uint8_t _MIKROBUS_ERR_UART        = 5;

const T_uart_obj _MIKROBUS1_UART = 
{
    UART2_Write, 
    UART2_Read, 
    UART2_Data_Ready
};

const T_uart_obj _MIKROBUS2_UART = 
{
    UART3_Write, 
    UART3_Read, 
    UART3_Data_Ready
};

const T_uart_obj _MIKROBUS3_UART = 
{
    UART3_Write, 
    UART3_Read, 
    UART3_Data_Ready
};

static T_mikrobus_ret _uartInit_1(const uint32_t* cfg)
{
    UART2_Init_Advanced( cfg[0], cfg[1], cfg[2], cfg[3], &_GPIO_Module_UART2_PD3_2 );
    return _MIKROBUS_OK; 
}

static T_mikrobus_ret _uartInit_2(const uint32_t* cfg)
{
    UART3_Init_Advanced( cfg[0], cfg[1], cfg[2], cfg[3], &_GPIO_Module_UART3_PC16_17 );
    return _MIKROBUS_OK; 
}

static T_mikrobus_ret _uartInit_3(const uint32_t* cfg)
{
    UART3_Init_Advanced( cfg[0], cfg[1], cfg[2], cfg[3], &_GPIO_Module_UART3_PC16_17 );
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