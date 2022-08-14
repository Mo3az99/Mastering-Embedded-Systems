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

int lastOccurance(int arr[], int size, int number)
{
	for(int i = size-1 ; i >=0 ; i--){
		if(arr[i]==number)
			return i+1;
	}
	return -1;
}
int main(void) {
	int arr [100],size ,i,lastOccuranceIndex,number;
	printf("Enter size of array : ");
	fflush(stdout);
	scanf("%d",&size);
	fflush(stdin);
	for(i = 0 ; i < size ; i++){
		printf("Enter element number %d : ",i+1);
		fflush(stdout);
		scanf("%d",&arr[i]);
	}
	printf("Enter the number you want to get its last Occurrence : ");
	fflush(stdout);
	scanf("%d",&number);
	fflush(stdin);


	lastOccuranceIndex = lastOccurance(arr,size,number);
	printf("Last Occurrence of %d is %d",number,lastOccuranceIndex);
	return EXIT_SUCCESS;
}

