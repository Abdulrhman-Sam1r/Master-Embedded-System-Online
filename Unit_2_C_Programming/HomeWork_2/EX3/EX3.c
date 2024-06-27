/*
 * EX3.c
 *
 *  Created on: Jun 27, 2024
 *      Author: MSI PC
 */


#include <stdio.h>

int main()
{
	float x = 0, y = 0 , z = 0;

	printf("Enter Three numbers: ");
	fflush(stdout);
	scanf("%f%f%f",&x,&y,&z);

	if(x >= y)
	{
		if(x >= z)
			printf("Largest number = %.2f\n",x);
		else
			printf("Largest number = %.2f\n",z);
	}
	else
	{
		if(y >= z)
			printf("Largest number = %.2f\n",y);
		else
			printf("Largest number = %.2f\n",z);
	}

	return 0;
}
