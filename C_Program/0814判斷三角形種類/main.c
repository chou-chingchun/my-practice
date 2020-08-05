#include <stdio.h>
#include <stdlib.h>

int main()
{
	int side1,side2,side3,t;
	printf("請輸入三角形三邊:");
	scanf("%d%d%d",&side1,&side2,&side3);
	if(side1>=side2) //如果side1>=side2,把兩數值對調 
	{
		t=side1;
		side1=side2;
		side2=t;
	}
	if(side1>=side3) // 果side1>=side3,把兩數值對調 
	{
		t=side1;
		side1=side3;
		side3=t;
	}
	if(side2>=side3) //如果side2>=side3,把兩數值對調  
	{
		t=side2;
		side2=side3;
		side3=t;
	}
	printf("%d%d%d \n",side1,side2,side3); //印出目前side1.side2.side3分別數多少數值 
	//side1 <= side2 <= side3 
	if(side1==side3 )
	{
		printf("這是正三角形\n");
	}
	else if(side1==side2 || side2==side3 )
	{
		printf("這是等腰三角形\n");
	}
	else if(side1*side1+side2*side2==side3*side3)
	{
		printf("這是直角三角形\n");
	}
    else
    {
    	printf("這是一般的三角形\n");
	}
		
	
	return 0;
} 
