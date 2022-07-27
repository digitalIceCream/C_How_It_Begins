/*
Author:			John-Philipp Vogt
Date:			2022-07-22
Synopsis:		A header file for p4ch27 which defines the data structure p4ch27 uses.
Filename:		bookinfo.h
*/


struct bookInfo {
	char title[40];
	char author[25];
	float price;
	int pages;
};

