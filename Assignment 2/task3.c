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
float a,b,c;
printf("Enter 3 numbers : ");
fflush(stdin);fflush(stdout);
scanf("%f %f %f",&a,&b,&c);
if(a>b&&a>c)
{
printf("largest number is:%f ",a);
}
else if(b>a&&b>c)
{
printf("largest number is:%f ",b);
}
else
printf("largest number is:%f ",c);
return 0;
}


