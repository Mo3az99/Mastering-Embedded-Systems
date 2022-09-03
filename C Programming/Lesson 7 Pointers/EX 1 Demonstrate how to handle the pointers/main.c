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

int main(void) {
	int m = 29;
	int *ab = &m;
	printf("Address of m : %x\nValue of m : %d \n",&m,m);
	printf("\nAddress of pointer ab : %x\nContent of pointer ab : %d \n",ab,*ab);
	*ab = 34;
	printf("\nAddress of pointer ab : %x\nContent of pointer ab : %d \n",ab,*ab);
	*ab = 7;
	printf("\nAddress of m : %x\nValue of m : %d \n",&m,m);
	printf("\nAddress of pointer ab in memory : %x",&ab);
	return EXIT_SUCCESS;
}

