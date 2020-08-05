//從鍵盤上輸入10個數，求其平均值
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,average,cout,total=0;
	do
	{
		printf("請輸入:");
		scanf("%d",&a);
		total=total+a;
		cout=cout+1;
	}while(cout<=10);
	average = total/cout;
	printf("平均是:%d",average);
	
	
	return 0;
}
