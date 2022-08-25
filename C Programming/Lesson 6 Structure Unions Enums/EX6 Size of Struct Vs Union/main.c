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
union job {
char name[32];
float salary;
int worker_no;
}u;

struct job1{
	char name[32];
	float salary;
	int worker_no;
}s;

int main(void) {
	printf("size of union = %d",sizeof(u));
	printf("\nsize of structure = %d",sizeof(s));

	return EXIT_SUCCESS;
}

