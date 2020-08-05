//錯的 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, c, t;
	printf("請輸入三個變數:");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a<=c && c<=b)
	{
		t=b;
		b=c;
		c=t;  
	}
	
	if(b<=a && a<=c)
	{
		t=a;
		b=a;
		a=b;
	}
	
	if(b<=c && c<=a)
	{
		t=a;
		a=c;
		c=b;
		b=t;		
				
	}
	
	if(c<=a && a<=b)
	{
		t=a;
		a=b;
		b=c;
		c=t;
	}
	
	printf("%d%d%d",a,b,c);
	return 0;
}
