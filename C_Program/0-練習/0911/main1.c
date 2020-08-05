//有一個分數序列：2/1，3/2，5/3，8/5，13/8，21/13……程式設計求這個序列的前20項之和。
#include <stdio.h>
#include <stdlib.h>


int main()
{
	float i=2,j=1,cont=0,sum;
	for(cont=1;cont<=20;cont=cont+1)
	{
		int x;
		sum=sum+i/j;
		x=i;
		i=i+j;
		j=x;
	  	
	}
	printf("總合為:%f",sum);
	return 0;
}
