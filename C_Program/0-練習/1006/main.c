/*猜數遊戲。系統隨機產生一個整數，通過鍵盤輸入資料猜數，猜對為止，並要求統計猜的次數。
注：rand()函式可以產生0～32767間的正整數，程式中需包含stdlib.h。*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void answer(int);
int main()
{
	int a;
	srand(time(NULL));
	a=rand()%100+1;
	answer(a);
	
	
	return 0;
} 
void answer(int a)
{
	int guess,cout=0;
	do
	{
		printf("請輸入1~100你所猜的數字:");
		scanf("%d",&guess);
		if(guess>a)
		{
			printf("太大了\n");
		}
		if(guess<a)
		{
			printf("太小了\n");
		}
		if(guess==a)
		{
			printf("猜對了\n");
		}
		cout=cout+1;
		
	}while(guess!=a);
	printf("答案是%d\n",a);
	printf("猜了%d次\n",cout);
}
