/*
 * EX7.c
 *
 *  Created on: Jun 27, 2024
 *      Author: MSI PC
 */


#include <stdio.h>

int main()
{
	int n = 0, count = 1;
	unsigned long long int factorial=1;
	printf("Enter a integer: ");
	fflush(stdout);
	scanf("%d",&n);

	if(n < 0)
	{
		printf("Error!!! Factorial of negative number doesn't exist.");
	}
	else
	{
		for(count = 1; count <= n; count++)
		{
			factorial  *=count;
		}
		printf("Factorial = %lu\n",factorial);

	}
	return 0;
}
