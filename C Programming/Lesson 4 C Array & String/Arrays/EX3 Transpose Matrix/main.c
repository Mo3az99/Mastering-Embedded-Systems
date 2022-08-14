/*
 * main.c
 *
 *  Created on: Jul 3, 2022
 *      Author: Moaaz Mansour
 */
#include "stdio.h"
#define flush fflush(stdin);fflush(stdout);

void main(){
	int row, col, i, j;
	printf("Enter row and column of matrix: ");
	flush
	scanf("%d %d",&row , &col);
	int arr[row][col];
	printf("Enter elements of matrix: \n");
	flush
	for(i= 0;i<row;i++){
		for(j=0; j<col ; j++){
			printf("Enter elements a%d%d: ",i+1,j+1);
			flush
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Entered Matrix: \n");
	for(i= 0;i<row;i++){
			for(j=0; j<col ; j++){
				printf("%d  ",arr[i][j]);
				flush
			}
			printf("\n");
	}
	printf("Transpose Matrix: \n");
	for(i= 0;i<col;i++){
			for(j=0; j<row ; j++){
				printf("%d  ",arr[j][i]);
				flush
			}
			printf("\n");
	}

}
