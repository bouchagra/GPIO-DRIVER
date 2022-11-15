#include "gpio.h"
#include <stdint.h>
void GPIO_Clock_Enable(uint32_t *GPIOx)
{
    assert(GPIOx==GPIOA ||GPIOx==GPIOB ||GPIOx==GPIOC ||GPIOx==GPIOD);
    uint16_t *RCCAHB1 =(uint16_t *)(0x40023830);
    
    if ( GPIOx == GPIOA)
    { 
      *RCCAHB1 |=(1<<0);
    }
    else if ( GPIOx == GPIOB)
    { 
      *RCCAHB1 |=(1<<1);
    } 
    else if ( GPIOx == GPIOC)
    { 
      *RCCAHB1 |=(1<<2);
    }
    else if ( GPIOx == GPIOD)
    { 
      *RCCAHB1 |=(1<<3);
    }
    
    }

void GPIO_Config(uint32_t *GPIOx,uint8_t Pin,uint8_t Mode,uint8_t Type)
{
    assert(GPIOx==GPIOA ||GPIOx==GPIOB ||GPIOx==GPIOC ||GPIOx==GPIOD);
    uint32_t *MODER =(uint32_t *)(GPIOx);
    uint16_t *OTYPER =(uint16_t *)(0x40020c04);
    uint16_t x=0xFFFF;

if (Pin==PIN0)
{
*MODER |=(Mode<<0);
if (Type == OUTPUT_PUSH_PULL)
{
*OTYPER &= ~(1 << 0);
}
else 
{
*OTYPER |= (1 << 0);
}
}
else if (Pin==PIN1)
{
*MODER |=(Mode<<2);
if (Type == OUTPUT_PUSH_PULL)
{
*OTYPER &= ~(1 << 1);
}
else 
{
*OTYPER |= (1 << 1);
}
}
else if (Pin==PIN2)
{
*MODER |=(Mode<<4);
if (Type == OUTPUT_PUSH_PULL)
{
*OTYPER &= ~(1 << 2);
}
else 
{
*OTYPER |= (1 << 2);
}
}
else if (Pin==PIN3)
{
*MODER |=(Mode<<6);
if (Type == OUTPUT_PUSH_PULL)
{
*OTYPER &= ~(1 << 3);
}
else 
{
*OTYPER |= (1 << 3);
}
}
else if (Pin==PIN4)
{
*MODER |=(Mode<<8);
if (Type == OUTPUT_PUSH_PULL)
{
*OTYPER &= ~(1 << 4);
}
else 
{
*OTYPER |= (1 << 4);
}
}
else if (Pin==PIN5)
{
*MODER |=(Mode<<10);
if (Type == OUTPUT_PUSH_PULL)
{
*OTYPER &= ~(1 << 5);
}
else 
{
*OTYPER |= (1 << 5);
}
}
else if (Pin==PIN6)
{
*MODER |=(Mode<<12);
if (Type == OUTPUT_PUSH_PULL)
{
*OTYPER &= ~(1 << 6);
}
else 
{
*OTYPER |= (1 << 6);
}
}
else if (Pin==PIN7)
{
*MODER |=(Mode<<14);
if (Type == OUTPUT_PUSH_PULL)
{
*OTYPER &= ~(1 << 7);
}
else 
{
*OTYPER |= (1 << 7);
}
}
else if (Pin==PIN8)
{
*MODER |=(Mode<<14);
if (Type == OUTPUT_PUSH_PULL)
{
*OTYPER &= ~(1 << 8);
}
else 
{
*OTYPER |= (1 << 8);
}
}
else if (Pin==PIN9)
{
*MODER |=(Mode<<18);
if (Type == OUTPUT_PUSH_PULL)
{
*OTYPER &= ~(1 << 9);
}
else 
{
*OTYPER |= (1 << 9);
}
}
else if (Pin==PIN10)
{
*MODER |=(Mode<<20);
if (Type == OUTPUT_PUSH_PULL)
{
*OTYPER &= ~(1 << 10);
}
else 
{
*OTYPER |= (1 << 10);
}
}
else if (Pin==PIN11)
{
*MODER |=(Mode<<22);
if (Type == OUTPUT_PUSH_PULL)
{
*OTYPER &= ~(1 << 11);
}
else 
{
*OTYPER |= (1 << 11);
}
}
else if (Pin==PIN12)
{
*MODER |=(Mode<<24);
if (Type == OUTPUT_PUSH_PULL)
{
*OTYPER &= ~(1 << 12);
}
else 
{
*OTYPER |= (1 << 12);
}
}
else if (Pin==PIN13)
{
*MODER |=(Mode<<26);
if (Type == OUTPUT_PUSH_PULL)
{
*OTYPER &= ~(1 << 13);
}
else 
{
*OTYPER |= (1 << 13);
}
}
else if (Pin==PIN14)
{
*MODER |=(Mode<<28);
if (Type == OUTPUT_PUSH_PULL)
{
*OTYPER &= ~(1 << 14);
}
else 
{
*OTYPER |= (1 << 14);
}
}
else if (Pin==PIN15)
{
*MODER |=(Mode<<30);
if (Type == OUTPUT_PUSH_PULL)
{
*OTYPER &= ~(1 << 15);
}
else 
{
*OTYPER |= (1 << 15);
}
}
}
