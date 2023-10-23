/*22. Write C program to accept the details of employee and display them using structure. Details 
consist of Employee ID, Name, Designation, Department, Salary.*/
#include<stdio.h>
struct employee
{
	int ID;
	char name[50];
	char desi[50];
	char depr[50];
	float salary;
};
int main()
{
 	struct employee n;
 	fflush(stdin);
 	printf("Enter the id=");
 	scanf("%d",&n.ID);
 	fflush(stdin);
 	printf("Enter the name=");
 	gets(n.name);
 	printf("Enter the designation=");
 	gets(n.desi);
 	printf("Enter the department=");
 	gets(n.depr);
 	printf("Enter the salary=");
 	scanf("%f",&n.salary);
 	
 	printf("\nID=%d",n.ID);
 	printf("\nName=%s",n.name);
 	printf("\ndesignation=%s",n.desi);
 	printf("\ndepartment=%s",n.depr);
 	printf("\nSalary=%f",n.salary);
 	

}
