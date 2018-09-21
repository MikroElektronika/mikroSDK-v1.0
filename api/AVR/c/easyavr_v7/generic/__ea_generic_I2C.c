/*

  This file is part of mikroSDK.

  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

#include "__t_AVR.h"

const uint8_t _MIKROBUS_ERR_I2C         = 4;

const T_i2c_obj _MIKROBUS1_I2C = 
{
    TWI_Start, 
    TWI_Stop, 
    TWI_Write, 
    TWI_Read
};

const T_i2c_obj _MIKROBUS2_I2C = 
{
    TWI_Start, 
    TWI_Stop, 
    TWI_Write, 
    TWI_Read
};

const T_i2c_obj _MIKROBUS3_I2C = 
{
    0, 0, 0, 0
};

static T_mikrobus_ret _i2cInit_1(const uint32_t* cfg)
{
    switch( cfg[0] )
    {
        case 100000 : TWI_Init( 100000 ); break;
        //case 400000 : _Init( 400000 ); break;
        case 0 : { TWI_Start(  ); TWI_Write(0x00); TWI_Read(0x00); TWI_Stop(  ); break; }
        default     : return _MIKROBUS_ERR_I2C;   
    }
    return _MIKROBUS_OK; 
}

static T_mikrobus_ret _i2cInit_2(const uint32_t* cfg)
{
    switch( cfg[0] )
    {
        case 100000 : TWI_Init( 100000 ); break;
        //case 400000 : _Init( 400000 ); break;
        case 0 : { TWI_Start(  ); TWI_Write(0x00); TWI_Read(0x00); TWI_Stop(  ); break; }
        default     : return _MIKROBUS_ERR_I2C;   
    }
    return _MIKROBUS_OK; 
}

static T_mikrobus_ret _i2cInit_3(const uint32_t* cfg)
{
    return _MIKROBUS_ERR_I2C; 
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