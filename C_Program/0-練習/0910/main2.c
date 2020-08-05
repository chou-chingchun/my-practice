//有一個分數序列：2/1，3/2，5/3，8/5，13/8，21/13……程式設計求這個序列的前20項之和。
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float a,i=2,j=1,sum=0,x=0;
	for(a=1;a<=20;a=a+1)
	{
		sum=sum+i/j;
		x=i;//x=2
		i=i+j;//j=3
		j=x;//j=2
	}
	printf("%f",sum);
	return 0;
}

