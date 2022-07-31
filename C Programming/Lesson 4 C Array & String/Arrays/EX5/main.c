/*
 * main.c
 *
 *  Created on: Jul 3, 2022
 *      Author: Moaaz Mansour
 */
#include "stdio.h"

void main(){
	int i , n , Location = -1 , Element;
		printf("Enter no of elements: ");
		fflush(stdout);
		scanf("%d",&n);
		int array[n];
		for(i=0 ; i<n ; i++)
		{
			printf("Enter element no.%d: ",i+1);
			fflush(stdout);
			scanf("%d",&array[i]);
		}
		for (i=0 ; i<n ; i++)
			printf("%d  ",array[i]);

		printf("\nEnter the element to be searched : ");
		fflush(stdout);
		scanf("%d",&Element);
		for(i=0 ; i<n ; i++)
		{
			if(array[i] == Element)
				Location = i+1 ;

		}
		if (Location != -1)
			printf("\nNumber found at the location = %d : ", Location);
		else
			printf("\nNumber Was not found ");

}
