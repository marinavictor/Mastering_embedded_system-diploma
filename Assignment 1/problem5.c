/*
 ============================================================================
 Name        : problem2.c
 Author      : marina
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
int main()
{
char c;
printf("Enter a character: ");
fflush(stdin);fflush(stdout);
scanf("%c",&c);
int x=c;
printf("The ASCII value of %c is :%d ", c,x);
return 0;
}

