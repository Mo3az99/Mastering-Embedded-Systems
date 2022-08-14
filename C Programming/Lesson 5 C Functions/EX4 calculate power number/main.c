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

int calculatePower(int base, int power){
	if(power == 1)
		return base;
	return base * calculatePower(base,power-1);
}

int main(void) {
	int base, power ;
	printf("Enter base number: ");
	fflush(stdout);
	scanf("%d",&base);
	printf("Enter power number(Positive Integer): ");
	fflush(stdout);
	scanf("%d",&power);
	printf("%d ^ %d = %d",base,power,calculatePower(base,power));


	return EXIT_SUCCESS;
}

