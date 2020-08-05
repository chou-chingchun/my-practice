/*有一個分數序列：2/1，3/2，5/3，8/5，13/8，21/13……
程式設計求這個序列的前20項之和。*/

#include <stdio.h>
#include <stdlib.h>


int main() 
{
	float x=2,y=1,a,sum;
	int cout;
	for(cout=1;cout<=20;cout=cout+1)
	{
		sum=sum+x/y;
		a=x;//將X存進A 
		x=x+y;//新的X 
		y=a;//新的Y 
	}
	printf("%f",sum);
	
	return 0;
}
