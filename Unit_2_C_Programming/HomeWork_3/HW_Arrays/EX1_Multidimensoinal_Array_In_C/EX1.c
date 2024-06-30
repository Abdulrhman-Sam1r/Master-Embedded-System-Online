/*
 * EX1.c
 *
 *  Created on: Jun 30, 2024
 *      Author: MSI PC
 */

#include <stdio.h>

#define rows	2
#define colomns	2

int main()
{
	float MAT1[rows][colomns];
	float MAT2[rows][colomns];
	float MAT3[rows][colomns];

	int i,j;

	printf("Enter the elements of 1st matrix\n");
	for(i = 0; i < rows; i++)
	{
		for(j = 0; j < colomns; j++)
		{
			printf("Enter a%d%d: ",i+1,j+1);
			fflush(stdout);
			scanf("%f",&MAT1[i][j]);
		}
	}
	printf("Enter the elements of 2nd matrix\n");
	for(i = 0; i < rows; i++)
	{
		for(j = 0; j < colomns; j++)
		{
			printf("Enter b%d%d: ",i+1,j+1);
			fflush(stdout);
			scanf("%f",&MAT2[i][j]);
		}
	}

	for(i = 0; i < rows; i++)
	{
		for(j = 0; j < colomns; j++)
		{
			MAT3[i][j] = MAT1[i][j] + MAT2[i][j];
		}
	}

	printf("\nSum Of Matrix:\n");
	for(i = 0; i < rows; i++)
	{
		for(j = 0; j < colomns; j++)
		{
			printf("%.1f\t",MAT3[i][j]);
			if(j == colomns-1)
			{
				printf("\n");
			}
		}
	}
	return 0;
}
