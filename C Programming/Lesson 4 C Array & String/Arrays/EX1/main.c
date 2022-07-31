/*
 * main.c
 *
 *  Created on: Jul 3, 2022
 *      Author: Moaaz Mansour
 */
#include "stdio.h"

void main(){
	float a[2][2];
	float b[2][2];
	float sum[2][2];
	int Row , Column ;
	printf("Enter the elements of 1st matrix\n");
	for (Row=0 ; Row < 2 ; Row++)
	{
		for(Column=0 ; Column < 2 ; Column++)
		{
			printf("Enter a%d%d: ",Row+1,Column+1);
			fflush(stdin);fflush(stdout);
			scanf("%f",&(a[Row][Column]));
		}
	}
	printf("Enter the elements of 2nd matrix\n");
	for (Row=0 ; Row < 2 ; Row++)
	{
		for(Column=0 ; Column < 2 ; Column++)
		{
			printf("Enter a%d%d: ",Row+1,Column+1);
			fflush(stdin);fflush(stdout);
			scanf("%f",&(b[Row][Column]));
		}
	}
	for (Row=0 ; Row < 2 ; Row++)
	{
		for(Column=0 ; Column < 2 ; Column++)
		{
			sum[Row][Column] = a[Row][Column] + b[Row][Column] ;
		}
	}
	printf("Sum of Matrix:\n");
	for (Row=0 ; Row < 2 ; Row++)
	{
		for(Column=0 ; Column < 2 ; Column++)
		{
			printf("%0.1f\t",sum[Row][Column]);
		}
		printf("\n");
	}
}
