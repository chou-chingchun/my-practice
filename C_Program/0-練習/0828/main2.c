/*9.編一程式每個月根據每個月上網時間計算上網費用，計算方法如下：
要求當輸入每月上網小時數,顯示該月總的上網費用(6分)*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a=0;//日期 
	int b=1;//小時 
	int sum;
	while(b<10)
	{
		printf("請輸入上網時數:");
		scanf("%d",&a);
		b=b+1;//日期累加 
		sum=sum+a;
	}
	printf("這個月總共有%d天\n上網總時數%d小時",b,sum);
	
	return 0;
} 
