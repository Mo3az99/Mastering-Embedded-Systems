/*
 * main.c
 *
 *  Created on: Jul 3, 2022
 *      Author: Moaaz Mansour
 */
#include "stdio.h"

void main(){
	float n1 = 0 , n2 = 0 ;
	printf("Enter two numbers: ") ;
	scanf("%f%f",&n1,&n2) ;
	/*Long float because if the maximum number of 2 floats summed together or any similar case that will exceed the limit */
	printf("Product : %lf",n1*n2);
	printf("\n###########################");
}
