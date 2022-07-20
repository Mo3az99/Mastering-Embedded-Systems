/*
 * main.c
 *
 *  Created on: Jul 3, 2022
 *      Author: Moaaz Mansour
 */
#include "stdio.h"

void main(){
	float a ,b ,c ;
	printf("Enter Three numbers : ") ;
	fflush(stdin) ; fflush(stdout) ;
	scanf("%f%f%f",&a,&b,&c) ;
	if (a >= b && a >= c)
		printf("Largest number = %.2f ",a);
	if (b >= a && b >= c)
		printf("Largest number = %.2f ",b);
	if (c >= b && c >= a)
		printf("Largest number = %.2f ",c);
}
