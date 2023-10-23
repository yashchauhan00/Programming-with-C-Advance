//13. Write a c program to add two numbers using the concept of function pointer
#include<stdio.h>
void add(int * ,int *);
int main()
{
	int a,b,*p,*q;
	printf("Enter two numbers=");
	scanf("%d%d",&a,&b);
	p=&a;
	q=&b;
	add(p,q);
	return(0);
}
void add( int *p, int *q)
{
    int c;
    c=*p+*q;
    printf("sum=%d",c);
}
    
  
