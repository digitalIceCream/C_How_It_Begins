/*
Author:		John-Philipp Vogt
Date:		03.05.2022
Synopsis:	A little program pairing three kids with their favourite superheros (getting to know string termination and character arrays).
*/

#include <stdio.h>
#include <string.h>

int main()
{
	char Kid1[12]; // array can hold an 11 character string because the last elemnt is '\0'
	char Kid2[] = "Enola";
	char Kid3[] = "Löööra";
	char Hero1[] = "Batman"; // no need for character array here??
	char Hero2[34] = "John"; // just in case some extra memory space for john :)
	char Hero3[25];

	// Defining Kid! element-by-element
	Kid1[0] = 'K';
	Kid1[1] = 'a';
	Kid1[2] = 't';
	Kid1[3] = 'i';
	Kid1[4] = 'e';
	Kid1[5] = '\0'; // NEVER FORGET THE NULL ZERO/ BINARY ZERO / STRING TERMINATOR / ASCII 0

	strcpy(Hero3, "The Incredible Arti!");

	printf("%s\'s favourite hero is %s.\n", Kid1, Hero1);
	printf("%s\'s favourite hero is %s.\n", Kid2, Hero2);
	printf("%s\'s favourite hero is %s.\n", Kid3, Hero3);

	return 0;
}


