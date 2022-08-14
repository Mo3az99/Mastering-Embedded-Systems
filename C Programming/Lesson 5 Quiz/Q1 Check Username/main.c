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
int main(void) {
	char arr[]="Moaaz";
		char str[50];
		printf("Enter Your Username : ");
		fflush(stdout);
		int flag=0;
		gets(str);
		fflush(stdin);
		flag = strcmp(arr,str);
		if(flag == 0)
		{
			printf(" Username is the same\n");
			fflush(stdout);

		}
		else if(flag == 1)
		{
			printf("Username is not  the same\n");
			fflush(stdout);

		}
	return EXIT_SUCCESS;
}

