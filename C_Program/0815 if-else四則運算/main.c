//���~ 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num1,num2;
	char op;
	float answer;
	printf("�п�J2��ƥH�ιB��l:");
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
	printf("���׬O:%f",answer);
	
	return 0;
} 
