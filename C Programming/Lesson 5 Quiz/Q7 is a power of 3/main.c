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

int isPowerOfThree(int n)
{
	if (n <= 0)
		return 0;
	if (n % 3 == 0)
		return isPowerOfThree(n / 3);
	if (n == 1)
		return 1;
	return 0;
}
int main(void) {
	int number;

	printf("Please enter the number: ");
	fflush(stdout);
	scanf("%d",&number);
	fflush(stdin);
	if(isPowerOfThree(number))
		printf("The number is a power of three");
	else
		printf("The number is not a power of three");

	return EXIT_SUCCESS;
}

