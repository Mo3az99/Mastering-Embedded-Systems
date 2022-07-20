/*
 * main.c
 *
 *  Created on: Jul 3, 2022
 *      Author: Moaaz Mansour
 */
#include "stdio.h"

void main(){
	char c = 0 ;
	printf("Enter a character: ") ;
	fflush(stdin) ; fflush(stdout) ;
	scanf("%c",&c) ;
	printf("ASCII value of %c = %d", c , c);
	printf("\n###########################");
}
