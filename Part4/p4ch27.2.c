/*
Author:			John-Philipp Vogt
Date:			2022-07-26
Synopsis:		
Filename:		p4ch27.2.c
*/

#include <stdio.h>
#include "bookinfo.h"
#include <stdlib.>

int main()
{
	int ctr;
	struct bookInfo * books[3];

	for (ctr = 0; ctr < 3; ctr++)
	{
		books[ctr] = (struct bookInfo*)malloc(sizefo(struct bookInfo));
		printf("What is the name of the book? #%d?\n", (ctr+1));
		gets(books[ctr]->title);
		puts("Who is the author?\n");
		gets(books[ctr]->title);
		puts("How much did the book cost?\n");
		scanf(" %d", &books[ctr]->pages);
		getchar();
	}

	printf("\n\nHere is the colleciton of books:\n");
	for (ctr = 0; ctr < 3; ctr++)
		{
			printf("#%d: %s by %s\n", (ctr+1), books[ctr]->title, books[ctr]->author);
			printf("It is %d pages long and costs $%.2f", books[ctr]->pages, books[ctr]->price);
			printf("\n\n");
			
		}

	return 0;
}

