/********************************************************************/
/* Author  : Islam A.                                               */
/* Date    : 14 APR 2019                                            */
/* Version : V01                                                    */
/********************************************************************/
/* Description                                                      */
/* ------------                                                     */
/* This is the private header file which contains the private 		*/
/* variables and private driver definitions							*/
/********************************************************************/

#ifndef MCU_PRIVATE_H_
#define MCU_PRIVATE_H_

/* Address definition for SREG register								*/
#define MCU_u8_SREG			((volatile Register *) 0x5F) -> ByteAccess

/* I-Bit definition inside SREG										*/
#define MCU_u8_SREG_IBIT	(u8)7

/* Global interrupt enable and disable definitions          		*/
#define EXTI_u8_GIE_ENABLE  (u8)1
#define EXTI_u8_GIE_DISABLE (u8)0

#include "MCU_Private.h"

#endif /* MCU_PRIVATE_H_ */
