/*
Author:			John-Philipp Vogt
Date:			2022-30-07
Synopsis:		A simple program illustrating the use of global and local variables as a basic structured program (main() as 'TOC').
Filename:		p5ch30.c
*/

#include <stdio.h>
int g1 = 10;

int main()
{
	float l1;
	l1 = 9.0;

	printf("%d %.2f\n", g1, l1);
	prAgain();
	return 0;
}

float g2 = 19.0;

prAgain()
{
	int l2 = 5;

	// Can't print l1 -- it is local to main
	printf("%d %.2f %d\n", l2, g2, g1);

	return;
}

