/*
 * EX2.c
 *
 *  Created on: Jul 1, 2024
 *      Author: MSI PC
 */


#include <stdio.h>

int main()
{
	unsigned char str[100],i;

	printf("Enter a string: ");
	fflush(stdout);
	scanf("%s",str);
	for(i = 0; str[i] != '\0'; i++);
	printf("Length of string: %d",i);
	return 0;
}
