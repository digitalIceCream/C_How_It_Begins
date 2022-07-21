/*
Author:			John-Philipp Vogt
Date:			18.07.2022
Synopsis:		A simple program showing how to wrangle arrays - how to fill them and 
			iterate through them with loops.
Filename:		p4ch21.c
*/

#include <stdio.h>

int main()
{
	int gameScores[10] = {12, 5, 21, 15, 32, 10};
	int totalPoints = 0;
	int i;
	float avg;

	for (i = 6; i < 10; i++)
	{
		printf("What did the player score in game %d?\n", i+1);
		scanf(" %d", &gameScores[i]);
	}
	
	for (i=0; i < 10; i++)
	{
		totalPoints += gameScores[i];
	}

	avg = ((float)totalPoints/10);

	printf("\n\nThe Players's scroing average is %.1f.\n", avg);

	return 0;
}

