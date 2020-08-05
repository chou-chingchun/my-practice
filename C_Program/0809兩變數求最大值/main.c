#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,b;
	printf("please enter a:");
	scanf("%d", &a);
	printf("please enter b:");
	scanf("%d", &b);
	
	if(a >= b)
	{
		printf("maxinum is a=%d", a);
	}
	
	if(a < b)
	{
		printf("maxinum is b=%d",b);
	}
	
	return 0;
}
  
