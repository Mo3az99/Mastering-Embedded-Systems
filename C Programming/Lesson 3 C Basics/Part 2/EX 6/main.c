/*
 * main.c
 *
 *  Created on: Jul 3, 2022
 *      Author: Moaaz Mansour
 */
#include "stdio.h"

void main(){
	int  sum = 0 , n , i ;
	printf("Enter an integer : ")  ;
	fflush(stdin) ; fflush(stdout) ;
	scanf("%d",&n) ;
	for(i = 1 ; i<=n ; i++)
		sum += i ;
	printf("sum = %d",sum) ;
	fflush(stdin) ; fflush(stdout) ;
}
