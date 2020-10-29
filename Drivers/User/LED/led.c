
/*
 *!
 * \file       :led.c
 * \brief      : 
 * \version    : 
 * \date       : 2020/10/28
 * \author     : Yueyang Jiang
 *Last modified by Yueyang Jiang 2020/10/28
 *Copyright (c) 2020 by Yueyang Jiang. All Rights Reserved.
 */
   
/*Includes ----------------------------------------------*/
#include "led.h"
/* \defgroup LED_Private_TypesDefinitions
 * \{
 */
   
/**
 * \}
 */
   
/* \defgroup LED_Private_Defines
 * \{
 */
   
/**
 * \}
 */
   
/* \defgroup LED_Private_Macros
 * \{
 */
   
/**
 * \}
 */
   
/* \defgroup LED_Private_Variables
 * \{
 */
   
/**
 * \}
 */
   
/* \defgroup LED_Private_FunctionPrototypes
 * \{
 */
   
/**
 * \}
 */
   
/* \defgroup LED_Private_Functions
 * \{
 */
   
/**
 * \}
 */
   
/* \addtogroup LED_Exported_Functions
 * \{
 */
   

/*
 * \func        : LED_Control
 * \brief       : control LED status
 * \param       : uint8_t status LED_ON/LED_OFF
 * \retval      : no return
 * \note        : 
 */
void LED_Control(uint8_t status)
{
    if(status == LED_ON)
    {
        LED_2_ON();
    }
    else if(status == LED_OFF)
    {
        LED_2_OFF();
    }
}
/**
 * \}
 */
  
/************************ (C) COPYRIGHT Yueyang Jiang *****END OF FILE****/



