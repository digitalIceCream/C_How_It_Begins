/*
Author:		John-Philipp Vogt
Date:		2022-05-02
Synopsis:	A simple program using printf() and some common escape sequences.
Filename:	p1ch4.c
*/

#include <stdio.h>

int main()
{
    printf("Just one small step for coders. One giant leap for");
    printf("programmers!\n\n\n");

    // more code to help with escape sequences and conversion characters

    printf("Quantity\tCost\tTotal\n");
    printf("%d\t\t%.2f\t$%.2f\n\n\n", 3, 9.99, 29.97);
    printf("Too many spaces    \b\b\b\b can be fixed with the ");
    printf("\\%c Escape character\n", 'b');
    printf("\n\a\n\a\n\a\n\aSkip a few lines, and beep ");
    printf("a few beeps. \n\n\n");
    printf("%s %c.", "You are kicking butt at learning", 'C');
    printf("You just finished chapter %d. \nYou have finished ", 4);
    printf("%.f%c of the book!", 12.5000, '%');
    printf("\n\nOne third equals %.2f or ", 0.333333);
    printf("%.3f or %.4f or ", 0.333333, 0.333333);
    printf("%.5f or %.6f\n\n\n", 0.333333, 0.333333);

    return 0;
}
