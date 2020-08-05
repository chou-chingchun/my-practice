//程式設計序實現求1-200之間的所有數的乘積並輸出。
#include <stdio.h>
#include <stdlib.h>

int main()
{
	unsigned int a=1,answer=1;
	for(a=1;a<=200;a=a+1)
	{
		answer=answer*a;
	}
	printf("%d\n",answer);
	
	
	return 0;
}
