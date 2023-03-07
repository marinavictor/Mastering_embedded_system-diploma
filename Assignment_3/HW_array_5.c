/*
 ============================================================================
 Name        : project_array5.c
 Author      : marina
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include"stdio.h"
#include <stdlib.h>
int main()
{
	int i,num;
printf("enter no of elements :\n ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &i);

int array[100];

	printf("enter the elements :\n ");
	fflush(stdin);fflush(stdout);
	for (int m = 0; m < i; m++)
			scanf("%d", &array[m]);

	printf("Enter the element to be  searched :\n ");
	fflush(stdin);	fflush(stdout);
	scanf("  %d", &num);
	for(int m=0;m<i;m++)
	{
		if(array[m]==num)
		{
			printf("the element you searched for is located in :%d\n ",m+1);
		}
	}
return 0;
}
