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

struct Sdata
{
	char name[20];
	int ID;
};

int main(void) {
	struct Sdata emp1 = {"Moaaz",1}, emp2 = {"Essam",9}, emp3 = {"Abdelgawad",30}, emp4 = {"Mansour",40};
	struct Sdata *arr[] = {&emp1, &emp2, &emp3, &emp4};
	struct Sdata ( *(*ptr)[4] ) = & arr;   //Pointer to array of pointers to struct
	printf("IMOPLOYEE NAME: %s\n",(*(*ptr+3))->name);
	printf("EMPLOYEE ID:% d",(*(*ptr+3))->ID);
	return EXIT_SUCCESS;
}

