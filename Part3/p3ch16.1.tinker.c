/*
Author:			John-Philipp Vogt
Date:			15.07.2022
Synopsis:		This program uses various loops and two break statements. It asks for a number of scores to be input and calculates
			the average to those. NB: If this is run, as per the teststrings, there is something weird happening:
			numTest jumps from the initial input to some 8-digit number and C knows the total before it is computed...
Filename:		p3ch16.1.tinker.c
*/

#include <stdio.h>

int main()
{
	int numTest, numTest1;
	float stTest, avg, total = 0.0;

	do
	{
		printf("How many test scores to record?\n");
		scanf(" %d", &numTest1);

		if (numTest1 < 1 || numTest1 > 100)
		{
			printf("ERROR: 0 or too many students!\n");
			break;
		}
	}
	while (numTest1 < 1 || numTest1 > 100);
	printf("Teststring0: numTest1 = %d\n", numTest1);

	if (numTest1 >= 1 && numTest1 <= 100)
	{
	// Asks for up to 25 tests
	
		for (numTest = 0; numTest < numTest1 ; numTest++)
		{
			printf("Teststring1: numTest = %d.", numTest);
			// Get the test scores, and check if -1 was entered
			printf("\nWhat is the next student's test score? ");
			scanf(" %f", &stTest);
			if (stTest < 0.0 || stTest > 100.0)
			{
				printf("ERROR: Invalid test score. Aborting.\n");
				break;
			}
		total += stTest;
		}

	printf("Teststring2:\tnumTest = %d,\n\t\tstTest = %f,\n\t\ttotal = %f.\n", numTest, stTest, total);

	}

	printf("Teststring3:\tnumTest = %d\n\t\tnumTest1 = %d\n\t\tstTest = %f\n\t\ttotal = %f\n\t\taverage = %f\n");

	avg = total / numTest1;

	printf("\nThe average is %.2f%%.\n", avg);

	return 0;
}

