/*
 ============================================================================
 Name        : HW_array2.c
 Author      : marina
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int x;
	float sum,average;
	printf("Enter the numbers of data:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	float array[x];
	for(int i=0;i<x;i++)
	{
		printf("%d. Enter number :",i+1);
		fflush(stdin);fflush(stdout);
			scanf("%f",&array[i]);
		    sum = sum +array[i];
			average=sum/x;
	}

	printf("Average = %2.2f", average);
	return 0;
}
