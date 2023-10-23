/*18. Write a C program to accept 5 names and store them into an array. Sort the elements in 
alphabetical order.*/
#include<stdio.h>
#include<string.h>
int main()
{
      char names[6][10],temp[10];
      int i,j;
      printf("Enter 5 name =");
        for(i=0; i<6; i++)
          {
    	    gets(names[i]);
	      }
	  printf("\n Given array is:\n");
	    for(i=0; i<6; i++)
	     {
		   printf("\n%s",names[i]);
	     }
	    for(i=0; i<6-1; i++)
	    {
		
		   for(j=i+1; j<5; j++)
		    {
		   	 if(strcmp (names[i],names[j])>0)
		   	    {
		   	 	  strcpy(temp,names[i]);
		          strcpy(names[i],names[j]);
		          strcpy(names[j],temp);
				}
		    }
		}
      printf("Sorted array is:\n");
      for(i=0; i<5; i++)
        {
  	       printf("\n%s",names[i]);
        }
       return 0;
		
}

