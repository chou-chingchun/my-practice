#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int v[5];
	int* p;
	int i;
	for(p=v;p != &v[5];p=p+1)
	{
		*p=0;
	}
	for(i=0;i<5;i=i+1)
	{
		printf("%d\n",v[i]);
	}
	return 0;
}
