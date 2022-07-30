/*
Author:			John-Philipp Vogt
Date:			2022-07-30
Synopsis:		A simple program illustrating passing an array to a function.
Filename:		p5ch31.2.c
*/

#include <stdio.h>
#include <string.h>

int main()
{
	char name[15] = "Micheal Hatton";
	printf("The name is now %s.\n", name);
	change(name);
	printf("Back in main(), the name is now %s.\n", name);

	return 0;
}

/******************************************************************************************/

change(char name[15]) // Receives the value of i
{
	//Change the string stored at the address pointed to by name
	
	strcpy(name, "XXXXXXXXXXXXXXX");
	return; // Returns to main
}


