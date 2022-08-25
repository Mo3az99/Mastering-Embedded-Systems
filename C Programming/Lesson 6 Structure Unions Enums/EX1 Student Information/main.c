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

struct Sstudent{
	char name[20];
	int roll ;
	double marks;
}student;
int main(void) {
	printf("Enter information of students :\n");
	fflush(stdout);
	printf("Enter name : ");
	fflush(stdout);
	scanf("%s",&student.name);
	fflush(stdin);

	printf("Enter roll number : ");
	fflush(stdout);
	scanf("%d",&student.roll);
	fflush(stdin);

	printf("Enter marks : ");
	fflush(stdout);
	scanf("%lf",&student.marks);
	fflush(stdin);

	printf("Displaying Information :\n");
	printf("name: %s",student.name);
	printf("\nRoll: %d",student.roll);
	printf("\nMarks: %.2lf",student.marks);

	return EXIT_SUCCESS;
}

