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
	int number,bit;

	printf("Please enter the number : ");
	fflush(stdout);
	scanf("%d",&number);
	fflush(stdin);
	printf("Bit position : ");
	fflush(stdout);
	scanf("%d",&bit);
	fflush(stdin);
	printf("Result = %d ",clearBit(number,bit));
	return EXIT_SUCCESS;
}

