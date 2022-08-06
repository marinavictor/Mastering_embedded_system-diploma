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
printf("Enter 1 number : ");
fflush(stdin);fflush(stdout);
scanf("%d",&a);
if(a>0)
{
printf("%d is positive ",a);
}
else if(a==0)
{
printf("you entered %d ",a);
}
else
printf("the number you entered is negative");
return 0;
}


