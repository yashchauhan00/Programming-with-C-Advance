/*21. Write a C Program to accept 'n' names from user, store them into 2-D array and search whether 
a given name is present in array or not.*/
#include<stdio.h>
#include<string.h>
int main()
{
	int n,count,i;
	printf("How many name entered=");
	scanf("%d",&n);
	char name[30],sort;
	fflush(stdin);
	printf("Enter the  names-");
	for(i=0; i<n; i++)
	{
		scanf("%s",&name[i]);
	}
	fflush(stdin);
	printf("Enter the sorted name=");
	scanf("%c",&sort);
	fflush(stdin);
	count=0;
	for(i=0; i<n; i++)
	{
		if(name[i]==sort)
		{
			count=1;
		}
	}
	if(count==1)
	   {
	 	printf("sorted array is  present");
	   }
	   else
	   {
		printf("sorted array is not present");
	   }
    
	
}

 
