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
	char x[27];
	char *ptr = x;
	int i;
	for(i=0; i<26; i++,++ptr)
		*ptr = 'A' + i;
	ptr =x;
	for(i=0; i<26; i++,ptr++)
		printf("%c   ",*ptr);
	return 0;
	return EXIT_SUCCESS;
}

