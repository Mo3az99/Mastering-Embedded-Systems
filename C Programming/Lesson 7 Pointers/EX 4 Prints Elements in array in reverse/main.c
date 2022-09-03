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
	int arr_size;
	int arr[15];
	int *ptr = NULL;
	printf("Input the number of elements to store in the array (max 15) :");
	fflush(stdout);
	scanf("%d",&arr_size);
	fflush(stdin);
	printf("\nInput %d number of elements in the array : \n",arr_size);
	fflush(stdout);
	for(int i = 0 ; i < arr_size ; i++){
		printf("element -%d :",i+1);
		fflush(stdout);
		scanf("%d",&arr[i]);
		fflush(stdin);
	}
	ptr = &arr[0];
	printf("The elements of array in reverse order are : ");
	fflush(stdout);
	for(int i = arr_size-1 ; i >= 0; i--){
		printf("\nelement -%d : %d",i,*(ptr+i));
		fflush(stdout);
	}
	return EXIT_SUCCESS;
}

