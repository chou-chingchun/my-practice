//求一個3×3矩陣對角線元素之和。從鍵盤輸入矩陣元素的值並輸出和的值.
#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int i=1,j,number,sum=0;
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			printf("請輸入數值:");
			scanf("%d",&number);
			if(i==j)
			{
				sum=sum+number;
			}
		}
	}
	printf("總合為%d",sum);
	return 0;
}





