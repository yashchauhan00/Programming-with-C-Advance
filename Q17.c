/*17. Write a menu driven program which performs following operations on strings. Write separate 
function for each option, 
- Check String is Substring of Another String 
- Count Occurrences of Character 
- Exit. */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int ch;
	printf("Enter the choice=");
	scanf("%d",&ch);
	switch (ch)
	{
	case 1:
		{
    		char str[50],anstr[50];
    		int n;
    		fflush(stdin);
    		printf("Enter the string=");
    		gets(str);
    		printf("Enter the another string=");
    		gets(anstr);
    		n=strstr(str,anstr);
    		if(n==0)
    		{
    			printf("string is not  substring");
			}
			else
			{
				printf("string is  substring");
			}
	    }
	    break;
	case 2:
		{
			char str[50],c;
			int i,count;
			fflush(stdin);
			printf("Enter the string=");
			gets(str);
			printf("Enter a character=");
			scanf("%c",&c);
			count=0;
			i=0;
			while(str[i]!='\0')
			{
				if(c==str[i])
				{
					count++;
				}
				i++;
			}
			if(count==0)
			   {
				printf("Not fount character");
			   }
			else
			   {
					printf("character is occ=%d",count);
			   }
		}
		break;
	case 3:
		{
			exit(0);
		}
    }
       			   
				
}
