/*
 ============================================================================
 Name        : HW_array3.c
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
		printf("Enter the rows and columns of the matrix :");
		int m,n,i,j;

		fflush(stdin);fflush(stdout);
		scanf("%d %d",&i,&j);
		float x[i][j];
		printf("Enter the Elements of the matrix : \r\n");
		fflush(stdin);fflush(stdout);
	for( m=0;m<i;m++)
	{
		for( n=0;n<j;n++)
		{
			printf(" Enter element x[%d][%d] :",m+1,n+1);
			fflush(stdin);fflush(stdout);
		scanf("%f",&x[m][n]);
		}
	}
	printf("the entered matrix\r\n");
	for(m=0;m<i;m++)
		{

			for( n=0;n<j;n++)
			{
				printf(" %2.1f ",x[m][n]);
			}
			printf("\r\n");
}
	printf("transpose of the matrix\r\n");
	for( n=0;n<j;n++)
			{

		for(m=0;m<i;m++)
				{
					printf(" %2.1f ",x[n][m]);
				}
				printf("\r\n");
	}
	return 0;
}
