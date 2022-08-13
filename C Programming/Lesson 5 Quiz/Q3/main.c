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

void reverseArray(int size, int a[], int b[])
{
	int i, j;
	for(j=size-1,i=0;j>=0;j--,i++)
	{
		a[j]=b[i];
	}
}


int main(void) {
	int inputArray[20], reversedArray[20], numOfElements, i, j;
	printf("Please enter the size of the array: ");
	fflush(stdout);
	scanf("%d",&numOfElements);
	fflush(stdin);
	printf("Please enter the elements of the array: \n");
	fflush(stdout);
	for(i=0;i<numOfElements;i++)
	{
		printf("Enter Element number %d : ", i+1);
		fflush(stdout);
		scanf("%d",&inputArray[i]);
		fflush(stdin);
	}

	reverseArray(numOfElements, reversedArray, inputArray );

	printf("\nResult of array after reverse : ");
	for(i=0;i<numOfElements;i++)
	{
		printf("%d ",reversedArray[i]);
	}

	return EXIT_SUCCESS;
}

