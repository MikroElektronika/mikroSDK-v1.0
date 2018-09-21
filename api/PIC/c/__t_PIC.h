/*

  This file is part of mikroSDK.

  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

#ifndef __PIC_TYPES__
#define __PIC_TYPES__

#include <stdint.h>

typedef uint8_t T_gpio_dir;
typedef uint8_t T_mikrobus_soc;
typedef uint8_t T_mikrobus_pin;
typedef uint8_t T_mikrobus_ret;



// --------------------------------------------------- COMPILER SPECIFIC TYPES /
// DO NOT EDIT /

typedef void            (*T_gpio_setFp)                 (uint8_t);
typedef uint8_t         (*T_gpio_getFp)                 ();

#ifdef ENABLE_LOG
typedef uint8_t         T_log_bus;
typedef uint8_t         T_log_format;
typedef void            (*T_log_writeFp)                (char);
#endif

#ifdef ENABLE_SPI
typedef void            (*T_spi_writeFp)                (unsigned short);
typedef unsigned short  (*T_spi_readFp)                 (unsigned short);
#endif

#ifdef ENABLE_I2C
typedef unsigned short  (*T_i2c_startFp)                ();
typedef void            (*T_i2c_stopFp)                 ();
typedef void            (*T_i2c_restartFp)              ();
typedef unsigned short  (*T_i2c_writeFp)                (unsigned short);
typedef unsigned short  (*T_i2c_readFp)                 (unsigned short);
#endif

#ifdef ENABLE_UART
typedef void            (*T_uart_writeFp)               (char);
typedef char            (*T_uart_readFp)                ();
typedef char            (*T_uart_readyFp)               ();
#endif


// ------------------------------------------------------------- HAL STRUCTUES /
// DO NOT EDIT /

typedef struct
{
        T_gpio_setFp        gpioSet[ 12 ];
        T_gpio_getFp        gpioGet[ 12 ];
        
}T_gpio_obj;

#ifdef ENABLE_SPI

typedef struct
{
        T_spi_writeFp       spiWrite;
        T_spi_readFp        spiRead;
        
}T_spi_obj;

#endif
#ifdef ENABLE_I2C

typedef struct
{
        T_i2c_startFp       i2cStart;
        T_i2c_stopFp        i2cStop;
        T_i2c_restartFp     i2cRestart;
        T_i2c_writeFp       i2cWrite;
        T_i2c_readFp        i2cRead;
        
}T_i2c_obj;

#endif
#ifdef ENABLE_UART

typedef struct
{
        T_uart_writeFp      uartWrite;
        T_uart_readFp       uartRead;
        T_uart_readyFp      uartReady;
        
}T_uart_obj;

#endif
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