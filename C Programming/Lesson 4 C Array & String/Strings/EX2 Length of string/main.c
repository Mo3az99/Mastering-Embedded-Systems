/*
 * main.c
 *
 *  Created on: Jul 3, 2022
 *      Author: Moaaz Mansour
 */
#include "stdio.h"

void main(){
	char str[1000];
	int i, count = 0;
	printf("Enter a string : ");
	fflush(stdout);
	gets(str);
	fflush(stdin);
	for(i = 0 ; str[i]!='\0' ; i++){
			count++;
	}
	printf("Length of string: %d",count);
	fflush(stdout);

}
