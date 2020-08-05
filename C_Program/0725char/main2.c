//從鍵盤輸入10個整數，統計其中正數、負數和零的個數，並在螢幕上輸出。
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int cout=0,a,cout1=0,cout2=0,cout3=0;//次數.輸入值.算>0.算<0.算=0 
	for(cout=1;cout<=10;cout=cout+1)
	{
		printf("請輸入一個數字:");
		scanf("%d",&a);
		if(a>0)
		{
			cout1=cout1+1;
		}
		if(a<0)
		{
			cout2=cout2+1;
		}
		if(a==0)
		{
			cout3=cout3+1;
		}
	}
	
	printf("有%d個正數\n",cout1);
	printf("有%d個負數\n",cout2);
	printf("有%d個0\n",cout3);
	
	
	
	return 0;
}
