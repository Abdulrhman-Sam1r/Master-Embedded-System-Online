/*
 * EX4.c
 *
 *  Created on: Jun 27, 2024
 *      Author: MSI PC
 */


#include <stdio.h>

int main()
{
	float x = 0;

	printf("Enter a number: ");
	fflush(stdout);
	scanf("%f",&x);

	if(x > 0)
		printf("%.2f is positive.\n",x);
	else if(x < 0)
		printf("%.2f is negative\n",x);
	else
		printf("You enterd zero");
	return 0;
}
