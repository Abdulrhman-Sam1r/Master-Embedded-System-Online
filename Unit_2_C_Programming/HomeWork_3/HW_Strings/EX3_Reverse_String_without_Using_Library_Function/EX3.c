/*
 * EX3.c
 *
 *  Created on: Jul 1, 2024
 *      Author: MSI PC
 */


#include <stdio.h>
#include <string.h>

int main()
{
	char str[100],temp;
	unsigned char i,j;

	printf("Enter the string: ");
	fflush(stdout);
	gets(str);

	j = strlen(str) - 1;

	for(i = 0; i < j; i++ ,j--)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
	printf("\nReversed string is :%s ",str);
	return 0;

}
