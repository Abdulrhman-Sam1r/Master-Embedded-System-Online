/*
 * EX2.c
 *
 *  Created on: Jun 30, 2024
 *      Author: MSI PC
 */


#include <stdio.h>

int main()
{
	float Arr[100];
	float sum=0;
	int n,i;

	printf("Enter the number of data: ");
	fflush(stdout);
	scanf("%d",&n);

	for(i = 0; i < n; i++)
	{
		printf("%d. Enter number: ",i+1);
		fflush(stdout);
		scanf("%f",&Arr[i]);
	}

	for(i = 0; i < n; i++)
	{
		sum += Arr[i];
	}
	printf("Average = %.2f",sum/n);

}
