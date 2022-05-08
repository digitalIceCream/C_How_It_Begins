/*
Author:		John-Philipp Vogt
Date:		08.05.2022
Synopsis:	A simple program that asks for a last name, and if the user has a last name that starts with a letter between P and Q, they will be sent to a 
		special room for their tickets.
Filename:	p2ch12.2.c
*/

#include <stdio.h>
#define SPECIALROOM 23

int main()
{
	// set up an array for the last name and then get it from the user

	char name[25];

	printf("What is your last name?\n");
	printf("(Please capitalise the first letter!)\n");
	scanf(" %s", name); // Only for the string array we can omit the ampersand!

	if ((name[0] >= 'P') && (name[0] < 'S'))
	{
		printf("You must go to room %d...\n", SPECIALROOM);
		printf("for your \"tickets\". *wink-wink*\n");
	}
	else
	{
		printf("Here're you tickets, buddy!\n");
	}

	return 0;
}

