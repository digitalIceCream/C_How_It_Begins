/*
Author:			John-Philipp Vogt
Date:			18.07.2022
Synopsis:		
Filename:		p3ch19.1.c
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	int i;
	int hasUpper, hasLower, hasDigit;
	char user[25], password[25];

	// Initialise all three test variable to false (i.e. 0)
	hasUpper = hasLower = hasDigit = 0;

	printf("Whas is your username?\n");
	scanf(" %s", user);

	printf("What is your password?\n");
	scanf(" %s", password);

	// Testing each character in password for upper, lower case, digit
	for (i = 0; i < strlen(password); i++)
	{
		if (isdigit(password[i]))
		{
			hasDigit = 1;
			continue;
		}

		if (isupper(password[i]))
		{
			hasUpper = 1;
			continue;
		}

		if (islower(password[i]))
		{
			hasLower = 1;
			continue;
		}
	}

	if ((hasDigit && hasLower && hasUpper) == 1)
	{
		printf("\n\nExcellent work, %s!\n", user);
		printf("Your password has upper and lower case letters ");
		printf("and a number!\n");
	}

	else 
	{
		printf("\n\nYou should consider a safer password, %s,\n", user);
		printf("One that uses upper and lower cases letters ");
		printf("and at least one number!\n");
	}

	return 0;
}
