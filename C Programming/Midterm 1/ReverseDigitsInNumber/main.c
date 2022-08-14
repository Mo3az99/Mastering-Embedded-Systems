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


int main(void) {
	int n, reverse=0, rem;
	printf("Enter a number: ");
	fflush(stdout);
	scanf("%d", &n);
	fflush(stdin);
	while(n!=0)
	{
		rem=n%10;
		reverse=reverse*10+rem;
		n/=10;
	}
	printf("Reversed Number: %d",reverse);
	fflush(stdout);
	return EXIT_SUCCESS;
}

