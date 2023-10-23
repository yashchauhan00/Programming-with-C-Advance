 //8. C program to read matrix of size 3*3 and display transpose of matrix
#include<stdio.h>
void main()
{
	int n[3][3],i,j;
	printf("Enter the matrix 3*3 =");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d",&n[i][j]);
		}
	}
	printf("\nmatrix of 3*3:\n\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d ",n[i][j]);
		}
			printf("\n");
	}
	printf("\ntranspose of matrix:\n\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d ",n[j][i]);
		}
		printf("\n");
	}
}
