//從鍵盤輸入兩個數，求出其最大值（要求使用函式完成求最大值，並在主函式中呼叫該函式）
//從鍵盤輸入你和你朋友的年齡，編成判斷誰的年齡最大，並列印最大者的年齡。
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,b,max;
	printf("請輸入兩正整數:");
	scanf("%d%d", &a,&b);
	max=a;
	if(b>max)
	{
		max=b;
	}
	printf("最大值是%d",max);
	
	return 0;
}
