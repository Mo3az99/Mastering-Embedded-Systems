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
	char x[11];
	char *p = NULL;
	printf("Enter String : ");
	fflush(stdout);
	scanf("%s",x);
	fflush(stdin);
	p = &x[strlen(x)];
	for(int i = 1 ;i <= strlen(x) ; i++){
		printf("%c",*(p-i));
	}
	return EXIT_SUCCESS;
}

