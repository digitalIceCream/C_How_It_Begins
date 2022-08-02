/*
Author: 	John-Philipp Vogt
Date:		2022-04-30
Synopsis:	A simple program that uses the Characters, Integers, and Floating-Point Data Types.
Filename:	p1ch2.c
*/

#include <stdio.h>

int main ()
{
	// Note: The characters with '%' in front are called conversion characters.
	printf("I am learning the %c programming language.\n", 'C'); // '%c' for char - type
	printf("I have just completed Chapter %d.\n", 2); // '%d' for int - type
	printf("I am %.2f percent ready to move on \n", 99.95); // '%f' for floating point - type (NB: .2 determines the digits after the period)
	printf("to the next chapter!\n");

	return 0;
}
