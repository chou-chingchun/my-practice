/*定義一個5行3列的陣列，從鍵盤輸入各陣列元素的值，計算各陣列元素之和。*/ 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,j,sum=0;	
	int n[5][3]={0};
	for(i=0;i<5;i=i+1)
	{
		for(j=0;j<3;j=j+1)
		{
			scanf("%d",&n[i][j]);
			sum = sum + n[i][j];
		}
	}
	printf("%d",sum);
	
	return 0;
}

