/*
 * EX3.c
 *
 *  Created on: Jun 30, 2024
 *      Author: MSI PC
 */


#include <stdio.h>

int main()
{
	int MAT[10][10],MAT_T[10][10];
	int row, column, i, j;

	printf("Enter rows and columns of matrix: ");
	fflush(stdout);
	scanf("%d",&row);
	scanf("%d",&column);
	printf("\nEnter elements of matrix: \n");

	for(i = 0; i < row; i++)
	{
		for(j = 0; j < column; j++)
		{
			printf("Enter element a%d%d: ",i+1,j+1);
			fflush(stdout);
			scanf("%d",&MAT[i][j]);
		}
	}
	for(i = 0; i < column; i++)
	{
		for(j = 0; j < row; j++)
		{
			MAT_T[i][j] = MAT[j][i];
		}
	}

	printf("\nEntered Matrix: \n");

	for(i = 0; i < row; i++)
	{
		for(j = 0; j < column; j++)
		{
			printf("%d\t",MAT[i][j]);
			if(j == column-1)
			{
				printf("\n");
			}
		}
	}

	printf("\nTranspose Matrix: \n");
	for(i = 0; i < column; i++)
	{
		for(j = 0; j < row; j++)
		{
			printf("%d\t",MAT_T[i][j]);
			if(j == row-1)
			{
				printf("\n");
			}
		}
	}

}
