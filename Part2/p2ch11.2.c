/*
Author:		John-Philipp Vogt
Date:		08.04.2022
Synopsis:	A simple program that asks the use for their birth year and calculates how old they will be in the current year.
		I also checks to make sure a future year has not been entered. I then tells the user if they were born in an leap year.
Filename:	p2ch10.2.c
*/

#include <stdio.h>
#define CURRENTYEAR 2022

int main()
{
	int yearBorn, age;

	printf("What year were you born?\n");
	scanf(" %d", &yearBorn);

	// This if statement can do some data validation, making sure the year makes sense.
	// The statements will only execute if the year is after the current year.

	if (yearBorn > CURRENTYEAR)
	{
		printf("Really, bro? %d?? You haven't been born yet???\n", yearBorn);
		printf("Congratulations on traveling through time!\n");
	}
	else
	{
		

		age = CURRENTYEAR - yearBorn;

		printf("\nSo this year you will turn %d on your birthday!\n", age);

		// The second if statement uses the modulus operator to test if the year of birth was a Leap Year.
		// Again, only if it is will the code execute.

		if ((yearBorn % 4) == 0)
		{
			printf("\nYou were born in a Leap Year -- neat-o!\n");
		}
	}

	return 0;
}
