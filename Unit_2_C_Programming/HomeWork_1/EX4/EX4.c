/*
 * EX4.c
 *
 *  Created on: Jun 26, 2024
 *      Author: MSI PC
 */


#include <stdio.h>

int main()
{
	float x = 0.0 , y = 0.0 ;
	printf("Enter two numbers: ");
	fflush(stdout);
	scanf("%f%f",&x,&y);
	printf("Product: %f\n",x*y);

	return 0;
}
