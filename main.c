/**
  ******************************************************************************
  * @file    main.c
  * @author  Mohamed bouchagra
  * @brief   Gpio driver
  * @version V1.0.0
  * @date    15-11-2022
  *****************************************************************************/

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx.h"
#include "gpio.h"
/*----------------Private Functions Prototype---------------------------------*/


/* Private define ------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/


int main()
{
GPIO_Clock_Enable(GPIOA);
GPIO_Clock_Enable(GPIOB);
GPIO_Clock_Enable(GPIOC);
GPIO_Clock_Enable(GPIOD);
GPIO_Config(GPIOD,PIN12,OUTPUT,OUTPUT_PUSH_PULL);
  while(1)
  {
  
  }
}

/**************************************END OF FILE**************************************/
