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

int checkPrime(int num){
	int i ;
	for(i =2;i <= num/2 ; i++){
		if(num%i == 0)
			return 0;
	}
	return 1;
}

int main(void) {
	int n1 , n2, i;
	printf("Enter two numbers(intervals): ");
	fflush(stdout);
	scanf("%d %d",&n1 ,&n2);
	fflush(stdin);
	printf("Prime numbers between %d and %d are : ",n1,n2);
	fflush(stdout);

	for(i = n1 ; i < n2;i++){
		if(checkPrime(i))
			printf("%d ",i);
	}
	fflush(stdout);
	return EXIT_SUCCESS;
}

