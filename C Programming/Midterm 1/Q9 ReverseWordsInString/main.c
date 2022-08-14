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

void reverseString (char *str,int size){
	int i,j,k =0;
	char ch[50];
	for(i =size-1 ; i >= 0 ; i--){
		if(str[i] == ' '){
			for(j=k-1 ; j>=0 ; j--){
				printf("%c",ch[j]);
			}
			printf(" ");
			k = 0;
		}
		else{
			ch[k] = str[i];
			k++;
		}
	}
	if(k!=0){
		for(j=k-1 ; j>=0 ; j--){
			printf("%c",ch[j]);
		}
	}
}
int main(void) {
	char str[100];
	printf("Enter String : ");
	fflush(stdout);
	fgets(str,50,stdin);
	reverseString(str,strlen(str));
	return EXIT_SUCCESS;
}

