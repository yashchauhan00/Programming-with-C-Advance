//14. C program to read string and count total number of digits in that string. 
#include<stdio.h>
int  main()
{
	char n[20],i;
	printf("Enter the sting=");
	gets(n);
	i=0;
	while(n[i]!='\0')
	{
		i++;
    }
    printf("count total number=%d",i);
	return(0);
}
