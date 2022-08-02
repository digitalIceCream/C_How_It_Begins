/*
Author:		John-Philipp Vogt
Date:		2022-05-03
Synopsis:	A header file demonstrating the use of #include and #define (preprocessor directive and NOT comments!).
Filename:	p1ch7.h
*/

#include <stdio.h> // essentially a file-merge command, allows for the use of the printf() function e.g..
		   // built-in files are called with <filename>, custom ones with "filename".
		   // technically a header file thus the '.h' ending.
		   // if you want to have a certain value that will not change, or changes only rarely,
		   // you can use the #DEFINE statement to set those, before the main(){} function.
		   // Then, you are effectively create a constant as in:
		   // #define CONSTANT constantDefinition (see below):
		   // if you need them in multiple programs, you can place them in a header file like:

#define KIDS 3
#define FAMILY "The McFlys"
#define QTPI "ENOLAXD"
