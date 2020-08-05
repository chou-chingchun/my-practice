#include <stdio.h>
#include <stdlib.h>


int main()
{
	int v[3]={1,2,3};
	int* p[3]={&v[0],&v[1],&v[2]};
	int i;
	for(i=0;i<3;i=i+1)
	{
		*p[i]=0;
	}
	printf("%d\n", *p[1]);
	return 0;
}
