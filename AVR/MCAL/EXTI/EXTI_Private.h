/********************************************************************/
/* Author  : Islam A.                                               */
/* Date    : 14 APR ٌِ؛ 2019                                           */
/* Version : V01                                                    */
/********************************************************************/
/* Description                                                      */
/* ------------                                                     */
/* This is the private file of external interrupt driver for        */
/* ATmega32. This header file should include private values,        */
/* private addresses, and registers									*/
/********************************************************************/

#ifndef EXTI_PRIVATE_H_
#define EXTI_PRIVATE_H_


/* External Interrupt indices										*/
#define EXTI_u8_INT0				(u8)0
#define EXTI_u8_INT1				(u8)1
#define EXTI_u8_INT2				(u8)2

/* Define addresses of interrupt registers							*/
/* SREG (Status Register ) Address definition                   	*/
#define MCU_u8_SREG					((Register *) 0x5F) -> ByteAccess

/* GICR (General interrupt Control Register) Address definition 	*/
#define EXTI_u8_GICR				((Register *) 0x5B) -> ByteAccess

/* MCUCR (MCU Control Register) Address definition              	*/
#define EXTI_u8_MCUCR				((Register *) 0x55) -> ByteAccess

/* MCUCSR (MCU Control & Status Register) Address definition    	*/
#define EXTI_u8_MCUCSR				((Register *) 0x54) -> ByteAccess

/* Define I-Bit in SREG												*/
#define MCU_u8_SREG_I_BIT			(u8)7

/* GICR (General interrupt control register) bits definitions		*/
#define EXTI_u8_GICR_INT2_BIT		(u8)5
#define EXTI_u8_GICR_INT0_BIT		(u8)6
#define EXTI_u8_GICR_INT1_BIT		(u8)7


/* MCUCR (MCU Control Register) Bits definitions                	*/
/* For External Interrupt 0 INT0                                	*/
#define EXTI_u8_MCUCR_ISC00_BIT (u8)0
#define EXTI_u8_MCUCR_ISC01_BIT (u8)1

/* For External Interrupt 1 INT1                               		*/
#define EXTI_u8_MCUCR_ISC10_BIT (u8)2
#define EXTI_u8_MCUCR_ISC11_BIT (u8)3

/* MCUCSR (MCU Control and status Register) Bits definitions    	*/
/* For External Interrupt 2 INT2                                	*/
#define EXTI_u8_MCUCSR_ISC2_BIT (u8)6

/* Include private configuration files 								*/
#include "EXTI_Config.h"

#endif /* EXTI_PRIVATE_H_ */
