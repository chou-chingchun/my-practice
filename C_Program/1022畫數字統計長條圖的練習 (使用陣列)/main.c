#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,j;//計數
	int n;//輸入的數字
	int b[10]={0};//計數的陣列
	printf("請輸入10個整數:");
	for(i=1;i<=10;i=i+1)
	{
		scanf("%d",&n);
		b[(n-1)/10]++;
	}
	for(i=1;i<=10;i=i+1)
	{
		printf("%3d:",i*10);
		for(j=1;j<=b[i-1];j=j+1)
		{
			 printf("*");
		}
		printf("\n");
	} 
	
	
	return 0;
} 
