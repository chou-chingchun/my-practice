//程式設計序實現求1-1000之間的所有奇數的和並輸出。
#include <stdio.h>
#include <stdlib.h>



int main() 
{
	int a,sum;
	for(a=0;a<=1000;a=a+1)
	{
		if(a%2==1)
		{
			printf("%d\n",a);
			sum=sum+a;
		}
	}
	printf("總合為:%d",sum);
	
	return 0;
}
