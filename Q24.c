/*24. Write a menu driven program in 'C' which shows the working of library. The menu option should 
be 
i) Add book details. 
ii) Display book details. 
iii) List all books of given author. 
iv) List the count of books in the library. 
v) Exit.*/
#include<stdio.h>
#include<string.h>
int main()
{
	int ch;
	fflush(stdin);
	printf("(1) Add book details.")
	printf("(4) Display book details. \n");
	printf("(5) List all books of given author. \n");
	printf("(5)List the count of books in the library . \n");
	printf("Exit\n");

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
