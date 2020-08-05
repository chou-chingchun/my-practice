//求一個3×3矩陣對角線元素之和。從鍵盤輸入矩陣元素的值並輸出和的值. 
#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int i,j,a,cont,sum=0;
	for(i=1;i<=3;i=i+1)
	{
		for(j=1;j<=3;j=j+1)
		{
			printf("請輸入a=");
			scanf("%d",&a);
			if(i==j)
			{
				sum=sum+a;
			}
		}
	}
	printf("%d",sum);
	return 0;
}
