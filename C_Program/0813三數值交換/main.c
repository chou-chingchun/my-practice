//�p��j�Ƨ� 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,b,c,t;
	printf("�п�J�T���ܼ�:");
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
	
	printf("�p��j�ƦC:%d%d%d",a,b,c);
	
	return 0;
}
