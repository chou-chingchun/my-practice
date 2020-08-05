#include <stdio.h>
#include <stdlib.h>
int sum(int);
int main()
{
	int N;
	printf("請輸入正整數N=");
	scanf("%d",&N);
	printf("總合為%d",sum(N));
	
	
	
	return 0;
} 

int sum(int N)
{
	if(N==1)
	{
		return 1;
	}
	return sum(N-1)+N;

}
