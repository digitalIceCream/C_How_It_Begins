/*
Author:		John-Philipp Vogt
Date:		08.05.2022
Synopsis:	A simple program that asks the user for a number of tyres and price per tyre.
		It then calculates a total price, adding sales tax.
Filename:	p2ch9.2.c
*/

#include <stdio.h>
#define SALESTAX .07	// Defining a constant for the salestax (NB: no explicit variable, C just knows?)

int main()
{
	// Variables for the number of tyres purchased, price, a before tax total, and a total cost with tax

	int numTyres;
	float tyrePrice, beforeTax, netSales;

	// Get number of tyres purchased and price per tyre

	printf("How many tyres did you purchase? ");
	scanf(" %d", &numTyres);

	printf("What was the cost per tyre (enter in $XX.XX format, please)? ");
	scanf(" $%f", &tyrePrice);

	// compute the price

	beforeTax = tyrePrice * numTyres;
	netSales = beforeTax + (beforeTax * SALESTAX);

	printf("You spent $%.2f on your tyres!\n", netSales);
	
	return 0;
}


