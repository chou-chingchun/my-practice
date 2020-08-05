#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int i,j,dice;
	int counter[6]={0};
	for(i=1;i<=6000;i=i+1)
	{
		dice = rand()%6+1;
		counter[dice-1]++;
	}
	for(j=1;j<=6;j=j+1)
	{
		printf("%d: %d\n",j,counter[j-1]);
	}		
}
