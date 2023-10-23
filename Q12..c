//12. Write a 'C' program to accept 'n' numbers from user and sort them in ascending order using 
//Dynamic Memory Allocation.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,*ptr,tem,j;
	printf("Enter number of element=");
	scanf("%d",&n);
	ptr=(int*)malloc(n* sizeof(int));
    printf("Enter the element=");
    for(i=0; i<n; i++)
	{
		scanf("%d",(ptr+i));
    }
    for(i=0; i<n; i++)
    {
		for(j=i+1; j<n; j++)
		{
			if(*(ptr+i)>*(ptr+j))
			{
				tem=*(ptr+i);
				*(ptr+i)=*(ptr+j);
				*(ptr+j)=tem;
			}
		}
	}
	printf("Ascending order elements:");
	for(i=0; i<n; i++)
	{
		printf("%d ",*(ptr+i));
	}
}
    
