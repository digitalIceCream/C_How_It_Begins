/*
Author:			John-Philipp Vogt
Date:			2022-30-07
Synopsis:		A simple program illustrating the passing of variables to a function by value.
Filename:		p5ch30.1.c
*/

#include <stdio.h>

int main()
{
	int i;

	printf("Please enter and integer...\n");
	scanf(" %d", &i);

	// Now call the half functionl, passing the value of i

	half(i);
	// Shows that the function did not alter i's value
	printf("In main(), i is still %d.\n", i);

	return 0;
}

/**************************************************************************************************/
					/*Noice divider*/
half (int i)
{
	i = i / 2;
	printf("Your value halved is %d.\n", i);
	return; // returns to main()
}

