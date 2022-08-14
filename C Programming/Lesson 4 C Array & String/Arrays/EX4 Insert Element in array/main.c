/*
 * main.c
 *
 *  Created on: Jul 3, 2022
 *      Author: Moaaz Mansour
 */
#include "stdio.h"

void main(){
	int i , n , Location , Element;
		printf("Enter no of elements: ");
		fflush(stdout);
		scanf("%d",&n);
		int array[n];
		int inserted_array[n+1];
		for(i=0 ; i<n ; i++)
		{
			printf("Enter element no.%d: ",i+1);
			fflush(stdout);
			scanf("%d",&array[i]);
		}
		for (i=0 ; i<n ; i++)
			printf("%d  ",array[i]);
		printf("\nEnter the element to be inserted: ");
		fflush(stdout);
		scanf("%d",&Element);
		printf("Enter the Location: ");
		fflush(stdout);
		scanf("%d",&Location);
		for(i=0 ; i<n+1 ; i++)
		{
			if(i<Location-1)
				inserted_array[i] = array[i];
			else if (i == Location-1)
				inserted_array[i] = Element;
			else
				inserted_array[i] = array[i-1];
		}
		for (i=0 ; i<n+1 ; i++)
				printf("%d  ",inserted_array[i]);
}
