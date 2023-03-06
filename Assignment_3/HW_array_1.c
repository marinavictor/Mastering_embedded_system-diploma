/*
 ============================================================================
 Name        : arrayproject.c
 Author      : marina
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include"stdio.h"
#include"string.h"
#include <stdlib.h>
int main()
{
	float x[2][2],y[2][2];

	printf("Enter the Elements of the first matrix :");

	fflush(stdin);fflush(stdout);
for(int i=0;i<2;i++)
{
	for(int j=0;j<2;j++)
	{
		printf(" x[%d][%d] :",i+1,j+1);
		fflush(stdin);fflush(stdout);
	scanf("%f",&x[i][j]);
}}
printf("Enter the Elements of the 2nd matrix :");
fflush(stdin);fflush(stdout);
for(int m=0;m<2;m++)
{
	for(int n=0;n<2;n++)
	{
		printf(" y[%d][%d] :",m+1,n+1);
		fflush(stdin);fflush(stdout);
	scanf("%f",&y[m][n]);
}}
printf("the sum of the two matrices \r\n");
for(int k=0;k<2;k++)
{
	for(int l=0;l<2;l++)
	{
		printf(" %2.1f\t", x[k][l]+y[k][l]);
	}

	printf("\r\n");
}
return 0;
}
