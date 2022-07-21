/*
Author:			John-Philipp Vogt
Date:			2022-21-07
Synopsis:		A simple program that illustrate the use of pointers.
Filename:		p4ch24.c
*/

#include <stdio.h>

int main()
{
	// defining variables, and pointer variables
	int kids;
	int * pKids;
	float price;
	float * pPrice;
	char code;
	char * pCode;

	price = 17.50;
	pPrice = &price; // tells C to have 'pPrice' point to the memory address of 'int price'

	printf("\nHow many kids are you taking to the water park?\n");
	scanf(" %d", &kids); // scanf takes the user input and allocates it to the address of 'kids'

	pKids = &kids; // tells C to have 'pKids' point to the memory address of 'int kids'

	printf("\nDo you have a discount ticket for the park?\n");
	printf("Enter 'E' for employee discount, 'S' for Sav-More");
	printf("Discount, or N for no discount:\n\n");
	scanf(" %c", &code); // see above

	pCode = &code; // see above
	
	// trivial switch-case statement using 'normal' variables
	printf("\nFirst let's do it with the variables:\n\n");
	printf("You've got %d kids...\n", kids);
	switch (code) {
		case ('E'):
			printf("The employee discount saves you 25%% on the ");
			printf("$%.2f price.\n", price);
			printf("Total ticket cost: $%.2f\n\n", (price*.75*kids));
			break;
		case ('S'):
			printf("The Sav-more discount saves you 15%% on the ");
			printf("$%.2f price.\n", price);
			printf("\nTotal ticket cost: $%.2f\n\n", (price*.85*kids));
			break;
		default :
			printf("You will be paying the full price of ");
			printf("$%.2f for your tickets.\n\n", price);
	}

	// same as above put with pointer variables
	printf("\nLet's do it with the pointers:\n\n");
	printf("You've got %d kids...\n", *pKids); // dereferences 'kids', i.e.: has the printf()
						   // function output 'redirected'(??) to the 
						   // memory address of 'kids' via *pKids
	switch (*pCode) {
		case ('E'):
			printf("The employee discount saves you 25%% on the ");
			printf("$%.2f price.\n", *pPrice);
			printf("Total ticket cost: $%.2f\n\n", (*pPrice * .75 * *pKids));
			break;
		case ('S'):
			printf("The Sav-more discount saves you 15%% on the ");
			printf("$%.2f price.\n", *pPrice);
			printf("Total ticket cost: $%.2f\n\n", (*pPrice * .85 * *pKids));
			break;
		default :
			printf("You will be paying the full price of ");
			printf("$%.2f for your tickets.\n\n", *pPrice);
	}


	return 0;
}

