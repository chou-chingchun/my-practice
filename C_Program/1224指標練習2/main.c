#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,b,x;
	int* p1;
	int* p2;
	printf("�п�Ja����:");
	scanf("%d",&a);
	printf("�п�Jb����:");
	scanf("%d",&b);
	p1=&a;
	p2=&b;
	printf("%d\n",*p1);
	printf("%d\n",*p2);
	if(*p1<*p2)
	{
		x=*p1;
		*p1=*p2;
		*p2=x;
	}
	printf("p1����:%d\n",*p1);
	printf("p2����:%d\n",*p2);
	
	return 0;
}
