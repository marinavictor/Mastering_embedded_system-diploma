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
int main() {
 int a ,product=1;
 printf("Enter an integer ");
 fflush(stdin);fflush(stdout);
 scanf("%d", &a);
 if(a<0)
 {
 printf("Error!!! factorial of negative number doesn't exist");
 }
for(int i=1;i<=a;i++)
{
product*=i;
}
printf("%d",product);
 return 0;
}


