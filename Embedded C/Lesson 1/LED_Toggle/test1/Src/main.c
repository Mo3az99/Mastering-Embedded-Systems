/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Moaaz Mansour
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2022 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 */


#include "Platform_types.h"

//Register Address
#define RCC_base 0x40021000
#define GPIO_base 0x40010800
#define RCC_APB2ENR	  *(volatile uint32 *) (RCC_base  +0x18)
#define GPIOA_CRH     *(volatile uint32 *) (GPIO_base +0x04)
#define GPIOA_ODR     *(volatile uint32 *) (GPIO_base +0x0C)

//Bit Fields
#define RCC_IOPAEN (1<<2)
#define GPIOA13    (1UL<<13)

typedef union{
	vuint32 All_Ports;
	struct{
		vuint32 reserved : 13;
		vuint32 p_13 : 1;
	}Pin;

}R_ODR_t;

volatile R_ODR_t* R_ODR = (volatile R_ODR_t*)(GPIO_base + 0x0C);

int main(void)
{
	RCC_APB2ENR |= RCC_IOPAEN ;
	GPIOA_CRH   &= 0xFF0FFFFF ;
	GPIOA_CRH   |= 0x00200000 ;
	while(1){
	   R_ODR->Pin.p_13 = 1;
	   for(int i=0 ; i< 5000;i++);
	   R_ODR->Pin.p_13 = 0;
		for(int i=0 ; i< 5000;i++);

   }
}
