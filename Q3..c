 //3. Write a 'C' Program to accept 'n' numbers from user, store these numbers into an array. 
// find out Largest and Smallest number from an array
#include<stdio.h>
int main()
{
	int n[20],size,i,tem,t;
	printf("How many want input  number =");
	scanf("%d",&size);
	for(i=0; i<size; i++)
	{
		printf("Enter integer numbers=");
		scanf("%d",&n[i]);
	}
	tem=n[0];
	for(i=0; i<size; i++)
	{
		if(n[i]>tem)
		{
			tem=n[i];
		}
    }
    printf("Greatest number of array =%d\n",tem);
    
    for(i=0; i<size; i++)
    {
    	if(n[i]<tem)
    	{
    		tem=n[i];
		}
	}
	printf("Smallest number of array =%d\n",tem);
    return(0);
}
    
    



