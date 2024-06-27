/*
 * EX8.c
 *
 *  Created on: Jun 27, 2024
 *      Author: MSI PC
 */


#include <stdio.h>

int main()
{
	char operator = '\0';
	float x = 0, y = 0;

	printf("Enter operator either + or - or * or / :" );
	fflush(stdout);
	scanf("%c",&operator);
	printf("Enter two operands: " );
	fflush(stdout);
	scanf("%f%f",&x,&y);

	switch(operator)
	{
	case '+':
		printf("%.1f + %.1f = %.1f",x,y,(x+y));
		break;
	case '-':
		printf("%.1f - %.1f = %.1f",x,y,(x-y));
		break;
	case '*':
		printf("%.1f * %.1f = %.1f",x,y,(x*y));
		break;
	case '/':
		printf("%.1f / %.1f = %.1f",x,y,(x/y));
		break;
	default:
		printf("Error!!! operator is wrong.");
	}

	return 0;
}
