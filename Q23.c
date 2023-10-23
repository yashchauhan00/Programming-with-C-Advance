/*23. Write a C program to accept details of 'n' employee(eno, ename, salary) and display the details 
of employee having highest salary. Use array of structure.*/
#include<stdio.h>
struct employee
{
	int no;
	char name[50];
	float salary; 
};
int main()
{
	struct employee n[50];
	int i,size,max,num;
	printf("How many details of employee=");
	scanf("%d",&size);
	for(i=0; i<size; i++)
	{
	printf("\Enter the no=");
	scanf("%d",&n[i].no);
	fflush(stdin);
	printf("Enter the name\n");
    gets(n[i].name);
	printf("Enter the salary\n");
	scanf("%f",&n[i].salary);
    }
    max=n[0].salary;
	for(i=0; i<size; i++)
	{
		if(n[i].salary>max)
		{
		max=n[i].salary;
		num=i;
	    }
	}
	printf("employee having highest salary\n");
	printf("\n%d",n[num].no);
	printf("\n%s",n[num].name);
	printf("\n%f",n[num].salary);
	
}
