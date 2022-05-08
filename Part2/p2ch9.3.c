/*
Author:		John-Philipp Vogt
Date:		08.05.2022
Synopsis:	A simple program that calculates the average of four grades and also does some other basic math.
Filename:	p2ch9.3.c
*/

#include <stdio.h>

int main()
{
	int grade1, grade2, grade3, grade4;
	float averageGrade, gradeDelta, percentDiff;

	// The student got 88s on the first and third test, so a multiple assignment statement works.

	grade1 = grade3 = 88;
	grade2 = 79;

	// The user needs to enter the fourth grade

	printf("What did you get on the fourth test");
	printf(" (An integet between 0 and 100)?\n");

	scanf(" %d", &grade4);

	averageGrade = (grade1 + grade2 + grade3 + grade4) / 4;

	printf("Your average is %.2f.\n", averageGrade);

	gradeDelta = 95 - averageGrade;
	percentDiff = 100 * ((95 - averageGrade) / 95);
	printf("Your grade is %.2f points lower that the ", gradeDelta);
	printf("top grade in the class (95).\n");
	printf("You are %.2f%c behind ", percentDiff, '%');
	printf("that grade!\n");

	return 0;
}
