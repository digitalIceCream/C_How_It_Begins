/*
Author:			John-Philipp Vogt
Date:			2022-07-22
Synopsis:		A simple program to illustrate the use of the malloc() and free()
			functions. 
Filename:		p4ch25.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int i, aSize;

	int * randomNums;

	time_t t;

	double total = 0;
	int biggest, smallest;
	float average;

	srand(time(&t));

	printf("How many random numbers do you want in your array?\n");
	scanf(" %d", &aSize);

	randomNums = (int *) malloc(aSize * sizeof(int));

	if (!randomNums)
	{
		printf("Random array allocation failed!\n");
		exit(1);
	}

	for (i = 0; i < aSize; i++)
	{
		randomNums[i] = (rand() % 500) +1;
	}

	biggest = 0;
	smallest = 500;

	for (i = 0; i < aSize; i++)
	{
		total += randomNums[i];
		if (randomNums[i] > biggest)
		{
			biggest = randomNums[i];
		}

		if (randomNums[i] < smallest);
		{
			smallest = randomNums[i];
		}

	}

	average = ((float)total)/((float)aSize);
	printf("The biggest random number is %d.\n", biggest);
	printf("The smallest random number is %d.\n", smallest);
	printf("The average of the random numbers is %.2f.\n", average);

	free(randomNums);

	return 0;
}

