#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a=3,b=9,c=5,t=0;
	printf("%d%d%d \n",a,b,c);
	//a.b¥æ´«
	t=a;//t=3
	a=b;//a=9 
	b=t;//b=3
	printf("%d%d%d \n",a,b,c);
	
	//b.c¥æ´«
	t=b;//t=3
	b=c;//b=5
	c=t;//c=3
	printf("%d%d%d \n",a,b,c); 


	return 0;
} 
