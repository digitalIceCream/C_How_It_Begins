/*
Author:			John-Philipp Vogt
Date:			2022-07-29
Synopsis:		
Filename:		p5ch29.1.c
*/

#include <stdio.h>
#include <stdlib.h>
FILE * fptr;

int main()
{
	char letter;
	int i;

	fptr = fopen("/home/jpv/GitHub/C_How_It_Begins/Part5/letters.txt","w+");

	if (fptr == 0)
	{
		printf("There was an error while opening the file.\n");
		exit(1);
	}

	for (letter = 'A'; letter <= 'Z'; letter++) // Should iterate through the alphabet
	{					    // But something's seems not right with the encoding 
		fputc(letter, fptr);		    // in the output
	}

	puts("Just wrote letters A through Z!");

	// Reading the file backwards
	
	fseek(fptr, -1, SEEK_END); // Minus 1 byte from the end
	printf("Here is the file backwards:\n");

	for (i = 26; i > 0; i--)
	{
		letter = fgetc(fptr);
		// Reads a letter then backs up 2
		fseek(fptr, -2, SEEK_CUR);
		printf("The next letter is %c.\n");
	}
	
	fclose(fptr); // ALWAYS close your files

	return 0;
}

