/*
 ============================================================================
 Name        : HW_string_3.c
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
	char text[100];
	printf("Enter the string\n");
	fflush(stdout);fflush(stdin);
	scanf("%s",text);
	printf("the string reversed\n ");
	int x=strlen(text);
	for(int m=x; m>=0;m--)

	{
		printf("%c"	,text[m]);
	}
	return 0;}
