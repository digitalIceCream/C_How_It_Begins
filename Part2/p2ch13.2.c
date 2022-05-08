/*
Author:		John-Philipp Vogt
Date:		08.05.2022
Synopsis:	A simple program that increases and decreases counter using increment and decrement operators.
Filename:	p2ch13.2.c
*/

#include <stdio.h>

int main()
{
	int ctr = 0;

	printf("Counter is at %d.\n", ctr++);
	printf("Counter is at %d.\n", ++ctr);
	printf("Counter is at %d.\n", ++ctr);
	printf("Counter is at %d.\n", ++ctr);
	printf("Counter is at %d.\n", ++ctr);
	
	printf("Counter is at %d.\n", --ctr);
	printf("Counter is at %d.\n", --ctr);
	printf("Counter is at %d.\n", --ctr);
	printf("Counter is at %d.\n", --ctr);
	printf("Counter is at %d.\n", --ctr);

	return 0;
}

