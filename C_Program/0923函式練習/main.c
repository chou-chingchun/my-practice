#include <stdio.h>
#include <stdlib.h>

int max2(int,int);
int max3(int,int,int);
int main()
{
	int a,b,c,x,y;
	printf("�п�Ja=");
	scanf("%d",&a);
	printf("�п�Jb=");
	scanf("%d",&b);
	printf("�п�Jc=");
	scanf("%d",&c);
	printf("�̤j�ȬO%d",max3(a,b,c));
	
	return 0;
} 
int max3(int a,int b,int c)
{
	return max2(max2(a,b),c);
}

int max2(int a,int b)
{
	int max;
    max=a;
    if(b>=max)
    {
    	max=b;
	}
	
	return max;
}
