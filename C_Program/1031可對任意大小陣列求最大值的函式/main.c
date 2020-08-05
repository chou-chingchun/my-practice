#include <stdio.h>
#include <stdlib.h>
int maxv(int [],int);

int main()
{
	int a[3]={0};
	int b[5]={0};
	int i;
	printf("請輸入a陣列的元素:");
	for(i=0;i<3;i=i+1)
	{
		scanf("%d",&a[i]);
	}
	printf("請輸入b陣列的元素:");
	for(i=0;i<5;i=i+1)
	{
		scanf("%d",&b[i]);
	}
	printf("a陣列最大值為:%d\n",maxv(a,3));
	printf("b陣列最大值為:%d\n",maxv(b,5));
	return 0;
}

int maxv(int v[],int N)
{
	int i=0,max=0;
	max=v[0];
	for(i=1;i<N;i=i+1)
	{
		if(v[i]>max)
		{
			max=v[i];
		}
	}
	return max;
}
