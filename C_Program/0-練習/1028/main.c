/*將一個有5個元素的陣列中的值(整數)按逆序重新存放。
例: 原來順序為:8、6、5、4、1，要求改為1、4、5、6、8*/ 
#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int i,j,t,n[5]={0};
	printf("請輸入五個整數:");
	for(i=1;i<=5;i=i+1)//輸入整數 
	{
		scanf("%d",&n[i-1]);
	}
	for(i=0;i<4;i=i+1)//按逆序排列 
	{
		for(j=0;j<4-i;j=j+1)
		{
			t=n[j];
			n[j]=n[j+1];
			n[j+1]=t;
			//printf("i=%d j=%d n[%d]=%d n[%d]=%d \n",i,j,i,n[i],j,n[j]);
		}
				
	}
	for(i=0;i<5;i=i+1)//印出結果 
	{
		printf("%d ",n[i]);
	}
	return 0;
}
