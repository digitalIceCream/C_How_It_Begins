/*
Author:			John-Philipp Vogt
Date:			18.07.2022
Synopsis:		A simple program that searches for data in an array, then flags it and
			puts out related data form parrallel arrays.
Filename:		p4ch22.2.c
*/

#include <stdio.h>

int main()
{
	int gameScores[10] = {12, 5, 21, 14, 15, 3, 55, 21, 8, 10};
	int gameRebounds[10] = {7, 1, 4, 5, 5, 5, 11, 2, 8, 1};
	int gameAssists[10] = {2, 9, 3, 4, 6, 11, 1, 6, 9, 19};
	int bestGame = 0;
	int gmMark = 0;

	int i;

	for (i=0; i<10; i++)
	{
		if (gameScores[i] > bestGame)
		{
			bestGame = gameScores[i];
			gmMark = i;
		}
	}

	printf("The Player's best scoring game total:\n");
	printf("The best game was game #%d,\n", gmMark+1);
	printf("the Player scored %d points,\n", gameScores[gmMark]);
	printf("the Player grabbed %d rebounds, and\n", gameRebounds[gmMark]);
	printf("the Player dished %d assist(s).\n", gameAssists[gmMark]);

	return 0;
}

