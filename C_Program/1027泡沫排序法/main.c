#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,j,t,n[5]={0};//計數
	printf("請輸入5個正整數:");
	for(i=1;i<=5;i=i+1)//輸入五個數字，存入陣列 
	{
		scanf("%d",&n[i-1]);
	} 
	/*for(i=0;i<5;i=i+1)//印出剛剛輸入的陣列 
	{
		printf("%d ",n[i]);
	} 
	printf("\n");*/ 
	for(i=0;i<4;i=i+1)//將陣列從小排到大 
	{
		for(j=0;j<4;j=j+1)
	    {
		    if(n[j]>n[j+1])
		    {
			    t=n[j];
			    n[j]=n[j+1];
			    n[j+1]=t;
		    }
	    }
	}
	
	for(i=0;i<5;i=i+1)//印出排序後的陣列 
	{
		printf("%d ",n[i]);
	}
	
	return 0;
} 
