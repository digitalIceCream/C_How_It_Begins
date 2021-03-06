/*
Author:		John-Philipp Vogt
Date:		08.05.2022
Synopsis:	A simple program that defines a series of variables and expressions and then uses both relational and logical operators to test them against each other.
Filename:	p2ch12.1.c
*/

#include <stdio.h>

int main()
{
	// set up some common integer for the program

	int planets = 8;
	int friends = 6;
	int potterBooks = 7;
	int starWars = 6;
	int months = 12;
	int beatles = 4;
	int avengers = 6;
	int baseball = 9;
	int basketball = 5;
	int football = 22;

	// This first logical statement uses the AND operator to test wheterh the cast of Friends and the Beatles would have enough people to make a baseball team
	// AND the cast of Friends and the Avengers would have enough people to field a football team. If so, the statements will print.

	if ((friends + beatles >= baseball) && (friends + avengers >= football))
	{
		printf("The cast of friends and the Beatles ");
		printf("could make a baseball team,\n");
		printf("AND the cast of Friends plus the Avengers ");
		printf("could make a football team!\n");
	}
	else
	{
		printf("Either the Friends cannot make a ");
		printf("baseball team with the Fab Four,\n");
		printf("OR they can't make a Gridiron Gang with the ");
		printf("Avengers (or both!)\n");
	}

	// This second logical statement uses the OR operator to test whether the number of Star Wars movies is less than months in the year
	// OR the number of Harry Potter books is less than months in the year. If either statement is true, the statements will print.

	if ((starWars <= months) || (potterBooks <= months))
	{
		printf("\nYou could read one Harry Potter book a month, \n");
		printf("and finish them all in less than a year,\n");
		printf("OR you could see one Star Wars movie a months, \n");
		printf("and finish them all in less than a year.\n");
	}
	else
	{
		printf("Neither can happen -- too many books or movies, \n");
		printf("Not enough time!\n\n");
	}

	// This final logical statement uses the NOT operator to test whether the number of baseball players on a team added to the number of basketball players
	// on a team is NOT greater than the number of football players on a team. If so, the statements will print.

	if (!(baseball + basketball > football))
	{
		printf("\nThere are fewer baseball and basketball players\n");
		printf("combined than football players.\n");
	}
	else
	{
		printf("\nThere are more baseball and basketball players\n");
		printf("combined than football players.\n");
	}


	return 0;
}

