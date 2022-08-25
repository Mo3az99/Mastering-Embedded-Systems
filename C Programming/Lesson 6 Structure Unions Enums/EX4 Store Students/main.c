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
}student[5];

int main(void) {
	int i=0;
	printf("Enter students information:\n");
	for(;i<5;i++)
	{
		student[i].roll=i+1;
		printf("for roll number: %d\n" ,student[i].roll);
		printf("Enter name:");
		fflush(stdin); fflush(stdout);
		gets(student[i].name);
		printf("Enter marks:");
		fflush(stdin); fflush(stdout);
		scanf("%f",&student[i].marks);
	}
	printf("Displaying students information:\n");
	for(i=0;i<5;i++)
	{
		printf("information for roll number :%d\n",student[i].roll);
		printf("Name:%s\n",student[i].name);
		printf("Marks:%.2f\n",student[i].marks);
	}

	return EXIT_SUCCESS;
}

