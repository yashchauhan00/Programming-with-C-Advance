//19. Write a C program to accept a string & replace all occurrences of character 'a' with '*' symbol.
#include<stdio.h>
#include<string.h>
void main()
{
	char name[50],i,a;
	printf("Enter the names=");
	gets(name);
	for(i=0; i<50; i++)
	{
		if(name[i]=='a')
		{
			name[i]= '*';
		}
	}
	printf("Replace all occurrences of character 'a' with '*' symbol.\n");
	puts(name);
}
 
