/*
 * EX6.c
 *
 *  Created on: Jun 27, 2024
 *      Author: MSI PC
 */


#include <stdio.h>

int main()
{
	int n = 0, count = 0, sum = 0;
	printf("Enter a integer: ");
	fflush(stdout);
	scanf("%d",&n);
	for(count = 1; count <= n; count++)
	{
		sum += count;
	}
	printf("Sum = %d",sum);
	return 0;
}
