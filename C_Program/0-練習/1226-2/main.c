/*隨機輸入若干個學生的體重，以輸入負數或零結束，
分別求最重和最輕的體重，並計算平均體重。*/
#include <stdio.h>
#include <stdlib.h>
 void bubby(int [],int);
int main()
{
	int people=0,i=0;
	printf("請輸入學生人數:");
	scanf("%d",&people);
	int kg[people];
	do
	{
		printf("請輸入第%d位學生體重:",i+1);
		scanf("%d",&kg[i]);
		if(kg[i]==0 || kg[i]<0 || (i+1)==people)
		break;
		i=i+1;
	}while(1);
	printf("people=%d\n",people);
	printf("kg[people]=%d\n",kg[people-1]);
	bubby(kg,people);
	return 0;
}
void bubby(int kg[],int people)
{
	int i,j,x;
	for(i=0;i<people-2;i=i+1)
	{
		for(j=0;j<people-3;j=j+1)
		{
			if(kg[j]>kg[j+1])
			{
				x=kg[j];
				kg[j]=kg[j+1];
				kg[j+1]=x;
			}
		}
	}
	printf("最大值是:%d\n",kg[people-1]);
	printf("最小值是:%d\n",kg[0]);
}

