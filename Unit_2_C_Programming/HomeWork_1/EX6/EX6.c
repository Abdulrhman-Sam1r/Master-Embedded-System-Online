/*
 * EX6.c
 *
 *  Created on: Jun 26, 2024
 *      Author: MSI PC
 */


#include <stdio.h>

void main()
{
	float a = 0 , b = 0 , c = 0;
	printf("Enter value of a: ");
	fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b: ");
	fflush(stdout);
	scanf("%f",&b);

	c = a;
	a = b;
	b = c;

	printf("After swapping, value of a = %.2f\n",a);
	printf("After swapping, value of b = %.2f\n",b);
}
