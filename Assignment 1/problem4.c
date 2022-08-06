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
float x ,y;
printf("Enter two numbers: ");
fflush(stdin);fflush(stdout);
scanf("%f %f",&x,&y);
float product=x*y;
printf("PRODUCT :%f ",product);
return 0;
}
