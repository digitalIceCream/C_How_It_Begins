/*
Author:			John-Philipp Vogt
Date:			18.07.2022
Synopsis:		A simple program illustrating how to use parallel arrays with iterations,
			and a flag variable.
Filename:		p4ch22.1.c
*/

#include <stdio.h>

int main()
{
	int ctr, idSearch, found = 0;

	int custID[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	float custBal[10] = {0.00, 44.32, 71.00, 23423.00, 0.00, 00.00,
				00.00, 22.95, 99.34, 199.00};
	printf("\n*** Customer Balance Look-Up *** \n");
	printf("Specify customer ID:");
	scanf(" %d", &idSearch);

	for (ctr=0; ctr<10; ctr++)
	{
		if (idSearch == custID[ctr])
		{
			found = 1;
			break;
		}
	}

	if (found) // Is the same as: if (found == 1)
	{
		if (custBal[ctr] > 100.00)
		{
			printf("\n ** The customer's balance is $%.2f.\n", custBal[ctr]);
			printf("No additional credit.\n");
		}

		else
		{
			printf("\n ** The customer's balance is $%.2f.\n", custBal[ctr]);
			printf("Proceed.\n");
		}
	}

	else 
	{
		printf("** Customer ID | %d | not found.\n", idSearch);
	}

	return 0;
}

