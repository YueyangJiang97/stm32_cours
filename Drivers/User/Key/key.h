#ifndef __KEY_H
#define __KEY_H
/*
 *!
 * \file       : key.h
 * \brief      : 
 * \version    : 
 * \date       : 2020/10/28
 * \author     : Yueyang Jiang
 * Last modified by Yueyang Jiang 2020/10/28
 * Copyright (c) 2020 by Yueyang Jiang. All Rights Reserved.
 */
   
/*Includes ----------------------------------------------*/
#include "stm32f4xx_hal.h"    
/* \defgroup KEY_Exported_TypesDefinitions
 * \{
 */
   
/**
 * \}
 */
   
/* \defgroup KEY_Exported_Defines
 * \{
 */
   
/**
 * \}
 */
   
/* \defgroup KEY_Exported_Macros
 * \{
 */
#define KEY_MODE        1

#define KEY_PRESS       0
#define KEY_RELEASE     1

#define KEY_GPIO_Port   GPIOC
#define KEY_GPIO_Pin    GPIO_PIN_13

#define KEY_READ()  HAL_GPIO_ReadPin(KEY_GPIO_Port, KEY_GPIO_Pin)   
/**
 * \}
 */
   
/* \defgroup KEY_Exported_Variables
 * \{
 */
   
/**
 * \}
 */
   
/* \defgroup KEY_Exported_Functions
 * \{
 */
uint8_t KeyReadStatus(void);
/**
 * \}
 */
  
/************************ (C) COPYRIGHT Yueyang Jiang *****END OF FILE****/
#endif
