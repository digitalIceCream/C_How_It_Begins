/*
Author:			John-Philipp Vogt
Date:			17.07.2022
Synopsis:		This program illustrates a top-level-menu user interface using do-while loop and switch-case statements.
Filename:		p3ch17.1.c
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int choice;

	printf("What do you want to do?\n");
	printf("1. Add New Contact\n");
	printf("2. Edit Existing Contact\n");
	printf("3. Call Contact\n");
	printf("4. Text Contact\n");
	printf("5. Exit\n");
	
	do
	{
		printf("Enter your choice: ");
		scanf(" %d", &choice);
		switch (choice)
		{
			case (1): printf("\nTo add you will need the contact's\n");
				  printf("First name,\nlast name,\nand number.\n");
				  break;
			case (2): printf("\nGet ready to enter the name of ");
				  printf("the contact you wish to change.\n");
				  break;
			case (3): printf("\nWhich contact do you wish to call?\n");
				  break;
			case (4): printf("\nWhich contact do you wish to text?\n");
				  break;
			case (5): exit(1); // Exits the program early
	
			default:  printf("\n%d is not a valid choice.\nSorry try again.\n", choice);
				  printf("1. Add New Contact\n");
				  printf("2. Edit Existing Contact\n");
				  printf("3. Call Contact\n");
				  printf("4. Text Contact\n");
				  printf("5. Exit\n");
				  
				  break;
		}
	}

	while ((choice >= 1) || (choice < 5));
					 
	return 0;
}

