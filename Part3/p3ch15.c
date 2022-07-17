/*
Author:			John-Philipp Vogt
Date:			15.07.2022
Synopsis:		A simple program that takes in n amounts of movies and their ratings from the user and displays the favourite 
			and the least favourite movie supplied using nested if-conditionals in a for-loop after a while loop.
Filename:		p3ch15.c
*/

#include <stdio.h>
#include <string.h>

int main()
{
	int ctr, numMovies, rating, favRating, leastRating;
	char movieName[40], favourite[40], least[40];

	favRating = 0;
	leastRating = 10;

	do
	{
		printf("How many movies have you seen this year?\n");
		scanf(" %d", &numMovies);
		
		if (numMovies < 1)
		{
			printf("No movies! How can you rank them?\nTry again!\n\n");
		}
	}
	while (numMovies < 1);

	for (ctr = 1; ctr <= numMovies; ctr++)
	{
		printf("What was the name of the movie? ");
		printf("(one-word titles only!)\n");
		scanf(" %s", movieName);

		printf("On a scale of 1 to 10, what would ");
		printf("you rate it?\n");
		scanf(" %d", &rating);

		if (rating > favRating)
		{
			strcpy(favourite, movieName);
			favRating = rating;
		}

		if (rating < leastRating)
		{
			strcpy(least, movieName);
			leastRating = rating;
		}
	}

	printf("\nYour favourite movie was %s.\n", favourite);
	printf("\nYour least favourite movie was %s.\n", least);
	

	return 0;
}

