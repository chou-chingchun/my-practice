#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,answer=30;
	printf("請輸入你的猜測:"); 
	scanf("%d", &a);
    if(a>answer)
    {
    	printf("太大了");
	}
	else if(a<answer)
	{
		printf("太小了");
	}
	else
	{
		printf("恭喜猜對");
	}
	
	
	return 0;
} 
