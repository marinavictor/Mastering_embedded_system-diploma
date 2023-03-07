/*
 ============================================================================
 Name        : HW_string.c
 Author      : marina
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int n=0;
	char text[100];
	printf("Enter a string\n");
	fflush(stdin);fflush(stdout);
	scanf("%s",&text[0]);

for(int m=0; m<=100;m++)
{
	if(text[m]==0)
	{
		break;
	}
	n++;
}

	printf("length of string : %d",n);
	return 0;
}
