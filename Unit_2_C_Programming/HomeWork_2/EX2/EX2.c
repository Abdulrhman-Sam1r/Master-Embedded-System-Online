/*
 * EX2.c
 *
 *  Created on: Jun 27, 2024
 *      Author: MSI PC
 */


#include <stdio.h>

int main()
{
	char c;
	printf("Enter an alphabet: ");
	fflush(stdout);
	scanf("%c",&c);
	if(c=='a' || c=='A' || c=='e' || c=='E' || c=='i' || c=='1'||c=='o'||c=='O'||c=='u' || c=='U')
		printf("%c is a vowel.",c);
	else
		printf("%c is a consonant.",c);

	return 0;
}
