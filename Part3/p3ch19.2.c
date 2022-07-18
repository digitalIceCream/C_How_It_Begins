/*
Author:			John-Philipp Vogt
Date:			18.07.2022
Synopsis:		
Filename:		p3ch19.2.c
*/

#include <stdio.h>
#include <string.h>

int main()
{
	char city[15];
	char st[3];
	char fullLocation[18] = "";

	puts("What town do you live in?\n");
	gets(city);

	puts("What state do you live in? (2-letter abbr.)\n");
	gets(st);

	strcat(fullLocation, city);
	strcat(fullLocation, ", ");
	strcat(fullLocation, st);

	puts("You live in: \n");
	puts(fullLocation);

	return 0;
}

