/*
Author:			John-Philipp Vogt
Date:			17.07.2022
Synopsis:		
Filename:		p3ch16.2.c
*/

#include <stdio.h>

int main()
{
	printf("TEST\n");

	int i;

	// Loops through the numbers 1 through 10
	
	for (i = 1; i <= 10; i++)
	{
		if ((i%2) == 1) // Odd numbers have a remainder of 1
		{
			printf("I'm rather odd...\n");
			// Will jump to the next iteration of the loop
			continue;
		}
		printf("Even up!\n");
	}
	printf("TEST\n");


	return 0;
}

