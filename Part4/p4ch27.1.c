/*
Author:			John-Philipp Vogt
Date:			2022-07-22
Synopsis:		
Filename:		p4ch27.c
*/

#include <stdio.h>
#include "bookinfo.h"

int main()
{	
	int ctr;
	struct bookInfo books[3];

	for (ctr = 0; ctr < 3; ctr++)
	{
		printf("What is the name of the book #%d?\n", (ctr+1));
		gets(books[ctr].title);
		puts("Who is the author?\n");
		gets(books[ctr].author);
		puts("How much did the book cost?\n");
		scanf(" %f", &books[ctr].price);
		puts("How many pages in the book?\n");
		scanf(" %d", &books[ctr].pages);
		getchar(); // clear the las newline for the next loop (gets-problem?)
	}

	printf("\nHere is the collection of books:\n");
	for (ctr = 0; ctr < 3; ctr++)
	{
		printf("#%d: %s by %s", (ctr+1), books[ctr].title, books[ctr].author);
		printf(" is %d pages long and costs $%.2f.\n", books[ctr].pages, books[ctr].price);
	}

	return 0;
}

