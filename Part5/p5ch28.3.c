/*
Author:			John-Philipp Vogt
Date:			2022-07-28
Synopsis:		
Filename:		p5ch28.3.c
*/

#include <stdio.h>
#include <stdlib.h>

FILE * fptr;

int main()
{
	fptr = fopen ("/home/jpv/GitHub/C_How_It_Begins/Part5/bookinfo.txt", "a");

	if (fptr == 0)
	{
		printf("Error opening the file! Sorry!\n");
		exit (1);
	}

	// Appends a line at the end of the file
	fprintf(fptr, "\nMore books to come!\n");

	fclose(fptr); // Always close your files

	return 0;
}

