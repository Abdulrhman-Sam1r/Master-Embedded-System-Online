/*
 * EX1.c
 *
 *  Created on: Jun 27, 2024
 *      Author: MSI PC
 */


#include <stdio.h>

int main()
{
	int x = 0;

	printf("Enter an integer you want to check: ");
	fflush(stdout);
	scanf("%d",&x);

	if(x%2)
	{
		printf("%d is odd\n",x);
	}
	else
	{
		printf("%d is even\n",x);
	}

	return 0;
}
