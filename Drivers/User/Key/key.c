/*
 *!
 * \file       :key.c
 * \brief      : 
 * \version    : 
 * \date       : 2020/10/28
 * \author     : Yueyang Jiang
 *Last modified by Yueyang Jiang 2020/10/28
 *Copyright (c) 2020 by Yueyang Jiang. All Rights Reserved.
 */
   
/*Includes ----------------------------------------------*/
#include "key.h"   
/* \defgroup KEY_Private_TypesDefinitions
 * \{
 */
   
/**
 * \}
 */
   
/* \defgroup KEY_Private_Defines
 * \{
 */
   
/**
 * \}
 */
   
/* \defgroup KEY_Private_Macros
 * \{
 */
   
/**
 * \}
 */
   
/* \defgroup KEY_Private_Variables
 * \{
 */
   
/**
 * \}
 */
   
/* \defgroup KEY_Private_FunctionPrototypes
 * \{
 */
   
/**
 * \}
 */
   
/* \defgroup KEY_Private_Functions
 * \{
 */
   
/**
 * \}
 */
   
/* \addtogroup KEY_Exported_Functions
 * \{
 */
uint8_t KeyReadStatus()
{
    if( KEY_READ())
    {
        return KEY_RELEASE;
    }
    else
    {
        return KEY_PRESS;
    }    
}   
/**
 * \}
 */
  
/************************ (C) COPYRIGHT Yueyang Jiang *****END OF FILE****/





