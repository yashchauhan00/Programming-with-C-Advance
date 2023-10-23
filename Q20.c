/*20. Write a menu-driven program in C to perform the following operations on string using standard 
library functions. 
i) Calculate Length of String 
ii) Reverse a given String 
iii) Concatenation of one string to another 
iv) Copy one String into another 
v) Compare two Strings*/
#include<stdio.h>
#include<string.h>
int main()
{
	int ch;
	fflush(stdin);
	printf("(1) Calculate Length of String \n");
	printf("(2) Reverse a given String  \n");
	printf("(3) Concatenation of one string to another \n");
	printf("(4) Copy one String into another \n");
	printf("(5) Compare two Strings \n");

	printf("\nEnter the choice=");
	scanf("%d",&ch);
	switch (ch)
	{
	case 1:
	{	
	char n[50];
	fflush(stdin);
	printf("Enter the string=");
	gets(n);
	printf("length of string=%d",strlen(n));
    }
    break;
    case 2:
    	{
    		char n[50];
    		fflush(stdin);
    		printf("Enter the string=");
    		gets(n);
    		printf("revers the string=%s",strrev(n));
		}
	break;
	case 3:
		{
			char a[50],b[50];
			fflush(stdin);
			printf("Enter the string a=");
			gets(a);
			printf("Enter the string b=");
			gets(b);
			printf("Concatenation string to another=%s",strcat(a,b));
		}
		break ;
		case 4:
			{
				char a[50],b[50];
				fflush(stdin);
				printf("Enter the string a=");
				gets(a);
				printf("Copy string b=%s",strcpy(b,a));
			}
			break;
			case 5:
				{
					char a[50],b[50];
					int cmp;
					fflush(stdin);
					printf("Enter the string a=");
					gets(a);
					printf("Enter the string b=");
					gets(b);
					cmp=strcmp(a,b);
					if(cmp==0)
					    {
						printf("string is same a and b");
					    }
						else
						{
							printf("string is not same a and b");
						}	
				}
				break;
				
    }
}
