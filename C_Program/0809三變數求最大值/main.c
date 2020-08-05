#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,b,c,max; 
	printf("please enter three integers:");
	scanf("%d%d%d", &a, &b ,&c);
	max = a;
	if(b>=max)
	{
		max = b;
	}
	if(c>=max)
	{
		max=c;
	}
	
	printf("maxiumn is %d", max);
	
	
	/*if(a>=b && a>=c)
	{
		printf("maximun is %d",a);
		
	}
	
	if(b>a && b>=c)
	{
		printf("maximun is %d",b);
	}
	
	if(c>=a && c>b)
	{
		printf("maximun is %d",c);
	}	*/
	
	
  
	
	return 0;
}
