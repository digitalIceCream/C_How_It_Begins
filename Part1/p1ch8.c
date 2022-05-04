/*
Author:		John-Philipp Vogt
Date:		04.05.2022
Synopsis:	A simple program implementing scanf() with print() to get data from prompt and print it on screen.
Filename:	p1ch8.c
*/

#include <stdio.h>

int main()
{
	// setting up variable for scanf() to fill

	char firstInitial;
	char lastInitial;
	int age;
	int favouriteNumber;

	printf("What letter does your first name begin with?\n");
	scanf(" %c", &firstInitial);

	printf("What letter does you last name begin with?\n");
	scanf(" %c", &lastInitial);

	printf("How old are you?\n");
	scanf(" %d", &age);

	printf("What is your favourite integer?\n");
	scanf(" %d", &favouriteNumber);

	printf("\n\nYour initials are %c. %c. and your are %d years old!\n\n",
			firstInitial, lastInitial, age);
	printf("\n\nYour favourite integer is %d. \n\n", favouriteNumber);

	
	return 0;
}


