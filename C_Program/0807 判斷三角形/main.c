#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,b,c; //三角形三邊
	printf("please enter three lengths:");
	scanf("%d%d%d", &a, &b, &c);
	if(a == b && b == c && a == c)
	{
		printf("this is Regular triangle");
		return 0;
	} 
	
	if(a == b || b == c || a == c )
	{
		printf("this is Isosceles triangle");
		return 0;
	} 
	
	printf("this is triangle");
	
	return 0;
} 
