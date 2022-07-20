/*
 * main.c
 *
 *  Created on: Jul 3, 2022
 *      Author: Moaaz Mansour
 */
#include "stdio.h"

void main(){
	float n1 = 0 , n2 = 0 , temp ;
	printf("Enter value of a : ") ;
	fflush(stdin) ; fflush(stdout) ;
	scanf("%f",&n1) ;
	printf("Enter value of b : ") ;
	fflush(stdin) ; fflush(stdout) ;
	scanf("%f",&n2) ;
	temp = n1 ;
	n1 = n2 ;
	n2 = temp ;
	printf("After swapping, value of a = %f \n",n1);
	printf("After swapping, value of b = %f \n",n2);
	printf("\n###########################");
}
