/*
Author:			John-Philipp Vogt
Date:			18.07.2022
Synopsis:		This little program can be used to illustrate the getchar() function. The book describes different behaviour for this piece of code.
			It seems in the mean time the compiler got smarter... The books seems a little outdated; The compiler does not know 'getch()'.
Filename:		test.c
*/

#include <stdio.h>
#include <string.h>

int main()
{
	char firstInit, lastInit;

	printf("What are your two initials?\n\n");

	firstInit = getchar();
	lastInit = getchar();

	printf("firstInit = %c\n", firstInit);
	printf("lastInit = %c\n", lastInit);

	printf("What are your two initials?\n\n");

	firstInit = getch();
	lastInit = getch();

	return 0;
}

