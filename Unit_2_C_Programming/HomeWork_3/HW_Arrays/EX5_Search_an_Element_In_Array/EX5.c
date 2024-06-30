/*
 * EX5.c
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
	printf("\nEnter the element to be searched : ");
	fflush(stdout);
	scanf("%d",&number);

	for(i = 0; i < elements; i++)
	{
		if(arr[i] == number)
		{
			location = i + 1;
			break;
		}
	}

	if(i < elements)
	{
		printf ("\nNumber found at the location = %d",location);
	}
	else
	{
		printf("Not found");
	}

}
