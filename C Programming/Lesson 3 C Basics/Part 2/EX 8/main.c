/*
 * main.c
 *
 *  Created on: Jul 3, 2022
 *      Author: Moaaz Mansour
 */
#include "stdio.h"

void main(){

	char op = '+' ;
	float n1 , n2 ;
	printf("Enter operator either + , - , * , / ") ;
	fflush(stdin) ; fflush(stdout) ;
	scanf("%c",&op) ;
	printf("Enter two operands : \n") ;
	fflush(stdin) ; fflush(stdout) ;
	scanf("%f%f",&n1,&n2);
	switch(op)
	{
	case '+' :
		printf("%f %c %f = %f ",n1,op,n2,n1+n2) ;
		fflush(stdin) ; fflush(stdout) ;
		break ;
	case '-' :
		printf("%f %c %f = %f ",n1,op,n2,n1-n2) ;
		fflush(stdin) ; fflush(stdout) ;
		break ;
	case '*' :
		printf("%f %c %f = %f ",n1,op,n2,n1*n2) ;
		fflush(stdin) ; fflush(stdout) ;
		break ;
	case '/' :
		if(n2 == 0 ){
			printf("Error Division by zero ") ;
			fflush(stdin) ; fflush(stdout) ;
		}
		else{
			printf("%f %c %f = %f ",n1,op,n2,n1/n2) ;
			fflush(stdin) ; fflush(stdout) ;
		}
		break ;
	default :
		printf("Fault") ;
	}
}
