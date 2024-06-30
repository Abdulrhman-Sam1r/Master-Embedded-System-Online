/*
 * EX4.c
 *
 *  Created on: Jun 30, 2024
 *      Author: MSI PC
 */


#include <stdio.h>

int main()
{
	int arr[100];
	int elements,i,number,location;

	printf("Enter no of elements : ");
	fflush(stdout);
	scanf("%d",&elements);

	for(i = 0; i < elements; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nEnter the element to be inserted : ");
	fflush(stdout);
	scanf("%d",&number);
	printf("\nEnter the location : ");
	fflush(stdout);
	scanf("%d",&location);

	for(i = elements; i >= location; i--)
	{
		arr[i] = arr[i-1];
	}
	elements++;
	arr[location - 1] = number;
	printf ("\n");

	for(i = 0; i < elements; i++)
	{
		printf ("%d	",arr[i]);
	}

	return 0;
}
