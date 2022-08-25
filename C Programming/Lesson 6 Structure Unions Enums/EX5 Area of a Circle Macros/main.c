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
#define pi (3.1415)
#define area(R) ((pi)*(R)*(R))

int main(void) {
	float radius , area;
	printf("Enter the radius :");
	fflush(stdin); fflush(stdout);
	scanf("%f",&radius);
	area=area(radius);
	printf("Area = %.2f",area);
	return EXIT_SUCCESS;
}

