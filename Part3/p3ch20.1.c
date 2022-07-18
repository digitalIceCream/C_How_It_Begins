/*
Author:			John-Philipp Vogt
Date:			18.07.2022
Synopsis:		Some show-casing of how basic math operations work.
Filename:		p3ch20.1.c
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	printf("It's time to do your math homework!\n");

	printf("Section 1: Square Roots\n");
	printf("The square root of 49 is %.f\n", sqrt(49));

	printf("Section 2: Powers\n");
	printf("4 raised oto the 3rd power is %.f\n", pow(4, 3));

	printf("Section 3: Log functions\n");
	printf("e raised to 2 is %.3f\n", exp(2));
	printf("The natural log of 5 is %.3f\n", log(5));
	printf("The base-10 log of 5 is %.3f\n", log10(5));

	return (0);

}

