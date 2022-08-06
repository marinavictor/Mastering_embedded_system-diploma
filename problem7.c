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
int a,b;
printf("Enter Value of a ");
fflush(stdin);fflush(stdout);
scanf("%d", &a);
printf("\r\nEnter Value of b ");
fflush(stdin);fflush(stdout);
scanf("%d", &b);
a=a-b; b=a+b; a=b-a;
printf("\nAfter Swapping: x = %d, y = %d", a, b);
return 0;
}

