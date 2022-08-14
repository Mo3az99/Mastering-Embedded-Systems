/*
 * main.c
 *
 *  Created on: Jul 3, 2022
 *      Author: Moaaz Mansour
 */
#include "stdio.h"

void main(){
	char str[1000] , ch;
	int i, count = 0;
	printf("Enter a string : ");
	fflush(stdout);
	gets(str);
	fflush(stdin);
	printf("Enter a character to find frequency : ");
	fflush(stdout);
	scanf("%c",&ch);
	fflush(stdin);
	for(i = 0 ; str[i]!='\0' ; i++){
		if(str[i] == ch){
			count++;
		}
	}
	printf("Frequency of %c = %d : ", ch ,count);
	fflush(stdout);

}
