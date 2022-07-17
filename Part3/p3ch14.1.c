/*
Author:			John-Philipp Vogt
Date:			15.07.2022
Synopsis:		A simple program that increments and decrements a counter; displays update while it does with a while-loop
Filename:		p3ch14.1.c
*/

#include <stdio.h>

int main()
{
	int ctr = 0;

	while (ctr < 5)
	{
		printf("Counter is at %d.\n", ctr++);	// NB: changing the pre/post incrementor changes the order of the assignment.
	}

	printf("After the first while-lopp: The counter is at %d, now.\n", ctr);

	while (ctr > 1)
	{
		printf("Coutner is at %d.\n", --ctr);
	}

	return 0;
}

