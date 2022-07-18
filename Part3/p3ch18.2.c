/*
Author:			John-Philipp Vogt
Date:			18.07.2022
Synopsis:		A simple program illustrating the use of the putchar() function.
Filename:		p3ch18.2.c
*/

#include <stdio.h>
#include <string.h>

int main()
{	
	int i;
	char msg[25];

	printf("Type up to 25 characters and then press Enter...\n");

	for (i = 0; i < 26; i++)
	{
		msg[i] = getchar(); // Outputs a single char (from the ARRAY)
		if (msg[i] == '\n')
		{
			i--;
			break;
		}
	}

	putchar('\n'); // One line brak after the loop is done
	
	for (; i >= 0; i--)
	{
		putchar(msg[i]);
	}

	putchar('\n');

	return 0;
}

