  //C program to read an array of 7 integer numbers and sort it in ascending order
#include<stdio.h>
void main()
{
	int a[7],i,j,tem; 
	printf("Enter 7 integer numbers=");
	for(i=0; i<7; i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0; i<7; i++)
	{
		for(j=i+1; j<7; j++)
		{
			if(a[i]>a[j])
			{
				tem=a[i];
				a[i]=a[j];
				a[j]=tem;
			}
		}
	}
	printf("array element:");
	for(i=0; i<7; i++)
	{
		printf("%d ",a[i]);
	}
}
