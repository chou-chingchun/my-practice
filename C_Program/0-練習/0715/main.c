#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("please enter a is:");
    scanf("%d",&a);
    printf("please enter b is:");
    scanf("%d",&b);
    a ^= b ^= a ^= b;
    
    
    
    printf("Finally a = %d, b = %d",a,b);
    
	return 0;
	
} 
