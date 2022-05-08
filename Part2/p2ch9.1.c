/*
Author:		John-Philipp Vogt
Date:		08.05.2022
Synopsis:	A simple program that demonstrates math operators and different types of division.
Filename:	p2ch9.1.c
*/

#include <stdio.h>

int main()
{
	// Two sets of equivalent variables, with one set floatin-point and the other integer

	float a = 19.0;
	float b = 5.0;
	float floatAnswer;

	int x = 19;
	int y = 5;
	int intAnswer;

	// Using two float variables creates an answer of 3.8

	floatAnswer = a / b;

	printf("%.2f divided by %.2f equals %.2f\n", a, b, floatAnswer);
	
	floatAnswer = x /y; // Take 2 creates an answer of 3.0
	printf("%d divided by %d equals %.2f\n", x, y, floatAnswer);

	// This will also be 3, as it truncates and doesn't round up
	intAnswer = a / b;
	printf("%.2f divided by %.2f equals %d\n", a, b, intAnswer);

	intAnswer = x % y; // This calculates the remainder (4)
	printf("%d modulus (i.e. remainder of) %d equals %d\n", x, y, intAnswer);
	
	return 0;
}


