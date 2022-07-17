/*
Author:			John-Philipp Vogt
Date:			17.07.2022
Synopsis:		A longer program mocking a two-level-menu user interface with switch-case statements and conditional encased in them.
Filename:		p3ch17.2.c
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int choice1;
	int choice2;

	// The potential decade choices
	
	printf("What do you want to see?\n");
	printf("1. The 1980s\n");
	printf("2. The 1990s\n");
	printf("3. The 2000s\n");
	printf("4. Quit\n");

	do
	{
		printf("Enter your choice: \n");
		scanf(" %d", &choice1);
		switch (choice1)
		{
			case (1):
			{
				printf("\nWhat would you like to see?\n");
				printf("1. Baseball\n");
				printf("2. The Movies\n");
				printf("3. US Presidents\n");
				printf("4. Quit\n");

				printf("Enter your choice!\n");
				scanf(" %d", &choice2);

				if (choice2 == 1)
				{
					printf("\n\nWorld Series Champions fo the 1980s:\n");
					printf("1980: Philadelphia Phillies\n");
					printf("1981: Los Angeles Dodgers\n");
					printf("1982: St. Louis Cardinals\n");
					printf("1983: Baltimore Orioles\n");
					printf("1984: Detroit Tigers\n");
					printf("1985: Kansas City Royals\n");
					printf("1986: New York Mets\n");
					printf("1987: Minnesota Twins\n");
					printf("1988: Los Angeles Dodgers\n");
					printf("1989: Oakland A's\n");
					printf("\n\n\n");
					break;
				}

				else if (choice2 == 2)
				{
					printf("\n\nOscar-Winning Movies in the 1980s:\n");
					printf("1980: Ordinary People\n");
					printf("1981: Chariots of Fire\n");
					printf("1982: Gandhi\n");
					printf("1983: Terms of Endearment\n");
					printf("1984: Amadeus\n1985: Out of Africa\n");
					printf("1986: Platoon\n");
					printf("1987: The Last Emperor\n");
					printf("1988: Rain Man\n");
					printf("1989: Driving Miss Daisy");
					printf("\n\n\n");
					break;
				}

				else if (choice2 == 3)
				{
					printf("\n\nThe US Presidents of the 1980s:\n");
					printf("1980: Jimmy Carter\n");
					printf("1980 - 1988: Ronald Reagan\n");
					printf("1989: George Bush\n");
					printf("\n\n\n");
					break;
				}

				else if (choice2 == 4)
				{
					exit(1);
				}

				else
				{
					printf("Sorry, that is not a valid choice!\n");
					break;
				}
			}
	
			case (2):
			{
				printf("\nWhat would you like to see?\n");
				printf("1. Baseball\n");
				printf("2. The Movies\n");
				printf("3. US Presidents\n");
				printf("4. Quit\n");

				printf("Enter your choice!\n");
				scanf(" %d", &choice2);

				if (choice2 == 1)
				{
					printf("\n\nWorld Series Champions of ");
					printf("the 1990s:\n");
					printf("1990: Cincinnati Reds\n");
					printf("1991: Minnesota Twins\n");
					printf("1992: Toronto Blue Jays\n");
					printf("1993: Toronto Blue Jays\n");
					printf("1994: No World Series\n");
					printf("1995: Atlanta Braves\n");
					printf("1996: New York Yankees\n");
					printf("1997: Florida Marlins\n");
					printf("1998: New York Yankees\n");
					printf("1999: New York Yankees\n");
					printf("\n\n\n");
					break;
				}

				else if (choice2 == 2)
				{
					printf("\n\nOscar-Winning movies in ");
					printf("the 1990s:\n");
					printf("1990: Dances with Wolves\n");
					printf("1991: The Silence of the Lambs\n");
					printf("1992: Unforgiven\n");
					printf("1993: Schindler's List\n");
					printf("1996: The English Patient\n");
					printf("1997: Titanic\n");
					printf("1998: Shakespeare in Love\n");
					printf("1999: American Beauty\n");
					printf("\n\n\n");
					break;
				}

				else if (choice2 == 3)
				{
					printf("\n\nUS Presidents of the 1990s:\n");
					printf("1990 - 1992: George Bush\n");
					printf("1993 - 1999: Bill Clinton\n");
					printf("\n\n\n");
					break;
				}

				else if (choice2 == 4)
				{
					exit(1);
				}
				
				else
				{
					printf("Sorry, that is not a valid choice!\n");
					break;
				}
			}

			case (3):
			{
				printf("\nWhat would you like to see?\n");
				printf("1. Baseball\n");
				printf("2. The Movies\n");
				printf("3. US Presidents\n");
				printf("4. Quit\n");

				printf("Enter your choice!\n");
				scanf(" %d", &choice2);

				if (choice2 == 1)
				{
					printf("\n\nWorld Series Champions of ");
					printf("the 2000s:\n");
					printf("the 2000s:\n");
					printf("2000: New York Yankees\n");
					printf("2001: Arizona Diamondbacks\n");
					printf("2002: Anaheim Angels\n");
					printf("2003: Florida Marlins\n");
					printf("2004: Boston Red Sox\n");
					printf("2005: Chicago White Sox\n");
					printf("2006: St. Louis Cardinals\n");
					printf("2007: Boston Red Sox\n");
					printf("2008: Philadelphia Phillies\n");
					printf("2009: New York Yankees\n");
					printf("\n\n\n");
					break;
				}

				else if (choice2 == 2)
				{
					printf("\n\nOscar-Winning Movies in ");
					printf("the 2000s:\n");
					printf("2000: Gladiator\n");
					printf("2001: A Beautiful Mind\n");
					printf("2002: Chicago\n2003: The ");
					printf("Lord of the Rings: The ");
					printf("Return of the King\n");
					printf("2004: Million Dollar Baby\n");
					printf("2005: Crash\n");
					printf("2006: The Departed\n");
					printf("2007: No Country for Old Men\n");
					printf("2008: Slumdog Millionaire\n");
					printf("2009: The Hurt Locker\n");
					printf("\n\n\n");
					break;
				}

				else if (choice2 == 3)
				{
					printf("\n\nUS President of the 2000s:\n");
					printf("2000: Bill Clinton\n");
					printf("2001 - 2008: George B. Bush");
					printf("2009: Barack Obama\n");
					printf("\n\n\n");
					break;
				}

				else if (choice2 == 4)
				{
					exit(1);
				}
				
				else
				{
					printf("Sorry, that is not a valid choice!\n");
					printf("Please, try again.");
					break;
				}
			}
			
			case (4):
			{
				exit(1);
			}

			default:
			{
				printf("\n%d is not a valid choice.\n", choice1);
				printf("Please, try again.\n");
				break;
			}
			
		}
	}

	while ((choice1 < 1) || (choice1 > 4));
		
	return 0;
}

