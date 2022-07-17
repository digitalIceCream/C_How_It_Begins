/*
Author:			John-Philipp Vogt
Date:			15.07.2022
Synopsis:		
Filename:		p3ch15.1.c
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

	if (numTest1 >= 1 && numTest1 >= 100)
	{
	// Asks for up to 25 tests
	
		for (numTest = 0; numTest < numTest1 ; numTest++)
		{
			// Get the test scores, and check if -1 was entered
			printf("\nWhat is the next student's test score? ");
			scanf(" %f", &stTest);
			if (stTest < 0.0 || stTest > 100.0)
			{
				printf("ERROR: Invalid test score. Aborting.");
				break;
			}
		}

		total += stTest;
	}

	avg = total / numTest1;
	printf("\nThe average is %.2f%%.\n", avg);

	return 0;
}

