/*
Author:			John-Philipp Vogt
Date:			2022-07-28
Synopsis:		
Filename:		p5ch28.1.c
*/

#include <stdio.h>
#include <stdlib.h>
#include "bookinfo.h"
FILE * fptr;

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

	fptr = fopen("/home/jpv/GitHub/C_How_It_Begins/Part5/bookinfo.txt","w");

	if (fptr == 0)
	{
		printf("ERROR -- file could not be opened.\n");
		exit (1);
	}

	

	fprintf(fptr, "\nHere is the collection of books:\n");

	for (ctr = 0; ctr < 3; ctr++)
	{
		fprintf(fptr, "#%d: %s by %s", (ctr+1), books[ctr].title, books[ctr].author);
		fprintf(fptr, " is %d pages long and costs $%.2f.\n\n", books[ctr].pages, books[ctr].price);
	}

	fclose(fptr);

	return 0;
}

