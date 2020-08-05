#include <stdio.h>
#include <stdlib.h>
int max10(int n[10]);
int avg10(int n[10]);
int min10(int n[10]);
int main()
{
	int i,n[10]={0};
	printf("請輸入10個整數:");
	
	for(i=1;i<=10;i=i+1)
	{
		scanf("%d",&n[i-1]);
	}
	printf("max:%d\n",max10(n));
	printf("avg:%d\n",avg10(n));
	printf("min:%d\n",min10(n));
	return 0;
}

int max10(int n[10])
{
	int i,max;
	max=n[0];
	for(i=1;i<10;i=i+1)
	{
		if(n[i]>max)
		max=n[i];
	}
	return max;
}

int avg10(int n[10])
{
	int i,sum,avg;
	for(i=0;i<10;i=i+1)
	{
		sum=sum+n[i];
	}
	avg=sum/10;
	return avg;
}
int min10(int n[10])
{
	int i,min;
	min=n[0];
	for(i=1;i<10;i=i+1)
	{
		if(n[i]<min)
		min=n[i];
	}
	return min;
	
}
