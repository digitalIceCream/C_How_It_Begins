/*
Author:			John-Philipp Vogt
Date:			18.07.2022
Synopsis:		
Filename:		p4ch23.1.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int ctr, inner, outer, didSwap, temp;
	int nums[10];
	time_t t;

	srand(time(&t)); // Seeds the RNG with unique timestamp

	for (ctr=0; ctr<10; ctr++)
		{
			nums[ctr] = (rand() % 99) + 1; // ((0-99)+1).
		}

	puts("\nHere is the list before the sort:");
	
	for (ctr=0; ctr<10; ctr++)
	{
		printf("%d\n", nums[ctr]);
	}

	for (outer=0; outer<9; outer++)
	{
		printf("Teststring 1: outer = %d\n\t\tinner = %d\n", outer, inner);

		didSwap = 0;

		for (inner=outer; inner<10; inner++)
		{
			printf("Teststring 2: outer = %d\n\t\tinner = %d\n", outer, inner);

			if (nums[inner] < nums[outer])
			{
				printf("Teststring 3: outer = %d\n\t\tinner = %d\n", outer, inner);

				temp = nums[inner];	   // 'saves' smaller value
				nums[inner] = nums[outer]; // Moves bigger value to the position of the smaller value
				nums[outer] = temp;	   // Assigns 'saved' value to the subscript of the bigger value
				didSwap = 1;
			}
		}

		if (didSwap == 0)
		{
			break;
		}
	}
	
	puts("\nHere is the list after the sort:");
	for (ctr = 0; ctr < 10; ctr++)
	{
		printf("%d\n", nums[ctr]);
	}

	return 0;
}

