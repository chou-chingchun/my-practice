#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,b,c;//三邊
	printf("please enter three lengths:");
	scanf("%d%d%d", &a,&b,&c);
	
	if(a == b && b == c && a == c) //正三角形 
	{
		printf("this is Regular triangle\n");
		
	} 
	
	if(a == b || b == c || a == c ) //等腰三角形 
	{
		printf("this is Isosceles triangle\n");
		
	} 
	
	if((a*a + b*b == c*c) || (b*b + c*c == a*a) || (a*a + c*c == b*b)) //直角三角形 
	{
		printf("this is rectangular triangle\n");
		
	}
	
	else
	{
		printf("this is triangle\n");
	}
    

	return 0;
} 
