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
		printf("�п�J�A�q���Ʀr:");
		scanf("%d",&guess);
		print_guess(guess,answer);
	}while(guess!=answer);
	printf("���׬O%d",answer);
	return 0;
}

void print_guess(int guess,int answer)
{
	
	if(guess>answer)
		{
			printf("�Ӥj�F\n"); 
		}
		if(guess<answer)
		{
			printf("�Ӥp�F\n"); 
		}
		if(guess==answer)
		{
			printf("����F\n"); 
		}
	return;
}
