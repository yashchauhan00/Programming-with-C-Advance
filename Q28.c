//28. Write a c program to understand all the bitwise operators available in c. 
#include <stdio.h>
int main() 
{
    int a = 12, b = 25,num=212, i;
    printf("\nBitwise AND = %d", a&b);
    printf("\nBitwise OR = %d", a|b);
    printf("\nBitwise XOR = %d", a^b);
     printf("\nBitwise complement = %d",~35);
for (i=1; i<=2; i++) 
    {
        printf("\nRight shift by %d: %d", i, num>>i);
    }
    printf("\n");

    for (i=1; i<=2; i++) 
	{
        printf("Left shift by %d: %d\n", i, num<<i);    
    }
}
