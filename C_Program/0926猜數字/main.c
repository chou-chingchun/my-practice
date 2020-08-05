#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

void print_guess(int,int);



int main() 
{
	srand(time(0));
    int answer=rand()%100;
	int guess;
	//printf("%d\n",answer);
	do
	{
		printf("請輸入你猜的數字:");
		scanf("%d",&guess);
		print_guess(guess,answer);
	}while(guess!=answer);
	printf("答案是%d",answer);
	return 0;
}

void print_guess(int guess,int answer)
{
	
	if(guess>answer)
		{
			printf("太大了\n"); 
		}
		if(guess<answer)
		{
			printf("太小了\n"); 
		}
		if(guess==answer)
		{
			printf("答對了\n"); 
		}
	return;
}
