/*從鍵盤輸入30名學生的成績資料，求其中的最高分、最低分和平均分。
（提示：用陣列存放成績資料）*/ 
#include <stdio.h>
#include <stdlib.h>
int max(int n[10]);
int min(int n[10]);
int avg(int n[10]);
int main() 
{
	int i;
	int total=0;
	int n[10]={0};
	for(i=1;i<=10;i=i+1)
	{
		
		printf("請輸入第%d位學生成績:",i);
		scanf("%d",&n[i-1]);
	}
	printf("%d \n",max(n));//最高分 
	printf("%d \n",min(n));//最低分 
	printf("%d \n",avg(n));//平均分 
	return 0;
}
int max(int n[10])
{
	int i,max;
	max=n[0];//先把最大值假設為n[0] 
    for(i=1;i<10;i=i+1)
	{
		if(n[i]>=max)
		{
			max=n[i];
		}
	}
	return max;
}
int min(int n[10]) 
{
	int i,min;
	min=n[9];//先把最小值假設為n[0] 
	for(i=8;i>=0;i=i-1)
	{
		if(n[i]<min)
		{
			min=n[i];
		}
	}
	return min;
}
int avg(int n[10])
{
	int i,total=0,avg;
	for(i=0;i<10;i=i+1)
	{
		total=total+n[i];//加總 
	}
	//printf("%d,%d\n",total,i);
	avg=total/i;
	return avg; 
}


