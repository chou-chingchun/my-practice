#include <stdio.h>
#include <stdlib.h>

int main()
{
	int integer1, integer2;
	printf("please enter the first number:");
	scanf("%d",&integer1);
	printf("please enter the second number:"); 
    scanf("%d",&integer2);
    
    integer1 ^= integer2 ^= integer1 ^= integer2;
    
   
    printf("integer1 is %d\n",integer1);
    printf("integer2 is %d",integer2);
    return 0;
}

