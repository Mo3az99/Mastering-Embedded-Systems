/*
 * main.c
 *
 *  Created on: Jul 3, 2022
 *      Author: Moaaz Mansour
 */
#include "stdio.h"
#define flush fflush(stdout);

void main(){
	int x,i;
	float average = 0;
	printf("Enter the numbers of data: ");
	flush
	scanf("%d",&x);
	float arr[x];
	for(i= 0;i<x;i++){
		printf("%d. Enter number: ",i+1);
		flush
		scanf("%f",&arr[i]);
		average += arr[i];
	}
	average /= x;
	printf("Average = %.02f",average);
	flush

}
