//6. C program to find sum of two matrices.
#include<stdio.h>
void main()
{
	int n[3][3],p[3][3],i,j,s[i][j];
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("Enter the matrix A=");
			scanf("%d",&n[i][j]);
		}
	}
		for(i=0; i<3; i++)
     	{
		   for(j=0; j<3; j++)
		    {
			printf("Enter the matrix B=");
			scanf("%d",&p[i][j]);
		    }
		}
		printf(" Add two matrix :\n");
	   for(i=0; i<3; i++)
	   {
		  for(j=0; j<3; j++)
		  {	
		     s[i][j]=n[i][j]+p[i][j];
		     	printf("%d ",s[i][j]);
		  }
		  printf("\n");
        }
}





