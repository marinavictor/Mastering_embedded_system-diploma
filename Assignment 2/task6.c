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
 int a ,sum=0;
 printf("Enter an integer ");
 fflush(stdin);fflush(stdout);
 scanf("%d", &a);
for(int i=0;i<=a;i++)
{
sum+=i;
}
printf("%d",sum);
 return 0;
}


