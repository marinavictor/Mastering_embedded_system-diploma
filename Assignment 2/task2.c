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
char x;
printf("Enter an alphabet: ");
fflush(stdin);fflush(stdout);
scanf("%c",&x);
if(x=='a'||x=='o'||x=='u'||x=='i'||x=='e')
{
printf(" %c is vowel.",x);
}
else
printf(" %c is cosonant",x);
return 0;
}

