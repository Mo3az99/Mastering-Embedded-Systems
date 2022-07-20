/*
 * main.c
 *
 *  Created on: Jul 3, 2022
 *      Author: Moaaz Mansour
 */
#include "stdio.h"

void main(){
	int  fact = 1 , n , i;
	printf("Enter an integer : ")  ;
	fflush(stdin) ; fflush(stdout) ;
	scanf("%d",&n ) ;
	if(n < 0)
		printf("Error !! factorial of negative number doesn't exist") ;
	else
	{
		for(i = 1 ;i<=n;i++) fact *= i ;
		printf("Factorial = %d",fact) ;
		fflush(stdin) ; fflush(stdout) ;
	}
}
