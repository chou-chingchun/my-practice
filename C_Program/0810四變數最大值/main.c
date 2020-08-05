#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,b,c,d,min; 
	printf("please enter four integers:");
	scanf("%d%d%d%d", &a, &b ,&c ,&d);
	min = a;
	if(b<=min)
	{
		min = b;
	}
	if(c<=min)
	{
		min=c;
	}
	if(d<=min)
	{
		min=d;
	}
	
	printf("min is %d", min);
	
	
  
	
	return 0;
}
