/********************************************************************/
/* Author  : Islam A.                                               */
/* Date    : 14 APR 2019                                            */
/* Version : V01                                                    */
/********************************************************************/
/* Description                                                      */
/* ------------                                                     */
/* This is the program source code file for the MCU driver			*/
/********************************************************************/

#include "STD_Types.h"

#include "MCU_Interface.h"
#include "MCU_Private.h"

/********************************************************************/
/* Name: MCU_vEnableGlobalInterrupt									*/
/* Description: This API is used to enable global interrupt flag    */
/*  			to allow all the interrupts to be modified and pass */
/*              through												*/
/* Inputs: void														*/
/* Outputs: void													*/
/********************************************************************/
void MCU_vEnableGlobalInterrupt(void)
{
	/* Enable interrupts by setting I-bit          */
	MCU_u8_SREG |= (EXTI_u8_GIE_ENABLE << MCU_u8_SREG_IBIT);
}

/********************************************************************/
/* Name: MCU_vDisableGlobalInterrupt								*/
/* Description: This API is used to disable global interrupt flag   */
/*  			to disallow all the interrupts to be modified and   */
/* 				pass through										*/
/* Inputs: void														*/
/* Outputs: void													*/
/********************************************************************/
void MCU_vDisableGlobalInterrupt(void)
{
	/* Disable interrupts by clearing I-bit        */
	MCU_u8_SREG &= (~(EXTI_u8_GIE_ENABLE<<MCU_u8_SREG_IBIT));
}
