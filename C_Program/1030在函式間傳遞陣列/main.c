#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void arrayrand(int v[10]);
void arrayprint(int v[10]);
int arraymax(int v[10]);
int main()
{
	int v[10]={0};
	arrayrand(v);//呼叫產生亂數的函式 
	arrayprint(v);//呼叫印出亂數的函式 
	printf("%d \n",arraymax(v));//呼叫算最大值的函式 
	return 0;
}

void arrayrand(int v[10])
{
	srand(time(0));//產生亂數 
	int i,j,counter[10]={0};
	for(i=0;i<10;i=i+1)
	{
		do
		{
			v[i]=rand()%10;//將亂數存在陣列中 
		}while(counter[v[i]]!=0);//檢查是否重複  
		counter[v[i]]++;//將出現的數字對應器++，出現5就式counter[5]++ 
	}
}

void arrayprint(int v[10])
{
	int i;
	for(i=0;i<10;i=i+1)
	{
		printf("%d ",v[i]);
	}
	printf("\n");
}

int arraymax(int v[10])
{
	int i,max;
	max=v[0];
	for(i=1;i<10;i=i+1)
	{
		if(v[i]>max)
		{
			max=v[i];
		}
	}
	return max;
}
