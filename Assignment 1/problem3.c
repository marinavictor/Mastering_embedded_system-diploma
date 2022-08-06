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
int x ,y;
printf("Enter two integer: ");
fflush(stdin);fflush(stdout);
scanf("%d %d",&x,&y);
int sum=x+y;
printf("SUM :%d ",sum);
return 0;
}

