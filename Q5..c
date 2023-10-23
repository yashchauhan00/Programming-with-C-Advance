//5. Read an array of 8 integers and also read a number to be searched. If search number is found 
//then print its position & if not found then print appropriate message.

#include<stdio.h>
void main()
{
	int n[8],i,p;
	printf("Enter 8 integer number in array=");
	for(i=0; i<8; i++)
	{
		scanf("%d",&n[i]);
	}
	printf("Enter sort list number=");
	scanf("%d",&p);
	for(i=0; i<8; i++)
	{
		if(n[i]==p)
		{
			printf("Array  position  =%d",i);
			exit(0);
		}
	}
			
		printf("Not found the position array");
        
}
