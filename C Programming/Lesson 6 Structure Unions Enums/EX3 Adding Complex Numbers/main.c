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

struct Complex{
	float real ;
	float imaginary;
}number_1,number_2;

void addingComplex(struct Complex number_1,struct Complex number_2)
{
	printf("sum=%.1f+%.1fi",(number_1.real + number_2.real),(number_1.imaginary + number_2.imaginary));
}
int main(void) {
	printf("For 1st complex number\n:");
	printf("Enter real and imaginary respectively:\n");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&number_1.real,&number_1.imaginary);

	printf("For 2nd complex number\n:");
	printf("Enter real and imaginary respectively:\n");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&number_2.real,&number_2.imaginary);

	addingComplex(number_1,number_2);
	return EXIT_SUCCESS;
}

