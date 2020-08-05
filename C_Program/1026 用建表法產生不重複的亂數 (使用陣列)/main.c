//隨機產生10個1~10的數字，不重複 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand(time(0));
	int i,n,counter[10]={0};//陣列用來計算出現對應數字的次數 ，範圍是多少就要多大(0~100中產生10個就需要100) 
	for(i=1;i<=10;i=i+1)
	{
		do
		{
			n=rand()%10+1;
		}while(counter[n-1] != 0);//若不為0，代表該隊對應的數字已經出現過 
		printf("%d ",n);
		counter[n-1]++;
	}
	return 0;
} 
