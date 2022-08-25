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

struct Distance{
	int feet ;
	float inch;
}distance_1,distance_2,sum;
int main(void) {
	printf("Enter information for first distance:\n");//take the distances
	printf("Enter feet:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&distance_1.feet);
	printf("Enter inch:");
	fflush(stdin); fflush(stdout);
	scanf("%f",&distance_1.inch);

	printf("Enter information for second distance:\n");
	printf("Enter feet:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&distance_2.feet);
	printf("Enter inch:");
	fflush(stdin); fflush(stdout);
	scanf("%f",&distance_2.inch);
	sum.feet=distance_1.feet+distance_2.feet; //adding them
	sum.inch=distance_1.inch+distance_2.inch;
	if(sum.inch>12.0)//convert inch to feet
	{
		sum.inch-=12.0;
		sum.feet++;
	}
	printf("sum of distance = %d\'-%.1f\"",sum.feet,sum.inch);

	return EXIT_SUCCESS;
}

