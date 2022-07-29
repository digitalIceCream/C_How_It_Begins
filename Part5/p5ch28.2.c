/*
Author:			John-Philipp Vogt
Date:			2022-07-28
Synopsis:		
Filename:		p5ch28.2.c
*/

#include <stdio.h>
#include <stdlib.h>
FILE * fptr;

int main()
{
	char fileLine[100]; // Will hold each line of input
	fptr = fopen("/home/jpv/GitHub/C_How_It_Begins/Part5/bookinfo.txt","r");

	if (fptr != 0)
	{
		while (!feof(fptr))
		{
			fgets(fileLine, 100, fptr);
			if (!feof(fptr))
			{
				puts(fileLine);
			}
		}
	}
	
	else
	{
		printf("\nError opening file.\n");
	}

	fclose(fptr); // Always close your files

	return 0;
}

