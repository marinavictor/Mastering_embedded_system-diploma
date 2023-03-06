/*
 ============================================================================
 Name        : HWarray_4.c
 Author      : marina
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, num, loc;

	printf("enter no of elements :\n ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &i);

int array[100];

	printf("enter the elements :\n ");
	fflush(stdin);fflush(stdout);
	for (int m = 0; m < i; m++)
			scanf("%d", &array[m]);

	printf("Enter the element to be  inserted :\n ");
	fflush(stdin);	fflush(stdout);
	scanf("  %d", &num);

	printf("Enter the location :\n");
	fflush(stdin);fflush(stdout);
	scanf("%d", &loc);

int n= i-1;

	for (int m = i; m>loc; m--)
	{
		array[m]=array[n];


n--;
	}
	array[loc]=num;
	for (int m = 0; m <=i; m++)
			printf("%d\n", array[m]);
	return 0;
}
