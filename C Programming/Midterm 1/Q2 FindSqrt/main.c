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

double findSquareRoot(double number){
	return sqrt(number);
}


int main(void) {
	int number;
	double result;
	printf("Please Enter The number : ");
	fflush(stdout);
	scanf("%d",&number);
	fflush(stdin);
	result = findSquareRoot(number);
	printf("The Square Root is %.3f" , result);
	return EXIT_SUCCESS;
}

