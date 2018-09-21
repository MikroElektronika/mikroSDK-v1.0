/*

  This file is part of mikroSDK.

  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

#include "__t_STM32.h"

#ifndef __STM32_BOARDEF__
#define __STM32_BOARDEF__

// -------------------------------------------------------- BOARD CONFIGURATION /

#define __MIKROBUS1
//#define __MIKROBUS2
//#define __MIKROBUS3
//#define __MIKROBUS4
//#define __MIKROBUS5
//#define __MIKROBUS6

//#define __LOG_USBUART
//#define __LOG_USBUART_A
//#define __LOG_USBUART_B

// -------------------------------------------------------------------------- //
//
//                        DO NOT EDIT THE REST OF CONTENT
//
//                            COMMON BOARD DEF FORMAT
//
// -------------------------------------------------------------------------- //

// ----------------------------------------------------------------- CONSTANTS /

extern const uint8_t _GPIO_OUTPUT;
extern const uint8_t _GPIO_INPUT;

extern const uint8_t _MIKROBUS_AN_PIN;
extern const uint8_t _MIKROBUS_RST_PIN;
extern const uint8_t _MIKROBUS_CS_PIN;
extern const uint8_t _MIKROBUS_SCK_PIN;
extern const uint8_t _MIKROBUS_MISO_PIN;
extern const uint8_t _MIKROBUS_MOSI_PIN;
extern const uint8_t _MIKROBUS_PWM_PIN;
extern const uint8_t _MIKROBUS_INT_PIN;
extern const uint8_t _MIKROBUS_RX_PIN;
extern const uint8_t _MIKROBUS_TX_PIN;
extern const uint8_t _MIKROBUS_SCL_PIN;
extern const uint8_t _MIKROBUS_SDA_PIN;

extern const uint8_t _MIKROBUS_OK;
extern const uint8_t _MIKROBUS_ERR_BUS;
extern const uint8_t _MIKROBUS_ERR_PIN;

#ifdef ENABLE_SPI
extern const uint8_t _MIKROBUS_ERR_SPI;
#endif
#ifdef ENABLE_I2C
extern const uint8_t _MIKROBUS_ERR_I2C;
#endif
#ifdef ENABLE_UART
extern const uint8_t _MIKROBUS_ERR_UART;
#endif
#ifdef ENABLE_LOG
extern const uint8_t _LOG_BYTE;
extern const uint8_t _LOG_TEXT;
extern const uint8_t _LOG_LINE;
#endif

// ------------------------------------------------- SYSTEM SPECIFIC CONSTANTS /

#ifdef __MIKROBUS1

extern const uint8_t _MIKROBUS1;

extern const T_gpio_obj _MIKROBUS1_GPIO;

#ifdef ENABLE_SPI
extern const T_spi_obj _MIKROBUS1_SPI;
#endif
#ifdef ENABLE_I2C
extern const T_i2c_obj _MIKROBUS1_I2C;
#endif
#ifdef ENABLE_UART
extern const T_uart_obj _MIKROBUS1_UART;
#endif
#endif
#ifdef __MIKROBUS2

extern const uint8_t _MIKROBUS2;

extern const T_gpio_obj _MIKROBUS2_GPIO;

#ifdef ENABLE_SPI
extern const T_spi_obj _MIKROBUS2_SPI;
#endif
#ifdef ENABLE_I2C
extern const T_i2c_obj _MIKROBUS2_I2C;
#endif
#ifdef ENABLE_UART
extern const T_uart_obj _MIKROBUS2_UART;
#endif
#endif
#ifdef __MIKROBUS3

extern const uint8_t _MIKROBUS3;

extern const T_gpio_obj _MIKROBUS3_GPIO;

#ifdef ENABLE_SPI
extern const T_spi_obj _MIKROBUS3_SPI;
#endif
#ifdef ENABLE_I2C
extern const T_i2c_obj _MIKROBUS3_I2C;
#endif
#ifdef ENABLE_UART
extern const T_uart_obj _MIKROBUS3_UART;
#endif
#endif
#ifdef __MIKROBUS4

extern const uint8_t _MIKROBUS4;

extern const T_gpio_obj _MIKROBUS4_GPIO;

#ifdef ENABLE_SPI
extern const T_spi_obj _MIKROBUS4_SPI;
#endif
#ifdef ENABLE_I2C
extern const T_i2c_obj _MIKROBUS4_I2C;
#endif
#ifdef ENABLE_UART
extern const T_uart_obj _MIKROBUS4_UART;
#endif
#endif
#ifdef __MIKROBUS5

extern const uint8_t _MIKROBUS5;

extern const T_gpio_obj _MIKROBUS5_GPIO;

#ifdef ENABLE_SPI
extern const T_spi_obj _MIKROBUS5_SPI;
#endif
#ifdef ENABLE_I2C
extern const T_i2c_obj _MIKROBUS5_I2C;
#endif
#ifdef ENABLE_UART
extern const T_uart_obj _MIKROBUS5_UART;
#endif
#endif
#ifdef __MIKROBUS6

extern const uint8_t _MIKROBUS6;

extern const T_gpio_obj _MIKROBUS6_GPIO;

#ifdef ENABLE_SPI
extern const T_spi_obj _MIKROBUS6_SPI;
#endif
#ifdef ENABLE_I2C
extern const T_i2c_obj _MIKROBUS6_I2C;
#endif
#ifdef ENABLE_UART
extern const T_uart_obj _MIKROBUS6_UART;
#endif
#endif

#ifdef ENABLE_LOG
#ifdef __LOG_USBUART
extern const uint8_t _LOG_USBUART;
#endif
#ifdef __LOG_USBUART_A
extern const uint8_t _LOG_USBUART_A;
#endif
#ifdef __LOG_USBUART_B
extern const uint8_t _LOG_USBUART_B;
#endif
#endif
#ifdef __cplusplus
extern "C"{
#endif

T_mikrobus_ret mikrobus_gpioInit(T_mikrobus_soc bus, T_mikrobus_pin pin, T_gpio_dir direction);

#ifdef ENABLE_SPI

T_mikrobus_ret mikrobus_spiInit(T_mikrobus_soc bus, const uint32_t *cfg);

#endif
#ifdef ENABLE_I2C

T_mikrobus_ret mikrobus_i2cInit(T_mikrobus_soc bus, const uint32_t *cfg);

#endif
#ifdef ENABLE_UART

T_mikrobus_ret mikrobus_uartInit(T_mikrobus_soc bus, const uint32_t *cfg);

#endif
#ifdef ENABLE_LOG

T_mikrobus_ret mikrobus_logInit(T_log_bus port, const uint32_t baud);
T_mikrobus_ret mikrobus_logWrite(uint8_t* data_, T_log_format format);

#endif
#ifdef __cplusplus
} // extern "C"
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