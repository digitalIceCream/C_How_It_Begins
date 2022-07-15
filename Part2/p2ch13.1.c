/*
Author:		John-Philipp Vogt
Date:		08.05.2022
Synopsis:	A simple program that asks for a number from 1 to 100 and tells then wheter or not their choice is equally dvisible by 2 through 9.
Filename:	p2ch13.1.c
*/

#include <stdio.h>

int main()
{
	// Define the integer to hold the user's guess and then get it from the user.

	int numPick;

	printf("Pick an integer between 1 and 100!\n");
	printf("The higher, the better ;)\n");
	scanf(" %d", &numPick); // Anything else than a string-array takes an ampersand in the scanf()!

	print("%d %s divisible by 2.\n", numPick, (numPick % 2 == 0) ? ("is") : ("is not"));
	printf("%d %s divisible by 3.\n", numPick, (numPick % 3 == 0) ? ("is") : ("is not"));
	printf("%d %s divisible by 4.\n", numPick, (numPick % 4 == 0) ? ("is") : ("is not"));
	printf("%d %s divisible by 5.\n", numPick, (numPick % 5 == 0) ? ("is") : ("is not"));
	printf("%d %s divisible by 6.\n", numPick, (numPick % 6 == 0) ? ("is") : ("is not"));
	printf("%d %s divisible by 7.\n", numPick, (numPick % 7 == 0) ? ("is") : ("is not"));
	printf("%d %s divisible by 8.\n", numPick, (numPick % 8 == 0) ? ("is") : ("is not"));
	printf("%d %s divisible by 9.\n", numPick, (numPick % 9 == 0) ? ("is") : ("is not"));
	
	return 0;
}

