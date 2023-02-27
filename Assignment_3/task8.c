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
 float a ,b;
 char x;
 printf("Enter operator either + or- or * or d (to divide) : ");
 fflush(stdin);fflush(stdout);
 scanf("%c",&x);
 printf("Enter two operands: ");
 fflush(stdin);fflush(stdout);
 scanf("%f %f", &a,&b);
 switch(x)
 {
 case'-':
{
 float sub=a-b;
 printf("%f - %f=%f",a,b,sub);
}
break;
 case'+':
 {
 float add=a+b;
 printf("%f + %f=%f",a,b,add);
 }
 break;
 case'*':
 {
 float product=a*b;
 printf("%f * %f=%f",a,b,product);
 }
 break;
 case'd':
 {
 float divide=a/b;
 printf("%f / %f=%f",a,b,divide);
 }
 break;
default:
printf("error\r\n");
break;
}
return 0;}


