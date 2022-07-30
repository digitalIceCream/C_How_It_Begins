/*
Author:			John-Philipp Vogt
Date:			2022-07-30
Synopsis:		A simple programm passing a value to a function by address.
Filename:		p5ch30.3.c
*/

#include <stdio.h>

int main()
{
	int i;

	printf("Please enter an integer...\n");
	scanf(" %d", &i);

	// Now call the half function, passing the address of i

	half(&i);
	// Shows that the function did alter i's value
	printf("In main(), i is now %d.\n", i);


	return 0;
}

/************************************************************************************/

half (int *i) // Receives the address of i
{
	*i = *i  / 2;
	printf("Your value halved is %d.\n", *i);
	return;
}
