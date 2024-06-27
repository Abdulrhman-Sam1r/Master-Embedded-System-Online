/*
 * Lecture_Lab.c
 *
 *  Created on: Jun 27, 2024
 *      Author: MSI PC
 */


#include <stdio.h>

int main()
{
	int i, j;

	for(i = 0; i <= 9; i++)
	{
		for(j = i; j <= 9; j++)
			printf("%d ",j);

		printf("\n");
	}
	return 0;
}
