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

void reverseString( ){
	char c ;
	scanf("%c",&c);
	if (c != '\n')
		reverseString();
	printf("%c",c);

}

int main(void) {
	printf("Enter a Sentence: ");
	fflush(stdout);
	reverseString();


	return EXIT_SUCCESS;
}

