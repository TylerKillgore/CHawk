/*
 ============================================================================
 Name        : CHawk.c
 Author      : Tyler Killgore
 Version     :
 Copyright   : Educational Purposes
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "names.c"

int main(void) {
		//char name[20];
		int num;
		printf("Enter a number : ");
		scanf("%d",&num);
		//only make array as large as number
		char** nameList[num];
		//get the number(set by user input) of names
		//getNames(**nameList, num);
		nameList = getNames(nameList, num);
		for (int i=0;i<num ; i++)
		{
			printf(nameList[i]);
		}
		printf("You entered %d",num);
	return EXIT_SUCCESS;
}
