/*
    __HAL_PIC32.c

-----------------------------------------------------------------------------

  This file is part of mikroSDK.

  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

#include "stdint.h"

#ifdef __MIKROC_PRO_FOR_PIC32__
#ifdef __HAL_SPI__

typedef void            ( *T_hal_spiWriteFp )(unsigned long);
typedef unsigned long   ( *T_hal_spiReadFp )(unsigned long);

typedef struct
{
    T_hal_spiWriteFp       spiWrite;
    T_hal_spiReadFp        spiRead;
  
}T_hal_spiObj;

static T_hal_spiWriteFp        fp_spiWrite;                            
static T_hal_spiReadFp         fp_spiRead;                             

static void hal_spiMap(T_HAL_P spiObj)
{
    T_HAL_SPI_OBJ tmp = (T_HAL_SPI_OBJ)spiObj;

    fp_spiWrite = tmp->spiWrite;
    fp_spiRead  = tmp->spiRead;
}

static void hal_spiWrite(uint8_t *pBuf, uint16_t nBytes)
{
    uint8_t *ptr = pBuf;
    while( nBytes-- )
        fp_spiWrite( *( ptr++ ) );
}

static void hal_spiRead(uint8_t *pBuf, uint16_t nBytes)
{
    uint8_t *ptr = pBuf;
    while( nBytes-- )
        *( ptr++ ) = fp_spiRead( 0x00 );
}

static void hal_spiTransfer(uint8_t *pIn, uint8_t *pOut, uint16_t nBytes)
{
    uint8_t *in = pIn;
    uint8_t *out = pOut;
    while( nBytes-- )
        *( out++ ) = fp_spiRead( *( in++ ) );
}

#endif
#ifdef __HAL_I2C__

#define NACK_BIT                 1
#define ACK_BIT                  0
#define END_MODE_STOP            0
#define END_MODE_RESTART         1
#define END_MODE_NO              2

typedef unsigned int    ( *T_hal_i2cStartFp )();
typedef void            ( *T_hal_i2cStopFp )();
typedef unsigned int    ( *T_hal_i2cRestartFp )();
typedef unsigned int    ( *T_hal_i2cWriteFp )(unsigned char);
typedef unsigned char   ( *T_hal_i2cReadFp )(unsigned int);

typedef struct
{
    T_hal_i2cStartFp       i2cStart;
    T_hal_i2cStopFp        i2cStop;
    T_hal_i2cRestartFp     i2cRestart;
    T_hal_i2cWriteFp       i2cWrite;
    T_hal_i2cReadFp        i2cRead;
  
}T_hal_i2cObj;

static T_hal_i2cStartFp        fp_i2cStart;                             
static T_hal_i2cStopFp         fp_i2cStop;                              
static T_hal_i2cRestartFp      fp_i2cRestart;                           
static T_hal_i2cWriteFp        fp_i2cWrite;                             
static T_hal_i2cReadFp         fp_i2cRead;                              

static void hal_i2cMap(T_HAL_P i2cObj)
{
    T_HAL_I2C_OBJ tmp = (T_HAL_I2C_OBJ)i2cObj;

    fp_i2cStart    = tmp->i2cStart;
    fp_i2cStop     = tmp->i2cStop;
    fp_i2cRestart  = tmp->i2cRestart;
    fp_i2cWrite    = tmp->i2cWrite;
    fp_i2cRead     = tmp->i2cRead;
}

static int hal_i2cStart()
{
    int res = 0;
    res |= fp_i2cStart();
    return res;
}

static int hal_i2cWrite(uint8_t slaveAddress, uint8_t *pBuf, uint16_t nBytes, uint8_t endMode)
{
    int res = 0;
    uint8_t *ptr = pBuf;
    res |= fp_i2cWrite(slaveAddress << 1);
    while(nBytes--)
        res |= fp_i2cWrite(*( ptr++ ));
    if(endMode == END_MODE_STOP)
        fp_i2cStop();
    if(endMode == END_MODE_RESTART)
        fp_i2cStart();
    return res;
}

static int hal_i2cRead(uint8_t slaveAddress, uint8_t *pBuf, uint16_t nBytes, uint8_t endMode)
{
    int res = 0;
    uint8_t *ptr = pBuf;
    res |= fp_i2cWrite((slaveAddress << 1) | 1);
    while(--nBytes)
        *ptr++ = fp_i2cRead(ACK_BIT);
    *ptr = fp_i2cRead(NACK_BIT);
    if(endMode == END_MODE_STOP)
        fp_i2cStop();
    if(endMode == END_MODE_RESTART)
        fp_i2cRestart();
    return res;
}

#endif
#ifdef __HAL_UART__

typedef void            ( *T_hal_uartWriteFp )(unsigned int);
typedef unsigned int    ( *T_hal_uartReadFp )();
typedef unsigned int    ( *T_hal_uartReadyFp )();

typedef struct
{
    T_hal_uartWriteFp      uartWrite;
    T_hal_uartReadFp       uartRead;
    T_hal_uartReadyFp      uartReady;
  
}T_hal_uartObj;

static T_hal_uartWriteFp       fp_uartWrite;                           
static T_hal_uartReadFp        fp_uartRead;                            
static T_hal_uartReadyFp       fp_uartReady;                           

static void hal_uartMap(T_HAL_P uartObj)
{
    T_HAL_UART_OBJ tmp = (T_HAL_UART_OBJ)uartObj;

    fp_uartWrite = tmp->uartWrite;
    fp_uartRead  = tmp->uartRead;
    fp_uartReady = tmp->uartReady;
}

static void hal_uartWrite(uint8_t input)
{
    fp_uartWrite(input);
}

static uint8_t hal_uartRead()
{
    return ( uint8_t )fp_uartRead();
}

static uint8_t hal_uartReady()
{
    return ( uint8_t )fp_uartReady();
}

#endif
#endif

/* -------------------------------------------------------------------------- */
/*
  __HAL_PIC32.c

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