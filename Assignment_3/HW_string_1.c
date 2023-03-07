/*
 ============================================================================
 Name        : HW_string_1.c
 Author      : marina
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int m, num=0;
	char text[100],element;
	printf("Enter a string\n ");
			fflush(stdout);fflush(stdin);
	gets(text);
	printf("Enter a character to find the frequency \n ");
			fflush(stdout);fflush(stdin);
			scanf("%c",&element);
			for( m=0 ; m<=100;m++)
				{
				if(text[m]==element)

				num++;
				}
			printf("%d",num);
return 0;
}
