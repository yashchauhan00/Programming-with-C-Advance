//16. Write a C program to reverse a string using recursive function. 
#include<stdio.h>
void revers();
int main()
{
	printf("Enter the string=");
	revers();
	
}
void revers()
{
	int c;
	scanf("%c",&c);
	if(c!='\n')
	{
		revers();
		printf("%c",c);
	}
	
}
