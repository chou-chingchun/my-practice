#include <stdio.h>
#include <stdlib.h>

int main()
{
	int v[5]={1,2,3,4,5};
	int *n;//v[0]¦ì¸m
	//int i;
	for(n=v;n!=&v[5];n=n+1)
	{
		printf("%d\n",*n);
	}
	return 0;
	
} 
