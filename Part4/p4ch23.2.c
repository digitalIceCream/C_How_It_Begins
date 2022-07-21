/*
Author:			John-Philipp Vogt
Date:			19.07.2022
Synopsis:		
Filename:		p4ch23.2.c
*/

#include <stdio.h>

int main()
{
	// The great set-up
	int ctr;
	int idSearch;
	int found = 0;

	int custID[10] = {313, 453, 502, 101, 892, 475, 792, 912, 343, 633};
	float custBal[10] = {0.00, 45.43, 71.23, 301.56, 9.08, 192.41, 389.00, 299.67, 18.31, 59.54};

	int tempID, inner, outer, didSwap, i;
	float tempBal;

	// Sorting arrays by customer ID
	for (outer = 0; outer < 9; outer++)
	{
		didSwap = 0;
		for (inner = outer; inner < 10; inner++)
		{
			if (custID[inner] < custID[outer]
			{
				tempID = custID[inner];
				tempBal = custBal[inner];

				custID[inner] = custID[outer];
				tempBal[inner] = custBal[outer];
				custID[outer] = tempID;
				tempBal[outer] = tempBal;
				didSwap = 1;
			}
			
		}

		if (didSwap == 0)
		{
			break;
		}
	}

	printf("\n\n *** Customer Balance Lookup *** \n");
	printf("What is the CustomerID?");
	scanf(" %d", &idSearch);

	for (ctr = 0; ctr < 10; ctr++)
	{
		if (idSearch == custID[ctr])
		{
			found = 1;
			break;
		}

		if (custID[ctr] > idSearch)
		{
			break;
		}
	}

	if (found == 1)
	{
		if (custBal[ctr] > 100)
		{
			printf("\n ** The customer's (%d) balance is $%.2f.\n", custID[ctr], custBal[ctr]);
			printf("No additional credit!\n");
		}

		else
		{
			printf("The customer's credit is good!\n");
		}
	}
	
	else
	{
		printf("** You have entered and incorrect customer ID. **\n");
		printf("ID %3d was not found in the list.\n", idSearch);
	}

	return 0;
}
