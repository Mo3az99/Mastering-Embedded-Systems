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

int sumNumberWithoutLoop(int number){
	if(number > 0 ){
		return number + sumNumberWithoutLoop(number -1);
	}
	return 0 ;
}
int main(void) {
	printf("Sum of Number From 1 to 100 is %d",sumNumberWithoutLoop(100));
	fflush(stdout);
	return EXIT_SUCCESS;
}

