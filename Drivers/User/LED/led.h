#ifdef __LED_H

#define __LED_H
/*
 *!
 * \file       : led.h
 * \brief      : 
 * \version    : 
 * \date       : 2020/10/28
 * \author     : Yueyang Jiang
 * Last modified by Yueyang Jiang 2020/10/28
 * Copyright (c) 2020 by Yueyang Jiang. All Rights Reserved.
 */
   
/*Includes ----------------------------------------------*/
#include "stm32f4xx_hal.h" 
/* \defgroup LED_Exported_TypesDefinitions
 * \{
 */
   
/**
 * \}
 */
   
/* \defgroup LED_Exported_Defines
 * \{
 */
   
/**
 * \}
 */
   
/* \defgroup LED_Exported_Macros
 * \{
 */
#define LED_ON 		        0
#define LED_OFF		        1

#define LED_2_ON()          HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_SET)

#define LED_2_OFF()         HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_RESET)
/**
 * \}
 */
   
/* \defgroup LED_Exported_Variables
 * \{
 */
   
/**
 * \}
 */
   
/* \defgroup LED_Exported_Functions
 * \{
 */
void LED_Control(uint8_t status);
/**
 * \}
 */
  
/************************ (C) COPYRIGHT Yueyang Jiang *****END OF FILE****/
#endif /* __LED_H */

