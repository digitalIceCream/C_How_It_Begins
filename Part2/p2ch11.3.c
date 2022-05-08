/*
Author:		John-Philipp Vogt
Date:		08.05.2022
Synopsis:	A simple program that asks user their state of happiness on a scale of 1 to 10 and then gives a custom 2-line message
		based on their range: Either 1-2, 3-4, 5-7, 8-9.
Filename:	
*/

#include <stdio.h>

int main()
{
	int prefer;

	printf("On a scale of 1 to 10, how happy are you?\n");
	scanf(" %d", &prefer);

	// Once the user's level of happiness is entered, a series of if-statements test the number agains decreasing numbers.
	// Only one of the four will be executed.

	if (prefer >= 8)
	{
		printf("Great for you!\n");
		printf("Things are going well four you!\n");
	}
	else if (prefer >= 5)
	{
		printf("Better than average, amirite?\n");
		printf("Maybe things will be better soon! :)\n");
	}
	else if (prefer >= 3)
	{
		printf("Sorry that you are not feeling all to great...\n");
		printf("I am sure things will turn around soon! Don't worry!\n");
	}
	else
	{
		printf("Hang in there -- can only go uphill from there, right?\n");
		printf("It's always darkest before the dawn!\n");
	}

	return 0;
}

