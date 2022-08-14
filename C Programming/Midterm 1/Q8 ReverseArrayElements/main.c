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

void reverseArray(int size, int a[], int b[])
{
	int i, j;
	for(j=size-1,i=0;j>=0;j--,i++)
	{
		a[j]=b[i];
	}
}

int main(void) {
	int reversedArray[20], i;
	int inputArray[5] = {1,2,3,4,5};
	int numOfElements = sizeof(inputArray) / sizeof(inputArray[0]);
	reverseArray(numOfElements, reversedArray, inputArray );

	printf("\nResult of array after reverse : ");
	for(i=0;i<numOfElements;i++)
	{
		printf("%d ",reversedArray[i]);
	}
	return EXIT_SUCCESS;
}

