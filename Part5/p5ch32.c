/*
Author:			John-Philipp Vogt
Date:			2022-07-30
Synopsis:		A simple program illustrating the returning of a value from a function.
Filename:		
*/

#include <stdio.h>
// Prototyping float gradeAve, which SHOULD always be done for every function
// "If you programs has 20 functions, you should have 20 prototypes!"
float gradeAve(float test1, float test2, float test3);

int main()
{
	float grade1, grade2, grade3;
	float average;

	printf("What was the grade on the first test?\n");
	scanf(" %f", &grade1);

	printf("What was the grade on the second test?\n");
	scanf(" %f", &grade2);
	
	printf("What was the grade on the third test?\n");
	scanf(" %f", &grade3);
	
	// Pass the three floats to the function and return the average
	
	average = gradeAve(grade1, grade2, grade3);
	printf("\nWith those three test scores, the average is %.2f.\n", average);

	return 0;
}

/*****************************************************************************************/

float gradeAve(float test1, float test2, float test3)
{
	float localAverage;

	localAverage = (test1+test2+test3)/3;

	return (localAverage); // Returns the average to main
}
