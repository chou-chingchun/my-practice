//有誤 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num1,num2;
	char op;
	float answer;
	printf("請輸入2整數以及運算子:");
	scanf("%d%d%c",&num1,&num2,&op);
	if(op=='+')
	{
		answer=num1+num2;
	}
	else if(op=='-')
	{
		answer=num1-num2;
	}
	else if(op=='*')
	{
		answer=num1*num2;
	}
	else 
	{
		answer=(float)num1/num2;
	}
	printf("答案是:%f",answer);
	
	return 0;
} 
