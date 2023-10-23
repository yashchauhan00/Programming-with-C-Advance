//10. Write a C program to accept 5 numbers, store them in array and find out the smallest number 
//using pointer. 

#include<stdio.h>
void main()
{
	int n[5],*p,i,small;
	printf("Enter the five numbers=");
	for(i=0; i<5; i++)
	{
	   scanf("%d",&n[i]);
	}
	p=&n[0];
	small=n[0];
	for(i=0; i<5; i++)
	{
		if(*(p+i)<small)
		{
			small=*(p+i);
		}
	}
	printf("smallest number=%d",small);
}

