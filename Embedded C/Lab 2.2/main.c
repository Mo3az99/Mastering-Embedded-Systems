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

#include<stdio.h>

typedef volatile unsigned int vuint32_t;

#define RCC_Base 0x40021000
#define GPIOA_BASE 0x40010800 

//Define pointers to write in ApB2ENR and CRH (Will be studied later) 

#define ApB2ENR *(vuint32_t*)(RCC_Base + 0x18)
#define CRH *(vuint32_t*)(GPIOA_BASE +0x04)

//Define port A of GPIO A 

typedef union {
	vuint32_t ALL_FIELDS ; 
	struct{
	vuint32_t reserved : 13; //0 -> 12
	vuint32_t pin13 : 1;
	}pin;
}R_ODR_t;

//Define a pointer to write in pin 13 
vuint32_t global_data[] = {1,2,3} ;
vuint32_t global_uninitialized_data[3] ;
vuint32_t const global_const_data[] = {1,2,3} ;
const int global_const_data_2[] = {1,2,3} ;
volatile R_ODR_t* R_ODR = (volatile R_ODR_t*)(GPIOA_BASE + 0x0C);

/* In main function > 1) Set the second bit of ApB2ENR
                      2) set bits 20 >>> 23 to 0010 of CRH
					  3) Toggle pin 13 of GPIO A  infinitly 
					  (WILL be understood later )
*/

void main(void)
{
	int i =0;
	ApB2ENR |= (1<<2);
	CRH &= 0xff0fffff;
	CRH |= 0x00200000;
	while (1)
	{
		R_ODR -> pin.pin13 = 0 ;
		for(i=0;i<5000;i++);
		R_ODR -> pin.pin13 = 1 ;
		for(i=0;i<5000;i++);
	}
}
