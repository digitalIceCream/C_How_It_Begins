/*
Author:		John-Philipp Vogt
Date:		08.05.2022
Synopsis:	A simple program that also increases acounter from 1 to 5 and back, but uses compoound operators.
Filename:	p2ch10.2.c
*/

#include <stdio.h>

int main()
{
	int ctr = 0;

	ctr += 1; // increases counter to 1
	printf("Counter is at %d.\n", ctr);
	ctr += 1; // increases counter to 2
	printf("Counter is at %d.\n", ctr);
	ctr += 1; // increases counter to 3
	printf("Counter is at %d.\n", ctr);
	ctr += 1; // increases counter to 4
	printf("Counter is at %d.\n", ctr);
	ctr += 1; // increases counter to 5
	printf("Counter is at %d.\n", ctr);
	ctr -= 1; // increases counter to 4
	printf("Counter is at %d.\n", ctr);
	ctr -= 1; // decreases counter to 3
	printf("Counter is at %d.\n", ctr);
	ctr -= 1; // decreases counter to 2
	printf("Counter is at %d.\n", ctr);
	ctr -= 1; // decreases counter to 1
	printf("Counter is at %d.\n", ctr);
	ctr -= 1; // decreases counter to 0
	printf("Counter is at %d.\n", ctr);

	printf("Counter is at %d.\n", ctr += 1);
	printf("Counter in this statement says += 2 now!\n", ctr += 4);
	printf("Counter is at %d!\n", ctr += 2);

	return 0;
}

