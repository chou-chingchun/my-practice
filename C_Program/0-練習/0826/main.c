//輸入2個整數，求兩數的平方和並輸出
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,b,total;
	printf("請輸入兩整數:");
	scanf("%d%d",&a,&b);
	total=a*a+b*b;
	printf("a=%d\nb=%d\ntotal=%d\n",a,b,total);
	
	
	
	return 0;
} 
