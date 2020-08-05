#include <stdio.h>
#include <stdlib.h>

int max2(int,int);
int max3(int,int,int);
int main()
{
	int a,b,c,x,y;
	printf("請輸入a=");
	scanf("%d",&a);
	printf("請輸入b=");
	scanf("%d",&b);
	printf("請輸入c=");
	scanf("%d",&c);
	printf("最大值是%d",max3(a,b,c));
	
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
