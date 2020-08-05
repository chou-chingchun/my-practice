//小到大排序 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,b,c,t;
	printf("請輸入三個變數:");
	scanf("%d%d%d",&a,&b,&c);
	if(c<a)
	{
		t=c;
		c=a;
		a=t;
	}
	if(c<b)
	{
		t=c;
		c=b;
		b=t;
	}
	if(b<a)
	{
		t=b;
		b=a;
		a=t;
	}	
	
	printf("小到大排列:%d%d%d",a,b,c);
	
	return 0;
}
