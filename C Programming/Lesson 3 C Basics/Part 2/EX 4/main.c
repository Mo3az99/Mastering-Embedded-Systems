/*
 * main.c
 *
 *  Created on: Jul 3, 2022
 *      Author: Moaaz Mansour
 */
#include "stdio.h"

void main(){
	float n1 = 0 ;
	printf("Enter a number : ") ;
	fflush(stdin) ; fflush(stdout) ;
	scanf("%f",&n1) ;
	if(n1 == 0 )
		printf("You entered zero. ") ;
	else if (n1 > 0 )
		printf("%f is positive ",n1) ;
	else
		printf("%f is negative ",n1) ;
}
