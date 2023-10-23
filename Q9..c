 //9.Write a 'C' program to swap the values of two variables by using call by reference.
#include<stdio.h>
void swap(int *, int *);
int main()
{
	int a,b,c;
	printf("Enter the two value=");
	scanf("%d%d",&a,&b);
	swap(&a,&b);
	//printf("swaping the values\n");
	//printf("a=%d b=%d",a,b);
	return 0;
}
void  swap(int *x, int *y)
{
   int z;
   z=*x;
   *x=*y;
   *y=z;
printf("swap the variable=%d %d",*x,*y);
}
      
