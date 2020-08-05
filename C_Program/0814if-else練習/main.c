#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,b;
	printf("請輸入兩變數:");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		printf("a>b\n");
	}
	else if(a<b)
	{
		printf("a<b\n");
	}
	else
	{
			printf("a=b\n");
	}

    
	return 0;
	
} 
