#include <stdio.h>
#include <stdlib.h>

int f(int);
int main()
{
	int n;//樓梯數
	printf("請輸入樓梯數:");
	scanf("%d",&n);
	printf("方法有%d種\n",f(n)); 
	
	return 0;
}

int f(int n)
{
	if(n<=2)
	{
		return n;
	}
	return f(n-1)+f(n-2);
}
