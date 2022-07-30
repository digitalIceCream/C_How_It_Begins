/*
Author:			John-Philipp Vogt
Date:			2022-07-30
Synopsis:		A simple program illustrating passing multiple variable to a function.
Filename:		p5ch30.4.c
*/

#include <stdio.h>

// See following chapter for illustration of the following:
changeSome(int i, float *newX, int iAry[5]);

int main()
{
	int i = 10;
	int ctr;
	float x = 20.5;

	int iAry[] = {10, 20, 30, 40, 50};

	puts("Here are main()'s variables before the function:");
	printf("i is %d\n", i);
	printf("ctr is %d\n", ctr);
	printf("x is %.2f\n", x);

	for (ctr = 0; ctr < 5; ctr++)
	{
		printf("iAry[%d], is %d\n", iAry[ctr]);
	}

	// Now call the changeSome function, passing the value of i and the address of x
	changeSome(i, &x, iAry);

	puts("\nHere are main()'s variables after the function:");
	printf("i is %d\n", i);
	printf("x is %.2f\n", x);

	for(ctr = 0; ctr < 5; ctr++)
	{
		printf("iAry[%d] is %d\n", ctr, iAry[ctr]);
	}

	return 0;
}

/***********************************************************************************************/

changeSome (int i, float *newX, int iAry[5])

{
	// All variables are changed but only the float and array remain changed when the program
	// returns to main()
	
	// changed when the program returns to main()
	int j;

	i = 47;

	*newX = 97.6; // Same location as in main()
	
	for (j = 0; j < 5; j++)
	{
		iAry[j] = 100 + 100*j;
	}
	return;
}
