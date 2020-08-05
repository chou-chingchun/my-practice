#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int a,sum=0,count=0,average=0;
	while(sum==0 || a!=0)
	{
		printf("請輸入數字:");
	    scanf("%d",&a);
		sum=sum+a;
		count=count+1;
	}
	average=sum/(count-1);
	printf("總合為:%d\n",sum);
	printf("總共加了%d個數字\n", count);
	printf("平均為%d\n",average);
	
		
	return 0;
}
