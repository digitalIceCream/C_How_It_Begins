/*
Author:			John-Philipp Vogt
Date:			2022-07-30
Synopsis:		
Filename:		p5ch29.2.c
*/

#include <stdio.h>
#include <stdlib.h>
FILE * fptr;

int main()
{
	char letter;
	int i;

	fptr = fopen("/home/jpv/GitHub/C_How_It_Begins/Part5/letters.txt", "r+");

	if (fptr == 0)
	{
		printf("There was an error while opening the file.\n");
		exit(1);
	}

	printf("Which letter would you like to change? (1-26)?\n");
	scanf(" %d", &i);

	// Seeks that position from the beginning of the file
	fseek(fptr, (i-1), SEEK_SET); // Subtract 1 from the position
				      // because arrays start at 0
	
	// Write an * over the letter in that position
	fputc('*', fptr);

	// Now jump back to the beginning of the array and print it out
	
	fseek(fptr, 0, SEEK_SET);
	printf("Here is the file now:\n");
	for (i = 0; i < 26; i++)
	{
		letter = fgetc(fptr);
		printf("The next letter is %c.\n", letter);
	}
	
	fclose(fptr); // Again, you know what...

	return 0;
}

