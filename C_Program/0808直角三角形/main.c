#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,b,c;//�T��
	printf("please enter three lengths:");
	scanf("%d%d%d", &a,&b,&c);
	
	if(a == b && b == c && a == c) //���T���� 
	{
		printf("this is Regular triangle\n");
		
	} 
	
	if(a == b || b == c || a == c ) //���y�T���� 
	{
		printf("this is Isosceles triangle\n");
		
	} 
	
	if((a*a + b*b == c*c) || (b*b + c*c == a*a) || (a*a + c*c == b*b)) //�����T���� 
	{
		printf("this is rectangular triangle\n");
		
	}
	
	else
	{
		printf("this is triangle\n");
	}
    

	return 0;
} 
