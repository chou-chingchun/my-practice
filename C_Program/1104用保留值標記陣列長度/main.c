#include <stdio.h>
#include <stdlib.h>

int lenght(int []);
int main()
{
	int v[5]={0,1,2,3,-1};
	printf("size of v is:%d",lenght(v));
	return 0;
}
int lenght(int v[])
{
	int i=0;
	while(v[i]!=-1)
	{
		i=i+1;
	}
	return i+1;
}
