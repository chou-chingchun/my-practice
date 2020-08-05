//用陣列實現以下功能：輸入5個學生成績，而後求出這些成績的平均值並顯示出來。
#include <stdio.h>
#include <stdlib.h>



int main()
{
	int score,sum=0,average=0,cont=1;
	do
	{
		printf("請輸入成績:");
		scanf("%d",&score);
		sum=sum+score;
		cont=cont+1;
	}while(cont<=5);
	average=sum/cont;
	printf("總和是:%d\n",sum);
	printf("平均是:%d\n",average);
	
	return 0;
}
