/*
 * main.c
 *
 *  Created on: Jul 3, 2022
 *      Author: Moaaz Mansour
 */
#include "stdio.h"

void main(){
	char str[1000], temp;
	int i, j;
	printf("Enter a string : ");
	fflush(stdout);
	gets(str);
	fflush(stdin);
	i = 0;
	j = strlen(str) -1;
	while(i<j){
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
	printf("Reverse string is : %s",str);
	fflush(stdout);

}
