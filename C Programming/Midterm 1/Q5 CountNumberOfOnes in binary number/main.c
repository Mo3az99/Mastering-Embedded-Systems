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

int countNumberOfOnes (int number){
	unsigned int count = 0;
	while (number) {
		count += number & 1;
		number >>= 1;
	}
	return count;}
int main(void) {
	int number;
	printf("Enter a number: ");
	fflush(stdout);
	scanf("%d", &number);
	fflush(stdin);
	printf("Number of 1 bits in %d is %d",number, countNumberOfOnes(number));
	fflush(stdout);
	return EXIT_SUCCESS;
}

