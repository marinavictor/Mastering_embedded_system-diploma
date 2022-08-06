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
float a,b;
printf("Enter value of a : ");
fflush(stdin);fflush(stdout);
scanf("%f",&a);
printf("Enter value of b: ");
fflush(stdin);fflush(stdout);
scanf("%f",&b);
int temp=a;
a=b;
b=temp;
printf("After swaping the value of a is %f", a);
printf("After swaping the value of b is %f", b);
return 0;
}

