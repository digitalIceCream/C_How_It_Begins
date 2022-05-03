/*
Author:		John-Philipp Vogt
Date:		03.05.2022
Synopsis:	A program demonstrating the use of a self-made header file.
*/

#include <stdio.h>
#include "p1ch7.h"


int main()
{
	printf("Who gets tangled up in the past, present and future?\n");
	printf("Well its the %s!\n", FAMILY);

	printf("And who is the damn cutest?\n");
	printf("Well its %s!\n", QTPI);
	return 0;
}


