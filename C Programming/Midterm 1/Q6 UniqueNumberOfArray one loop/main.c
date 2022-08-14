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
	int arr[] = {4,2,4};
	int i , result =0 ;
	int size = sizeof(arr)/sizeof(arr[0]);
	for(i =0 ; i <size ;i++){
		result ^= arr[i];
	}
	printf("Result is %d",result);
	fflush(stdout);
	return EXIT_SUCCESS;
}

