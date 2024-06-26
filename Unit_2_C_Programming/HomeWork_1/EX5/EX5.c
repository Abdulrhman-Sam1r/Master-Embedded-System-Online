/*
 * EX5.c
 *
 *  Created on: Jun 26, 2024
 *      Author: MSI PC
 */


#include <stdio.h>

void main()
{
	char x = '\0';
	printf("Enter a character: ");
	fflush(stdout);
	scanf("%c",&x);
	printf("ASCII Value of %c = %d\n",x,x);
}
