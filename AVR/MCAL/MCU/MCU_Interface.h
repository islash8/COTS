/********************************************************************/
/* Author  : Islam A.                                               */
/* Date    : 14 APR 2019                                            */
/* Version : V01                                                    */
/********************************************************************/
/* Description                                                      */
/* ------------                                                     */
/* This is the public header file which contains the public 		*/
/* variables and global driver definitions							*/
/********************************************************************/
#ifndef MCU_INTERFACE_H_
#define MCU_INTERFACE_H_

/********************************************************************/
/* Name: MCU_vEnableGlobalInterrupt									*/
/* Description: This API is used to enable global interrupt flag    */
/*  			to allow all the interrupts to be modified and pass */
/*              through												*/
/* Inputs: void														*/
/* Outputs: void													*/
/********************************************************************/
void MCU_vEnableGlobalInterrupt(void);

/********************************************************************/
/* Name: MCU_vDisableGlobalInterrupt								*/
/* Description: This API is used to disable global interrupt flag   */
/*  			to disallow all the interrupts to be modified and   */
/* 				pass through										*/
/* Inputs: void														*/
/* Outputs: void													*/
/********************************************************************/
void MCU_vDisableGlobalInterrupt(void);

#include "MCU_Config.h"

#endif /* MCU_INTERFACE_H_ */
