#include <stdio.h>
#include<stdlib.h>

int main()
{
	int number=0,a,b;
	printf("請輸入低限:");
	scanf("%d", &a);
	printf("請輸入高限:");
	scanf("%d", &b);
	number=a;
	while(number<=b)
	{
		printf("%d\n",number);
		number=number+1;
	}
	
	
	
	return 0;
} 
