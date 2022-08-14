/*
 ============================================================================
 Name        : main.c
 Author      : Moaaz Mansour
 Version     :
 Copyright   :
 Description : Assignment in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int calculateNumberOfDigits(int number){
	int digit;
	if(number != 0){
		digit = number %10;
		return digit + calculateNumberOfDigits(number/10);
	}
	else{
		return 0 ;
	}
}
int main(void) {
	int number,result;
	printf("Please Enter The number : ");
	fflush(stdout);
	scanf("%d",&number);
	fflush(stdin);
	result = calculateNumberOfDigits(number);
	printf("The number of Digits is %d" , result);
	return EXIT_SUCCESS;
}

