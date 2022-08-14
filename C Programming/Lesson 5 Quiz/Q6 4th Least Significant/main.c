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

int clearBit(int num, int bitnum)
{
	return num &= ~(1<<bitnum);
}

int main(void) {
	int number;
	printf("Please enter the number:");
	fflush(stdout);
	scanf("%d",&number);
	fflush(stdin);
	if(number&=(1<<3))
		printf("The 4th least significant bit is 1");
	else
		printf("The 4th least significant bit is 0");

	return EXIT_SUCCESS;
}

