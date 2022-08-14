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
#include <math.h>

int maxOnes(int number){
	char count = 0 ;
	while (number != 0){
		number = (number & (number<<1));
		count++;
	}
	return count;
}
int main(void) {
	int number ;
	printf("Enter Number : ");
	fflush(stdout);
	scanf("%d",&number);
	fflush(stdin);
	printf("Max ones are %d ",maxOnes(number));
	fflush(stdout);

	return EXIT_SUCCESS;
}

