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

int calculateFactorial( int n){
	if( n == 1)
		return 1;
	return n*calculateFactorial(n-1);
}

int main(void) {
	int n1 ;
	printf("Enter a Positive Integer: ");
	fflush(stdout);
	scanf("%d",&n1);
	fflush(stdin);

	printf("Factorial of %d = %d ",n1,calculateFactorial(n1));
	fflush(stdout);

	return EXIT_SUCCESS;
}

