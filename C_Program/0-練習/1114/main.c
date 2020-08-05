/*從鍵盤輸入10名學生的成績資料，
按成績從高到低的順序排列並輸出。（提示：用陣列存放成績資料）*/ 
#include <stdio.h>
#include <stdlib.h>

void sort(int []);
int main()
{
	int i,n[10]={0};
	
	for(i=1;i<=10;i=i+1)
	{
	    printf("請輸入第%d位學生成績:",i);		
		scanf("%d",&n[i-1]);//輸入成績 
	}
	/*for(i=0;i<10;i=i+1)
	{
		printf("%d ",n[i]);//確認輸入成績 
	}
	printf("\n");*/ 
	sort(n);
	return 0;
}
void sort(int n[])
{
	int i,j,t;
	for(i=0;i<10;i=i+1)
	{
		for(j=0;j<9;j=j+1)
		{
			if(n[j]>n[j+1])
			{
				t=n[j];
				n[j]=n[j+1];
				n[j+1]=t;
			}
			//printf("%d ",n[j]);//檢查每次排序結果 
		}
		//printf("%d\n",n[j]);//檢查每次排序結果 
	}
	for(i=0;i<10;i=i+1)
	{
		printf("%d ",n[i]);//排序完成 
	}
}
