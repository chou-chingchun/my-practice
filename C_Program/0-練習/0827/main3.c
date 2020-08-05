//鍵盤輸入2個加數，再輸入答案，如果正確，顯示"right"，否則顯示"error"
#include <stdio.h>
#include <stdlib.h>



int main() 
{
	int a,b,sum;
	printf("請輸入2個數字及兩數字的和:");
	scanf("%d%d%d",&a,&b,&sum);
	if(a+b ==sum)
	{
		printf("right");
	}
	else
	{
		printf("error");
	}
	
	return 0;
}
