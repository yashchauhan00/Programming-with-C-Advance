//15. C program to read a string and check if it is palindrome. 
#include <stdio.h>
#include <string.h>
 
int main()
{
	char s1[20],s2[20],camp;
	printf("Enter the string ");
	gets(s1);
	strcpy(s2,s1);
	strrev(s1);
	if(strcmp(s1,s2)==0)
	{
	  printf("palindrome");
	}
	else
	{
	  	printf("not palindrome");
	} 
	return 0;
}
