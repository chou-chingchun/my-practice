#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int i,sum;
	int counter[11]={0};
	for(i=1;i<=100000;i=i+1)
	{
		int dice1=rand()%6+1;
		int dice2=rand()%6+1;
		sum = dice1 + dice2;
		counter[sum-2]=counter[sum-2]+1;
	}
	for(i=2;i<=12;i=i+1)
	{
		printf("%d : %d\n",i,counter[i-2]);
	}
	
	return 0; 
} 
