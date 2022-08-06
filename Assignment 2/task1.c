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
int a;
printf("Enter Value of a ");
fflush(stdin);fflush(stdout);
scanf("%d", &a);
if(a%2==0)
{
printf(" %d is even",a);
}
else
printf(" %d is odd",a);
return 0;
}

