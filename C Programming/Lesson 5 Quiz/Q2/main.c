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
int main(void) {
	int A[10],B[10],C[10],i;

	printf("Enter the first array : ");
	for(i=0; i<10; i++)
	{
		fflush(stdin); fflush(stdout);
		scanf("%d",&A[i]);
	}
	printf("Enter the second array : ");
	for(i=0; i<5; i++)
	{
		fflush(stdin); fflush(stdout);
		scanf("%d",&B[i]);
	}

	printf("before Swapping:\n");
	printf("First Array: ");
	for(i=0; i<10; i++)
	{
		printf("%d\t",A[i]);fflush(stdout);
	}
	printf("\nSecond Array: ");
	for(i=0; i<5; i++)
	{
		printf("%d\t",B[i]);fflush(stdout);
	}

	/* logic of swapping */
	for(i=0; i<10; i++)
	{
		C[i] = A[i];
		A[i] = B[i];
		B[i] = C[i];
	}

	printf("\nAfter Swapping:\n");
	printf("First Array: ");
	for(i=0; i<5; i++)
	{
		printf("%d\t",A[i]);
	}
	printf("\nSecond Array: ");
	for(i=0; i<10; i++)
	{
		printf("%d\t",B[i]);
	}

	return EXIT_SUCCESS;
}

