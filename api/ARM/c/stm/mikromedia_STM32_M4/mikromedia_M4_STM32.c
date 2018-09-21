/*

  This file is part of mikroSDK.

  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

// -------------------------------------------------------------------------- //
//
//                              DO NOT EDIT CONTENT
//
//                            COMMON BOARD DEF FORMAT
//
// -------------------------------------------------------------------------- //

#include "mikromedia_M4_STM32.h"

#include "__mm_STM32_M4_GPIO.c"

#ifdef ENABLE_SPI
#include "__mm_STM32_M4_SPI.c"
#endif
#ifdef ENABLE_I2C
#include "__mm_STM32_M4_I2C.c"
#endif
#ifdef ENABLE_UART
#include "__mm_STM32_M4_UART.c"
#endif
#ifdef ENABLE_LOG
#include "__mm_STM32_M4_LOG.c"
#endif

// ----------------------------------------------------------------- CONSTANTS /

const uint8_t _MIKROBUS_OK              = 0;
const uint8_t _MIKROBUS_ERR_BUS         = 1;

// ----------------------------------------------------------- SYSTEM SPECIFIC /

#ifdef __MIKROBUS1

const uint8_t _MIKROBUS1                = 0;

const T_gpio_obj _MIKROBUS1_GPIO =
{
    {
        _setAN_1, _setRST_1, _setCS_1, _setSCK_1, _setMISO_1, _setMOSI_1,
        _setPWM_1, _setINT_1, _setRX_1, _setTX_1, _setSCL_1, _setSDA_1 
    },
    {
        _getAN_1, _getRST_1, _getCS_1, _getSCK_1, _getMISO_1, _getMOSI_1, 
        _getPWM_1, _getINT_1, _getRX_1, _getTX_1, _getSCL_1, _getSDA_1 
    }
};
#endif
#ifdef __MIKROBUS2

const uint8_t _MIKROBUS2                = 1;

const T_gpio_obj _MIKROBUS2_GPIO =
{
    {
        _setAN_2, _setRST_2, _setCS_2, _setSCK_2, _setMISO_2, _setMOSI_2,
        _setPWM_2, _setINT_2, _setRX_2, _setTX_2, _setSCL_2, _setSDA_2 
    },
    {
        _getAN_2, _getRST_2, _getCS_2, _getSCK_2, _getMISO_2, _getMOSI_2, 
        _getPWM_2, _getINT_2, _getRX_2, _getTX_2, _getSCL_2, _getSDA_2 
    }
};
#endif
#ifdef __MIKROBUS3

const uint8_t _MIKROBUS3                = 2;

const T_gpio_obj _MIKROBUS3_GPIO =
{
    {
        _setAN_3, _setRST_3, _setCS_3, _setSCK_3, _setMISO_3, _setMOSI_3,
        _setPWM_3, _setINT_3, _setRX_3, _setTX_3, _setSCL_3, _setSDA_3 
    },
    {
        _getAN_3, _getRST_3, _getCS_3, _getSCK_3, _getMISO_3, _getMOSI_3, 
        _getPWM_3, _getINT_3, _getRX_3, _getTX_3, _getSCL_3, _getSDA_3 
    }
};
#endif
#ifdef __MIKROBUS4

const uint8_t _MIKROBUS4                = 3;

const T_gpio_obj _MIKROBUS4_GPIO =
{
    {
        _setAN_4, _setRST_4, _setCS_4, _setSCK_4, _setMISO_4, _setMOSI_4,
        _setPWM_4, _setINT_4, _setRX_4, _setTX_4, _setSCL_4, _setSDA_4 
    },
    {
        _getAN_4, _getRST_4, _getCS_4, _getSCK_4, _getMISO_4, _getMOSI_4, 
        _getPWM_4, _getINT_4, _getRX_4, _getTX_4, _getSCL_4, _getSDA_4 
    }
};
#endif
#ifdef __MIKROBUS5

const uint8_t _MIKROBUS5                = 4;

const T_gpio_obj _MIKROBUS5_GPIO =
{
    {
        _setAN_5, _setRST_5, _setCS_5, _setSCK_5, _setMISO_5, _setMOSI_5,
        _setPWM_5, _setINT_5, _setRX_5, _setTX_5, _setSCL_5, _setSDA_5 
    },
    {
        _getAN_5, _getRST_5, _getCS_5, _getSCK_5, _getMISO_5, _getMOSI_5, 
        _getPWM_5, _getINT_5, _getRX_5, _getTX_5, _getSCL_5, _getSDA_5 
    }
};
#endif
#ifdef __MIKROBUS6

const uint8_t _MIKROBUS6                = 5;

const T_gpio_obj _MIKROBUS6_GPIO =
{
    {
        _setAN_6, _setRST_6, _setCS_6, _setSCK_6, _setMISO_6, _setMOSI_6,
        _setPWM_6, _setINT_6, _setRX_6, _setTX_6, _setSCL_6, _setSDA_6 
    },
    {
        _getAN_6, _getRST_6, _getCS_6, _getSCK_6, _getMISO_6, _getMOSI_6, 
        _getPWM_6, _getINT_6, _getRX_6, _getTX_6, _getSCL_6, _getSDA_6 
    }
};
#endif


#ifdef ENABLE_LOG

const uint8_t _LOG_BYTE                 = 0;
const uint8_t _LOG_TEXT                 = 1;
const uint8_t _LOG_LINE                 = 2;

#ifdef __LOG_USBUART
const uint8_t _LOG_USBUART              = 0x10;
#endif
#ifdef __LOG_USBUART_A
const uint8_t _LOG_USBUART_A            = 0x20;
#endif
#ifdef __LOG_USBUART_B
const uint8_t _LOG_USBUART_B            = 0x30;
#endif

#endif

// ------------------------------------------------------ FUNCTION DEFINITIONS /
// DO NOT EDIT //

T_mikrobus_ret mikrobus_gpioInit(T_mikrobus_soc bus, T_mikrobus_pin pin, T_gpio_dir direction)
{
    switch( bus )
    {
#ifdef __MIKROBUS1
        case _MIKROBUS1 : return _gpioInit_1(pin, direction);
#endif
#ifdef __MIKROBUS2
        case _MIKROBUS2 : return _gpioInit_2(pin, direction);
#endif
#ifdef __MIKROBUS3
        case _MIKROBUS3 : return _gpioInit_3(pin, direction);
#endif
#ifdef __MIKROBUS4
        case _MIKROBUS4 : return _gpioInit_4(pin, direction);
#endif
#ifdef __MIKROBUS5
        case _MIKROBUS5 : return _gpioInit_5(pin, direction);
#endif
#ifdef __MIKROBUS6
        case _MIKROBUS6 : return _gpioInit_6(pin, direction);
#endif
        default : return _MIKROBUS_ERR_BUS;
    }
    return _MIKROBUS_OK;
}

#ifdef ENABLE_SPI

T_mikrobus_ret mikrobus_spiInit(T_mikrobus_soc bus, const uint32_t *cfg)
{
    switch( bus )
    {      
#ifdef __MIKROBUS1         
        case _MIKROBUS1 : return _spiInit_1( cfg ); 
#endif
#ifdef __MIKROBUS2
        case _MIKROBUS2 : return _spiInit_2( cfg ); 
#endif
#ifdef __MIKROBUS3             
        case _MIKROBUS3 : return _spiInit_3( cfg );
#endif
#ifdef __MIKROBUS4              
        case _MIKROBUS4 : return _spiInit_4( cfg ); 
#endif
#ifdef __MIKROBUS5              
        case _MIKROBUS5 : return _spiInit_5( cfg ); 
#endif
#ifdef __MIKROBUS6             
        case _MIKROBUS6 : return _spiInit_6( cfg ); 
#endif
        default : return _MIKROBUS_ERR_BUS;
    }
    return _MIKROBUS_OK;
}

#endif
#ifdef ENABLE_I2C

T_mikrobus_ret mikrobus_i2cInit(T_mikrobus_soc bus, const uint32_t *cfg)
{
    switch( bus )
    {            
#ifdef __MIKROBUS1  
        case _MIKROBUS1 : return _i2cInit_1( cfg ); 
#endif
#ifdef __MIKROBUS2
        case _MIKROBUS2 : return _i2cInit_2( cfg ); 
#endif
#ifdef __MIKROBUS3              
        case _MIKROBUS3 : return _i2cInit_3( cfg ); 
#endif
#ifdef __MIKROBUS4               
        case _MIKROBUS4 : return _i2cInit_4( cfg ); 
#endif
#ifdef __MIKROBUS5             
        case _MIKROBUS5 : return _i2cInit_5( cfg ); 
#endif
#ifdef __MIKROBUS6               
        case _MIKROBUS6 : return _i2cInit_6( cfg ); 
#endif
        default : return _MIKROBUS_ERR_BUS;
    }

    return _MIKROBUS_OK;
}

#endif
#ifdef ENABLE_UART

T_mikrobus_ret mikrobus_uartInit(T_mikrobus_soc bus, const uint32_t *cfg)
{
    switch( bus )
    {            
#ifdef __MIKROBUS1
        case _MIKROBUS1 : return _uartInit_1( cfg );
#endif
#ifdef __MIKROBUS2
        case _MIKROBUS2 : return _uartInit_2( cfg );
#endif
#ifdef __MIKROBUS3               
        case _MIKROBUS3 : return _uartInit_3( cfg ); 
#endif
#ifdef __MIKROBUS4               
        case _MIKROBUS4 : return _uartInit_4( cfg ); 
#endif
#ifdef __MIKROBUS5               
        case _MIKROBUS5 : return _uartInit_5( cfg ); 
#endif
#ifdef __MIKROBUS6               
        case _MIKROBUS6 : return _uartInit_6( cfg ); 
#endif
        default : return _MIKROBUS_ERR_BUS;
    }
    return _MIKROBUS_OK;
}

#endif
#ifdef ENABLE_LOG

T_mikrobus_ret mikrobus_logInit(T_log_bus port, const uint32_t baud)
{
    switch( port )
    {
#ifdef __MIKROBUS1
        case _MIKROBUS1 : return _log_init1( baud );
#endif
#ifdef __MIKROBUS2
        case _MIKROBUS2: return _log_init2( baud );
#endif
#ifdef __MIKROBUS3
        case _MIKROBUS3: return _log_init3( baud );
#endif
#ifdef __MIKROBUS4
        case _MIKROBUS4: return _log_init4( baud );
#endif
#ifdef __MIKROBUS5
        case _MIKROBUS5: return _log_init5( baud );
#endif
#ifdef __MIKROBUS6
        case _MIKROBUS6: return _log_init6( baud );
#endif			
#ifdef __LOG_USBUART
        case _LOG_USBUART : return _log_initUart( baud );
#endif
#ifdef __LOG_USBUART_A
        case _LOG_USBUART_A : return _log_initUartA( baud );
#endif
#ifdef __LOG_USBUART_B
        case _LOG_USBUART_B : return _log_initUartB( baud );
#endif
        default : return _MIKROBUS_ERR_BUS;
    }
    return _MIKROBUS_OK;
}

T_mikrobus_ret mikrobus_logWrite(uint8_t* data_, T_log_format format)
{
    uint8_t *ptr = data_;
    uint8_t row = 13;
    uint8_t line = 10;
    switch( format )
    {
        case _LOG_BYTE : 
            _log_write( ptr ); 
            break;
        case _LOG_TEXT : 
            while( *ptr ) 
            { 
                _log_write( ptr ); 
                ptr++; 
            } 
            break;
        case _LOG_LINE : 
            while( *ptr ) 
            { 
                _log_write( ptr ); 
                ptr++; 
            } 
            _log_write( &row ); 
            _log_write( &line ); 
            break;
        default :
            return _MIKROBUS_ERR_LOG;
    }
    return 0;
}
#endif


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
