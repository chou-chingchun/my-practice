#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n[10]={0},i,j;
	printf("請輸入10個整數:");
	for(i=1;i<=10;i=i+1)
	{
		scanf("%d ",&n[i-1]);
	}
	for(i=0;i<10;i=i+1)
	{
		for(j=0;j<10;j=j+1)
		{
			if(n[j]>n[j+1])
			{
			    int t=n[j];
			    n[j]=n[j+1];
			    n[j+1]=t;
			}
		}
	}
	for(i=0;i<10;i=i+1)
	{
		printf("%d ",n[i]);
	}
	return 0;
} 
