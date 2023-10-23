//11. Write a C program to take the input into an array and reverse the element of the array (Dynamic 
//array). 
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,*ptr,sum=0;
	printf("Enter size of element=");
	scanf("%d",&n);
	ptr=(int*)calloc(n,sizeof(int));
    printf("Enter the element=");
    for(i=0; i<n; i++)
    {
    	scanf("%d",ptr+i);
    }
    for(i=n-1; i>=0; i--)
    {
    	printf("%d ",*(ptr+i));
	}
    return(0);
}
