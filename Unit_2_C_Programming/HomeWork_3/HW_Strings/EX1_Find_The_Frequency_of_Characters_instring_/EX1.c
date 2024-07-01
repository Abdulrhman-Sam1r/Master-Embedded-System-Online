/*
 * EX1.c
 *
 *  Created on: Jul 1, 2024
 *      Author: MSI PC
 */


#include <stdio.h>

#define arr_size 100

int main()
{
	char arr[arr_size], character;
	int i,counter = 0;

	printf("Enter a string: ");
	fflush(stdout);
	gets(arr);
	printf("Enter a character to find frequency: ");
	fflush(stdout);
	scanf("%c",&character);

	for(i = 0; arr[i] != 0 && i < arr_size; i++)
	{
		if(arr[i] == character)
			counter++;
	}

	printf("Frequency of %c = %d",character,counter);

	return 0;
}
