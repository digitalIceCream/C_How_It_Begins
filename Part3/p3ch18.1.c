/*
Author:			John-Philipp Vogt
Date:			18.07.2022	
Synopsis:		A simple program illustrating the use of putchar().
Filename:		p3ch18.1.c
*/

#include <stdio.h>
#include <string.h>

int main()
{
	int i;

	char msg[] = "C is fun";

	for (i = 0; i < strlen(msg); i++)
	{
		putchar(msg[i]); // Outputs a single character
		printf("\n");
	}
	putchar('\n'); // One line break after the loop is done.

	return 0;
}

