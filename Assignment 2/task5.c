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
 char ch;
 printf("Enter a character: ");
 fflush(stdin);fflush(stdout);
 scanf("%c", &ch);
 if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
 printf("%c is an alphabet.", ch);
 else
 printf("%c is not an alphabet.", ch);
 return 0;
}


