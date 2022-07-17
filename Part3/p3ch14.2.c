/*
Author:			John-Philipp Vogt
Date:			15.07.2022
Synopsis:		A simple program illustrating a do...while loop.
Filename:		p3ch14.2.c
*/

#include <stdio.h>

int main()
{
	float num1, num2, result;
	char choice;

	do
	{
		printf("Enter your first number to multiply: ");
		scanf(" %f", &num1);

		printf("Enter your second number to multiply: ");
		scanf(" %f", &num2);

		result = num1 * num2;

		printf("%.2f times %.2f equals %.2f\n\n", num1, num2, result);
		printf("Do you want to enter another pair of numbers?\n");
		printf("Please enter \"Y\" or \"N\"!\n");
		scanf(" %c", &choice);
		
		if (choice == 'n')
		{
			choice = 'N';
		}
	}
	while (choice != 'N');
		
	return 0;
}
