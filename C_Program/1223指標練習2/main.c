#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a=5;
	int *c;
	c=&a;
	printf("c=%d\n",*c);//5
	printf("a=%d\n",a);//5
	
	*c=*c+3;
	printf("c=%d\n",*c);//8
	printf("a=%d\n",a);//5
	
	a=a+5;
	printf("c=%d\n",*c);//8
	printf("a=%d\n",a);//10
	
	
	return 0;
} 
