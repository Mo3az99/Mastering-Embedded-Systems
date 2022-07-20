/*
 * main.c
 *
 *  Created on: Jul 3, 2022
 *      Author: Moaaz Mansour
 */
#include "stdio.h"

void main(){
	int n1 = 0 ;
	printf("Enter an integer you want to check : ") ;
	fflush(stdin) ; fflush(stdout) ;
	scanf("%d",&n1) ;
	if (n1 %2 == 0)
		printf("%d is even",n1);
	else
		printf("%d is odd",n1);
}
