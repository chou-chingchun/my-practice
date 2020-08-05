/*1）在主函式中，實現從鍵盤輸入10名學生某門課的成績，儲存在一維陣列中；
呼叫排序函式；對排序後的陣列中的元素按從高到低列印輸出。

2）編寫排序函式，使用陣列名做函式引數，實現對該成績的排序。*/

#include <stdio.h>
#include <stdlib.h>
void sort(int []);
int main()
{
	int n[10]={0};
	int* p;
	int i;
	for(i=0;i<10;i=i+1);
	{
		printf("請輸入第%d位同學的成績:",i+1);
		scanf("%d",&n[i]);
	}
	sort(n);
	for(i=0;i<10;i=i+1)
	{
		printf("%d\n",n[i]);
	}
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
		}
	}
}
